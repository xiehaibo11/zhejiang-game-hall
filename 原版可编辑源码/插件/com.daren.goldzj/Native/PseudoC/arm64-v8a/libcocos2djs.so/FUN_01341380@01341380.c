
void FUN_01341380(long param_1,ulong param_2)

{
  long lVar1;
  short sVar2;
  long unaff_x26;
  long unaff_x27;
  
  if ((param_2 & 1) != 0) {
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    if ((*(byte *)(lVar1 + 9) >> 6 & 1) != 0) {
      sVar2 = *(short *)(lVar1 + 7);
      if (sVar2 == 0x439) {
        FUN_01341240();
        return;
      }
      if (sVar2 == 0x438) {
        FUN_01341260();
        return;
      }
      if (sVar2 == 0xa9) {
        FUN_01343ce0();
        return;
      }
      *(ulong *)(&stack0x00000000 + param_1 * 8) = param_2;
      FUN_0133f860(param_1,unaff_x26 +
                           (ulong)*(uint *)(unaff_x26 +
                                            (ulong)*(uint *)(unaff_x26 +
                                                             (ulong)*(uint *)(unaff_x27 + -1) + 0x13
                                                            ) + 0x87));
      return;
    }
  }
  FUN_01341340();
  return;
}

