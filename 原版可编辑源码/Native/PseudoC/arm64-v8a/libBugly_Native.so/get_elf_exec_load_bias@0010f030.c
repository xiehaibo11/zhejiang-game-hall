
long get_elf_exec_load_bias(long param_1)

{
  int *piVar1;
  int *piVar2;
  
  if ((ulong)*(ushort *)(param_1 + 0x38) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0x20) + param_1);
    piVar1 = piVar2 + (ulong)*(ushort *)(param_1 + 0x38) * 0xe;
    do {
      if (*piVar2 == 1) {
        log2Console(3,"eup","phdr->p_offset = %p, phdr->p_vaddr = %p",*(undefined8 *)(piVar2 + 2),
                    *(undefined8 *)(piVar2 + 4));
        return (*(long *)(piVar2 + 2) + param_1) - *(long *)(piVar2 + 4);
      }
      piVar2 = piVar2 + 0xe;
    } while (piVar2 < piVar1);
  }
  return 0;
}

