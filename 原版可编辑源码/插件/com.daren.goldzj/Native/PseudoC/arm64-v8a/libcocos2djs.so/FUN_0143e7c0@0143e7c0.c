
void FUN_0143e7c0(void)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  bVar1 = *(byte *)(unaff_x20 + unaff_x19 + 3);
  lVar4 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(lVar4 + -1) + 7) != 0x81) {
    lVar4 = unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb);
  }
  if ((ulong)((long)((ulong)*(uint *)(lVar4 + 3) << 0x20) >> 0x21) <=
      (ulong)*(byte *)(unaff_x20 + unaff_x19 + 2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x143e8b0);
    (*pcVar3)();
  }
  iVar2 = (int)unaff_x19 * 2;
  if ((bVar1 >> 1 & 1) != 0) {
    *(int *)(unaff_x29 + -0x20) = iVar2;
    FUN_01342940();
                    /* WARNING: Could not recover jumptable at 0x0143e8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 4) * 8))();
    return;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(unaff_x29 + -0x20) = iVar2;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x24d0));
  }
  *(int *)(unaff_x29 + -0x20) = iVar2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x24d8));
}

