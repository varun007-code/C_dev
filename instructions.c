#include <stdio.h>
#include <capstone/capstone.h>
#include <inttypes.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nString: %s", str);
    printf("String Address: %p\n\n", (void *)str);

    unsigned char *code = (unsigned char *)main;

    csh handle;
    cs_insn *insn;
    size_t count;

    if (cs_open(CS_ARCH_X86, CS_MODE_64, &handle) != CS_ERR_OK)
        return -1;

    count = cs_disasm(handle, code, 64, (uint64_t)code, 0, &insn);

    if (count > 0) {
        printf("Disassembly of main():\n\n");

        for (size_t i = 0; i < count; i++) {
            printf("0x%lx" PRIx64 ":\t%s\t%s\n",
                   insn[i].address,
                   insn[i].mnemonic,
                   insn[i].op_str);
        }

        cs_free(insn, count);
    }

    cs_close(&handle);

    return 0;
}
