
undefined8 TIFFSetClientdata(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b8) = param_2;
  return uVar1;
}

