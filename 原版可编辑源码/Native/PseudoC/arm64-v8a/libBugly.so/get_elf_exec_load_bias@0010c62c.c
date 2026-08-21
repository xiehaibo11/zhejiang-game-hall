
long get_elf_exec_load_bias(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + *(long *)(param_1 + 0x20));
  piVar2 = piVar1 + (ulong)*(ushort *)(param_1 + 0x38) * 0xe;
  if (piVar1 < piVar2) {
    iVar3 = *(int *)(param_1 + *(long *)(param_1 + 0x20));
    while( true ) {
      if (iVar3 == 1) {
        log2Console(3,"CrashReport-Native","phdr->p_offset = %p, phdr->p_vaddr = %p",
                    *(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar1 + 4));
        return (*(long *)(piVar1 + 2) - *(long *)(piVar1 + 4)) + param_1;
      }
      piVar1 = piVar1 + 0xe;
      if (piVar2 <= piVar1) break;
      iVar3 = *piVar1;
    }
  }
  return 0;
}

