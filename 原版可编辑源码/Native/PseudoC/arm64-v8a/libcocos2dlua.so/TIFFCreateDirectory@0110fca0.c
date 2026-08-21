
undefined8 TIFFCreateDirectory(long param_1)

{
  TIFFDefaultDirectory();
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
  return 0;
}

