
void FUN_01431898(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int in_w10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  uVar5 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar5 + 0xc;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    uVar5 = uVar5 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    uVar5 = FUN_01348560(param_1,0xc);
  }
  *(int *)(uVar5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(double *)(uVar5 + 3) = (double)in_w10;
  if ((uVar5 & 1) == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 0xe;
  }
  if ((int)param_6 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar3 = param_8 * 4 + 0x1f;
    uVar6 = (int)unaff_x26 + *(int *)(param_6 + lVar3);
    uVar4 = uVar6 | uVar4;
    if (uVar6 != uVar4) {
      *(uint *)(param_6 + lVar3) = uVar4;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
  lVar3 = *(long *)(param_4 + -0x18);
  bVar2 = *(byte *)(lVar3 + unaff_x19 + 3);
  if (bVar2 == 0x26) {
    *(ulong *)(param_4 + (long)*(char *)(lVar3 + unaff_x19 + 4) * 8) = uVar5;
    bVar2 = *(byte *)(lVar3 + unaff_x19 + 5);
  }
                    /* WARNING: Could not recover jumptable at 0x01431868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)bVar2 * 8))(uVar5);
  return;
}

