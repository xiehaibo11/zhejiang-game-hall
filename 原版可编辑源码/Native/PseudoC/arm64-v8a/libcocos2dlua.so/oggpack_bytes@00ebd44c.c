
long oggpack_bytes(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1 + 7;
  iVar2 = *param_1 + 0xe;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return (*(long *)(param_1 + 10) - *(long *)(param_1 + 4)) +
         *(long *)(*(long *)(param_1 + 6) + 0x10) + (long)(iVar2 >> 3);
}

