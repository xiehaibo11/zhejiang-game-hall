
void FUN_010ad454(long param_1,short *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  *(short *)(param_1 + 0x110) = -(short)iVar1;
  lVar2 = -((long)iVar1 * (long)*param_2);
  *(long *)(param_1 + 0x100) = lVar2;
  if (0 < iVar1) {
    *(ulong *)(param_1 + 0x100) = lVar2 + (ulong)(*(int *)(param_1 + 0xb0) - 1) * (long)iVar1;
  }
  *(undefined4 *)(param_1 + 0x112) = 0;
  return;
}

