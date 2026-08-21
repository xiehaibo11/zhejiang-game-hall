
undefined8 TIFFCreateCustomDirectory(long param_1,undefined8 param_2)

{
  TIFFDefaultDirectory();
  _TIFFSetupFields(param_1,param_2);
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
  return 0;
}

