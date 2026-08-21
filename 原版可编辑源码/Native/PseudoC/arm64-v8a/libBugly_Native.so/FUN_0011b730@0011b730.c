
undefined8 FUN_0011b730(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if ((*(byte *)(param_1 + 0xcd) >> 2 & 1) == 0) {
    param_1[0xd6] = 0;
    lVar1 = param_1[3] + (long)(char)((uint)(int)(char)(*(byte *)(param_1 + 0xcd) << 6) >> 7);
    param_1[0xd5] = 0;
    param_1[0xd4] = 0;
    param_1[0xd3] = 0;
    param_1[0xd2] = 0;
    param_1[0xd1] = 0;
    param_1[0xd0] = 0;
    param_1[0xcf] = 0;
    param_1[0xce] = 0;
    uVar2 = FUN_0011ecc4(param_1[1],lVar1,param_1 + 0xce,0,*param_1);
    if ((int)uVar2 == -10) {
      uVar2 = (**(code **)param_1[1])((undefined8 *)param_1[1],lVar1,param_1 + 0xce,0,*param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      bVar3 = 4;
    }
    else {
      bVar3 = 0xc;
    }
    if (*(uint *)(param_1 + 0xd4) < 3) {
      *(byte *)(param_1 + 0xcd) = *(byte *)(param_1 + 0xcd) & 0xf3 | bVar3;
    }
    else {
      uVar2 = 0xfffffff6;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

