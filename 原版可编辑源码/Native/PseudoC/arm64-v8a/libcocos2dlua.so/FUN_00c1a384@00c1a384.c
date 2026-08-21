
void FUN_00c1a384(long param_1,undefined8 param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *param_3 << 1;
  if (uVar1 < 8) {
    uVar1 = 8;
  }
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  uVar4 = (ulong)(*param_3 * param_5);
  uVar3 = (ulong)(uVar1 * param_5);
  lVar2 = (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 0x18),param_2,uVar4,uVar3);
  if ((uVar3 != 0) && (lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfac84(param_1);
  }
  *(ulong *)(lVar5 + 0x20) = (*(long *)(lVar5 + 0x20) - uVar4) + uVar3;
  *param_3 = uVar1;
  return;
}

