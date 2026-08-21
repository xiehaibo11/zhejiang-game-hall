
void FUN_01430520(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 in_x7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  lVar5 = *(long *)(unaff_x29 + -8);
  bVar1 = *(byte *)(unaff_x20 + unaff_x19 + 2);
  uVar6 = (uint)bVar1;
  uVar7 = uVar6;
  if (bVar1 != 0) {
    do {
      lVar5 = unaff_x26 + (ulong)*(uint *)(lVar5 + 0xb);
      uVar7 = uVar7 - 1;
      uVar6 = 0;
    } while (uVar7 != 0);
  }
  lVar3 = (long)(int)*(char *)(unaff_x20 + unaff_x19 + 1);
  if (lVar3 < 1) {
    *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2630),param_3,unaff_x29,param_1,1,uVar6,in_x7,0x60,
                 0);
  }
  lVar5 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar5 + 0xf) + 0x1b);
  uVar4 = lVar3 - 1;
  if (uVar4 < (ulong)((long)((ulong)*(uint *)(lVar5 + 3) << 0x20) >> 0x21)) {
    uVar4 = unaff_x26 + (ulong)*(uint *)(lVar5 + uVar4 * 4 + 7);
    *(int *)(uVar4 + 3) = (int)param_1;
    if (((((uint)*(undefined8 *)((uVar4 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((param_1 & 1) != 0)) &&
       (param_1 = unaff_x26 + (param_1 & 0xffffffff),
       ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(uVar4,uVar4 + 3,0,2);
    }
                    /* WARNING: Could not recover jumptable at 0x0143062c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 3) * 8))
              (param_1,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0,0x1430634);
  (*pcVar2)();
}

