
void FUN_00c1f7e8(long param_1,ulong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_1 + 0x20;
  lVar3 = FUN_00c1b56c(lVar5);
  uVar1 = (uint)lVar3;
  if (uVar1 < 5) {
    if (uVar1 == 3) {
      uVar2 = FUN_00c1b56c(lVar5);
      *(undefined4 *)param_2 = uVar2;
      *(undefined4 *)((long)param_2 + 4) = 0xfff90000;
    }
    else if (uVar1 == 4) {
      uVar2 = FUN_00c1b56c(lVar5);
      *(undefined4 *)param_2 = uVar2;
      uVar2 = FUN_00c1b56c(lVar5);
      *(undefined4 *)((long)param_2 + 4) = uVar2;
    }
    else {
      *param_2 = ~(lVar3 << 0x2f);
    }
    return;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = lVar5 + (ulong)(uVar1 - 5);
  uVar4 = FUN_00bfba1c(*(undefined8 *)(param_1 + 8),lVar5,(ulong)(uVar1 - 5));
  *param_2 = uVar4 | 0xfffd800000000000;
  return;
}

