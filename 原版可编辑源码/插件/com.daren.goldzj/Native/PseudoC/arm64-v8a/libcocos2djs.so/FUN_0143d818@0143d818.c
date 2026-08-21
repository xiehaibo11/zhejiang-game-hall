
void FUN_0143d818(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 ulong param_5,long param_6)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  undefined1 auVar8 [16];
  
  uVar6 = **(ulong **)(unaff_x26 + 0x1438);
  uVar1 = uVar6 + 0x1c;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1440)) {
    uVar6 = uVar6 + 1;
    **(ulong **)(unaff_x26 + 0x1438) = uVar1;
  }
  else {
    auVar8 = FUN_01348620(param_1,0x1c);
    param_2 = auVar8._8_8_;
    uVar6 = auVar8._0_8_;
  }
  *(int *)(uVar6 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xdd0);
  *(undefined4 *)(uVar6 + 3) = 0;
  *(undefined4 *)(uVar6 + 7) = 0;
  *(undefined4 *)(uVar6 + 0xf) = 0;
  *(undefined4 *)(uVar6 + 0x13) = 0;
  *(int *)(uVar6 + 0xb) = (int)*(undefined8 *)(unaff_x26 + 0x420);
  puVar4 = *(ulong **)(unaff_x26 + 0x1408);
  uVar2 = (uint)*puVar4;
  *(uint *)(uVar6 + 0x17) = uVar2;
  if (((((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar2 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar6,uVar6 + 0x17,0,2);
  }
  *puVar4 = uVar6;
  *(int *)(param_5 + param_6) = (int)uVar6;
  if (((((uint)*(undefined8 *)((param_5 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar6 & 1) != 0)) &&
     (uVar6 = unaff_x26 + (uVar6 & 0xffffffff),
     ((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_5,param_5 + param_6,0,2);
  }
  uVar5 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar5 + 0x18;
  uVar7 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_4 + -1) + 0x13) +
           ((long)(int)((int)unaff_x26 + *(int *)(uVar6 + 3) >> 1 & 0x1f) + 0x56) * 4 + 7);
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = uVar5 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    auVar8 = FUN_01348560(uVar6,0x18);
  }
  lVar3 = auVar8._0_8_;
  *(undefined4 *)(lVar3 + -1) = uVar7;
  *(undefined4 *)(lVar3 + 0xb) = 0;
  uVar7 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(lVar3 + 3) = uVar7;
  *(int *)(lVar3 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xcd8);
  *(int *)(lVar3 + 0x13) = (int)uVar6;
  *(int *)(uVar6 + 0x13) = *(int *)(uVar6 + 0x13) + 1;
  *(undefined4 *)(lVar3 + 7) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x0143d814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 2) * 8))(lVar3,auVar8._8_8_);
  return;
}

