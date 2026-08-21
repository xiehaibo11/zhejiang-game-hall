
void FUN_0143cf2c(void)

{
  long in_x3;
  long in_x5;
  long in_x6;
  long unaff_x26;
  
  *(undefined4 *)(in_x5 + -1) = *(undefined4 *)(in_x6 + -1);
  *(undefined4 *)(in_x5 + 3) = *(undefined4 *)(in_x6 + 3);
  *(undefined4 *)(in_x5 + 7) = *(undefined4 *)(in_x6 + 7);
  *(undefined4 *)(in_x5 + 0xb) = *(undefined4 *)(in_x6 + 0xb);
  *(undefined4 *)(in_x5 + 0xf) = *(undefined4 *)(in_x6 + 0xf);
  *(undefined4 *)(in_x5 + 0x13) = *(undefined4 *)(in_x6 + 0x13);
  *(undefined4 *)(in_x5 + 0x17) = *(undefined4 *)(in_x6 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x0143cf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x26 + 0x13e0) +
              (ulong)*(byte *)(*(long *)(in_x3 + -0x18) +
                              ((long)((ulong)*(uint *)(in_x3 + -0x20) << 0x20) >> 0x21) + 4) * 8))
            (in_x5);
  return;
}

