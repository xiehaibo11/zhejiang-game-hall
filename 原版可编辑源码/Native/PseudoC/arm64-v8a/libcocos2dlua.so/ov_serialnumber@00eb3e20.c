
undefined4 ov_serialnumber(long param_1,int param_2)

{
  int iVar1;
  
  do {
    do {
      iVar1 = param_2;
      param_2 = *(int *)(param_1 + 0x28) + -1;
    } while (*(int *)(param_1 + 0x28) <= iVar1);
  } while ((-1 < iVar1) && (param_2 = -1, *(int *)(param_1 + 8) == 0));
  if (-1 < iVar1) {
    return *(undefined4 *)(*(long *)(param_1 + 0x40) + (long)iVar1 * 4);
  }
  return *(undefined4 *)(param_1 + 0xb4);
}

