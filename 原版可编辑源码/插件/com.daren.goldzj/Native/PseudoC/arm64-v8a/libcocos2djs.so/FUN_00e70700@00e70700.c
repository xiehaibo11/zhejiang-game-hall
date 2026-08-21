
long FUN_00e70700(undefined8 *param_1,ulong param_2,void *param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  
  uVar2 = param_1[0x412];
  if (param_2 < uVar2) {
    iVar1 = FUN_00e1bb5c(*param_1,param_1[0x11]);
    if (iVar1 != 0) {
      return 0;
    }
    inflateReset(param_1 + 3);
    uVar2 = 0;
    param_1[3] = param_1 + 0x12;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[6] = param_1 + 0x212;
    param_1[0x414] = param_1 + 0x412;
    param_1[0x413] = param_1 + 0x412;
    param_1[0x412] = 0;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 - uVar2;
    uVar3 = param_1[0x414] - param_1[0x413];
    if (param_2 <= uVar3) {
      uVar3 = param_2;
    }
    param_1[0x413] = param_1[0x413] + uVar3;
    param_1[0x412] = uVar3 + uVar2;
    for (param_2 = param_2 - uVar3; param_2 != 0; param_2 = param_2 - uVar2) {
      iVar1 = FUN_00e70a30(param_1);
      if (iVar1 != 0) {
        return 0;
      }
      uVar2 = param_1[0x414] - param_1[0x413];
      if (param_2 <= uVar2) {
        uVar2 = param_2;
      }
      param_1[0x413] = param_1[0x413] + uVar2;
      param_1[0x412] = uVar2 + param_1[0x412];
    }
  }
  if (param_4 == 0) {
    return 0;
  }
  lVar4 = 0;
  while( true ) {
    __n = param_1[0x414] - (long)param_1[0x413];
    if (param_4 <= __n) {
      __n = param_4;
    }
    memcpy(param_3,(void *)param_1[0x413],__n);
    lVar4 = __n + lVar4;
    param_4 = param_4 - __n;
    param_1[0x413] = param_1[0x413] + __n;
    param_1[0x412] = param_1[0x412] + __n;
    if (param_4 == 0) break;
    param_3 = (void *)((long)param_3 + __n);
    iVar1 = FUN_00e70a30(param_1);
    if (iVar1 != 0) {
      return lVar4;
    }
  }
  return lVar4;
}

