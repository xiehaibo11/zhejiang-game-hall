
void FUN_014628d4(undefined8 param_1,int param_2,undefined8 param_3,long param_4,int param_5,
                 long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  uVar6 = **(ulong **)(unaff_x26 + 0x1428);
  uVar2 = uVar6 + 0xc;
  if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar4 = uVar6 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar2;
  }
  else {
    lVar4 = FUN_01348560(param_1,0xc);
  }
  *(int *)(lVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(double *)(lVar4 + 3) = (double)((int)param_1 >> 1) - (double)(param_2 >> 1);
  if (param_5 == 0) {
    lVar1 = param_8 * 4 + 0x1f;
    uVar5 = (int)unaff_x26 + *(int *)(param_6 + lVar1);
    uVar3 = uVar5 | 0xe;
    if (uVar5 != uVar3) {
      *(uint *)(param_6 + lVar1) = uVar3;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x014628d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_4 + -0x18) + unaff_x19 + 9) * 8))(lVar4)
  ;
  return;
}

