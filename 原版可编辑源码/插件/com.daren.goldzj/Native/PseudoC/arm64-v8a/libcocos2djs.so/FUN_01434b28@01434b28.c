
void FUN_01434b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int in_w10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
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
  *(double *)(uVar4 + 3) = (double)in_w10;
  if ((uVar4 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = 0xe;
  }
  if ((int)param_6 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar1 = param_8 * 4 + 0x1f;
    uVar5 = (int)unaff_x26 + *(int *)(param_6 + lVar1);
    uVar3 = uVar5 | uVar3;
    if (uVar5 != uVar3) {
      *(uint *)(param_6 + lVar1) = uVar3;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01434b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_4 + -0x18) + unaff_x19 + 3) * 8))(uVar4)
  ;
  return;
}

