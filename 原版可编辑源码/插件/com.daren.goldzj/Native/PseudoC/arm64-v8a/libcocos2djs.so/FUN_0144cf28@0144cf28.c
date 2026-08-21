
void FUN_0144cf28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
                 long param_6,int param_7,long param_8)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int in_w8;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  iVar3 = 0;
  if (param_5 != 0) {
    iVar3 = param_7 / param_5;
  }
  param_7 = param_7 - iVar3 * param_5;
  if (param_7 == 0) {
    uVar4 = *(ulong *)(unaff_x26 + 0x448);
  }
  else if (SCARRY4(param_7,param_7)) {
    uVar4 = **(ulong **)(unaff_x26 + 0x1428);
    uVar2 = uVar4 + 0xc;
    if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar4 = uVar4 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar2;
    }
    else {
      uVar4 = FUN_01348560(param_1,0xc);
    }
    *(int *)(uVar4 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(uVar4 + 3) = (double)param_7;
    in_w8 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
  }
  else {
    uVar4 = (ulong)(param_7 * 2);
  }
  if ((uVar4 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = 0xe;
  }
  if ((int)param_6 != in_w8) {
    lVar1 = param_8 * 4 + 0x1f;
    uVar6 = (int)unaff_x26 + *(int *)(param_6 + lVar1);
    uVar5 = uVar6 | uVar5;
    if (uVar6 != uVar5) {
      *(uint *)(param_6 + lVar1) = uVar5;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0144cf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_4 + -0x18) + unaff_x19 + 5) * 8))(uVar4)
  ;
  return;
}

