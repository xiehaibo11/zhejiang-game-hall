
void FUN_0146c0e0(void)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  bVar2 = *(byte *)(unaff_x20 + unaff_x19 + 5);
  iVar1 = *(int *)(unaff_x20 + unaff_x19 + 6);
  uVar3 = *(undefined8 *)(unaff_x29 + (long)*(int *)(unaff_x20 + unaff_x19 + 1) * 8);
  lVar4 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar4 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar4 = *(long *)(unaff_x26 + 0xa0);
  }
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  FUN_01389180(uVar3,(bVar2 & 0x1f) * '\x02',iVar1 * 2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x0146c1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 10) * 8))();
  return;
}

