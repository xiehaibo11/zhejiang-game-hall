
void FUN_0145e6e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 in_x7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  lVar5 = *(long *)(unaff_x29 + -8);
  for (iVar1 = *(int *)(unaff_x20 + unaff_x19 + 5); iVar1 != 0; iVar1 = iVar1 + -1) {
    lVar5 = unaff_x26 + (ulong)*(uint *)(lVar5 + 0xb);
  }
  lVar3 = (long)*(int *)(unaff_x20 + unaff_x19 + 1);
  if (0 < lVar3) {
    lVar5 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar5 + 0xf) + 0x1b);
    uVar4 = lVar3 - 1;
    if ((ulong)((long)((ulong)*(uint *)(lVar5 + 3) << 0x20) >> 0x21) <= uVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x145e7f8);
      (*pcVar2)();
    }
    uVar4 = unaff_x26 + (ulong)*(uint *)(lVar5 + uVar4 * 4 + 7);
    *(int *)(uVar4 + 3) = (int)param_1;
    if (((((uint)*(undefined8 *)((uVar4 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((param_1 & 1) != 0)) &&
       (param_1 = unaff_x26 + (param_1 & 0xffffffff),
       ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(uVar4,uVar4 + 3,0,2);
    }
                    /* WARNING: Could not recover jumptable at 0x0145e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 9) * 8))
              (param_1,param_2);
    return;
  }
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2630),param_3,unaff_x29,param_1,1,0,in_x7,0x60,0);
}

