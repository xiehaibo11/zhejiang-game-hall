
void FUN_014668c0(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  FUN_013bea60(*(undefined4 *)(unaff_x20 + unaff_x19 + 7),
               *(undefined8 *)
                (*(long *)(unaff_x26 + 0x14a8) +
                 (ulong)*(ushort *)(unaff_x20 + unaff_x19 + 1) * 0x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x01466950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x26 + 0x13e0) +
              (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) +
                              ((long)((ulong)*(uint *)(unaff_x29 + -0x20) << 0x20) >> 0x21) + 0xc) *
              8))();
  return;
}

