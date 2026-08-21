
void FUN_00138524(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - lVar3;
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = lVar2 * 0x40 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_001385a0(param_1);
    lVar3 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
  }
  *(undefined8 *)(*(long *)(lVar3 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8) =
       *param_2;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}

