
void FUN_0138c280(ulong param_1)

{
  long lVar1;
  long unaff_x26;
  long unaff_x27;
  
  if ((param_1 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x26 + 0xed8) + 0xb) != 0) {
      lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
      if ((*(short *)(lVar1 + 7) == 0x423) && (*(byte *)(lVar1 + 10) >> 3 < 6)) {
        if ((*(int *)(lVar1 + 0xf) ==
             *(int *)(unaff_x26 +
                      (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) + 0xe7))
           && (*(int *)(*(long *)(unaff_x26 + 0xea8) + 0xb) != 0)) {
          FUN_01372440();
          return;
        }
      }
    }
  }
  FUN_0138b860();
  return;
}

