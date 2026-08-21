
void FUN_014346f4(undefined8 param_1,int param_2,undefined8 param_3,long param_4,int param_5,
                 long param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  uVar7 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar7 + 0xc;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar4 = uVar7 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    lVar4 = FUN_01348560(param_1,0xc);
  }
  *(int *)(lVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(double *)(lVar4 + 3) = (double)((int)param_1 >> 1) - (double)(param_2 >> 1);
  if (param_5 == 0) {
    lVar5 = param_8 * 4 + 0x1f;
    uVar6 = (int)unaff_x26 + *(int *)(param_6 + lVar5);
    uVar3 = uVar6 | 0xe;
    if (uVar6 != uVar3) {
      *(uint *)(param_6 + lVar5) = uVar3;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
  lVar5 = *(long *)(param_4 + -0x18);
  bVar2 = *(byte *)(lVar5 + unaff_x19 + 3);
  if (bVar2 == 0x26) {
    *(long *)(param_4 + (long)*(char *)(lVar5 + unaff_x19 + 4) * 8) = lVar4;
    bVar2 = *(byte *)(lVar5 + unaff_x19 + 5);
  }
                    /* WARNING: Could not recover jumptable at 0x014346f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)bVar2 * 8))(lVar4);
  return;
}

