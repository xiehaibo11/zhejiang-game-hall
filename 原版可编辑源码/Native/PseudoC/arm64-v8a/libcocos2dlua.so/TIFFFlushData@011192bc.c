
undefined8 TIFFFlushData(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 6 & 1) == 0) {
    return 1;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0x10) = uVar1 & 0xffffefff;
    uVar2 = (**(code **)(param_1 + 0x2f0))(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  uVar2 = TIFFFlushData1(param_1);
  return uVar2;
}

