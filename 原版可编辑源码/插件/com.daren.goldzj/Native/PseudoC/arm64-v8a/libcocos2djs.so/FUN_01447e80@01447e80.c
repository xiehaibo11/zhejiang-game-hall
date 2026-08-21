
void FUN_01447e80(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  uVar1 = *(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x20 + 7) +
                   (ulong)*(ushort *)(unaff_x20 + unaff_x19 + 3) * 4 + 7);
  uVar2 = *(undefined8 *)(unaff_x29 + (long)*(short *)(unaff_x20 + unaff_x19 + 1) * 8);
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  FUN_013c0ba0(*(undefined8 *)(unaff_x29 + -8),uVar2,unaff_x26 + (ulong)uVar1);
                    /* WARNING: Could not recover jumptable at 0x01447f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 5) * 8))();
  return;
}

