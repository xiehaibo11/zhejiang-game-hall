
void FUN_01341240(undefined8 param_1,long param_2)

{
  long unaff_x26;
  
  if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) >> 0x19 & 1) != 0) {
    FUN_013424a0();
    return;
  }
  FUN_013422c0(param_1,param_2,*(undefined8 *)(unaff_x26 + 0xa0));
  return;
}

