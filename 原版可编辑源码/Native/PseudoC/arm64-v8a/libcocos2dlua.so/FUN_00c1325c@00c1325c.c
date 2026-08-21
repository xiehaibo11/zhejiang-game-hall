
undefined8 FUN_00c1325c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  
  uVar1 = FUN_00c29ac0(param_1,1);
  bVar3 = false;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 + 8U < *(ulong *)(param_1 + 0x28)) {
    bVar3 = (uint)((long)*(undefined8 *)(lVar2 + 8) >> 0x2f) < 0xfffffffe;
  }
  FUN_00c24c34(param_1,*(undefined8 *)((*(ulong *)(lVar2 + -0x10) & 0x7fffffffffff) + 0x10),uVar1,
               bVar3);
  return 1;
}

