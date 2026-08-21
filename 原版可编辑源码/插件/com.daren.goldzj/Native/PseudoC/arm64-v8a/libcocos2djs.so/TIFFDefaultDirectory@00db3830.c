
undefined8 TIFFDefaultDirectory(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _TIFFGetFields();
  _TIFFSetupFields(param_1,uVar1);
  _TIFFmemset((void *)(param_1 + 0x38),0,0x118);
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0x10001;
  *(undefined8 *)(param_1 + 0x7c) = 0x1000100010001;
  *(undefined4 *)(param_1 + 0xf8) = 1;
  *(undefined2 *)(param_1 + 0x10c) = 1;
  *(code **)(param_1 + 1000) = _TIFFNoPostDecode;
  *(undefined8 *)(param_1 + 0x68) = 0x100000000;
  *(undefined8 *)(param_1 + 0x60) = 1;
  *(undefined2 *)(param_1 + 0xa8) = 2;
  *(undefined2 *)(param_1 + 0x108) = 2;
  *(undefined2 *)(param_1 + 0x10a) = 2;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(code **)(param_1 + 0x410) = FUN_00db525c;
  *(code **)(param_1 + 0x408) = FUN_00db39b4;
  *(undefined8 *)(param_1 + 0x418) = 0;
  if (DAT_01d3e898 != (code *)0x0) {
    (*DAT_01d3e898)(param_1);
  }
  TIFFSetField(param_1,0x103,1);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffbf7;
  return 1;
}

