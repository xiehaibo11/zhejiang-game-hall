
undefined8
FUN_010ac794(undefined8 param_1,ulong *param_2,undefined8 param_3,KeyAccumulator *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  Factory *this;
  uint uVar4;
  
  if (((byte)param_4[0x24] >> 5 & 1) != 0) {
    return 1;
  }
  uVar1 = *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 7);
  if (uVar1 != 0) {
    this = *(Factory **)param_4;
    uVar4 = 0;
    do {
      uVar2 = v8::internal::Factory::NewNumberFromUint(this,uVar4);
      uVar3 = v8::internal::KeyAccumulator::AddKey(param_4,uVar2,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  uVar2 = FUN_010a3a80(param_2,param_3,param_4);
  return uVar2;
}

