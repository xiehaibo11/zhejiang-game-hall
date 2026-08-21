
void FT_Stroker_Rewind(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}

