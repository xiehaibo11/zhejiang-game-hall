
void FUN_01457fa0(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  lVar1 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar1 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar1 = *(long *)(unaff_x26 + 0xa0);
  }
  FUN_013f4000(*(undefined8 *)(unaff_x29 + (long)*(short *)(unaff_x20 + unaff_x19 + 1) * 8),
               (uint)*(ushort *)(unaff_x20 + unaff_x19 + 3) * 2,
               (uint)*(ushort *)(unaff_x20 + unaff_x19 + 5) * 2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x01458058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x26 + 0x13e0) +
              (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) +
                              ((long)((ulong)*(uint *)(unaff_x29 + -0x20) << 0x20) >> 0x21) + 8) * 8
              ))();
  return;
}

