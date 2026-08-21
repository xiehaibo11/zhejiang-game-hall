
void FUN_0133fb80(long param_1,ulong param_2)

{
  long lVar1;
  short sVar2;
  long unaff_x26;
  long unaff_x27;
  
  if ((param_2 & 1) != 0) {
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    sVar2 = *(short *)(lVar1 + 7);
    if (sVar2 == 0x439) {
      FUN_0133f4a0();
      return;
    }
    if (sVar2 == 0x438) {
      FUN_0133faa0();
      return;
    }
    if ((*(byte *)(lVar1 + 9) >> 1 & 1) != 0) {
      if (sVar2 == 0xa9) {
        FUN_0133fd60();
        return;
      }
      *(ulong *)(&stack0x00000000 + param_1 * 8) = param_2;
      FUN_0133f660(param_1,unaff_x26 +
                           (ulong)*(uint *)(unaff_x26 +
                                            (ulong)*(uint *)(unaff_x26 +
                                                             (ulong)*(uint *)(unaff_x27 + -1) + 0x13
                                                            ) + 0x8b));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2068));
}

