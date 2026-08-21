
void FUN_0145a8c0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  lVar2 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar2 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar2 = *(long *)(unaff_x26 + 0xa0);
  }
  iVar1 = ((int)unaff_x19 + -1) * 2;
  if ((int)lVar2 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    *(int *)(unaff_x29 + -0x20) = iVar1;
    FUN_013833c0();
                    /* WARNING: Could not recover jumptable at 0x0145a998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 9) * 8))
              (param_1);
    return;
  }
  *(int *)(unaff_x29 + -0x20) = iVar1;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f38));
}

