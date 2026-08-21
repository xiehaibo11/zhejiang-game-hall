
undefined8 inflateSetDictionary(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  void *__dest;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_1 == 0) || (piVar5 = *(int **)(param_1 + 0x38), piVar5 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (piVar5[2] == 0) {
    piVar6 = piVar5;
    if (*piVar5 != 10) goto LAB_00e0c2f8;
  }
  else if (*piVar5 != 10) {
    return 0xfffffffe;
  }
  uVar2 = adler32(0,0,0);
  lVar3 = adler32(uVar2,param_2,param_3);
  if (lVar3 != *(long *)(piVar5 + 6)) {
    return 0xfffffffd;
  }
  piVar6 = *(int **)(param_1 + 0x38);
LAB_00e0c2f8:
  __dest = *(void **)(piVar6 + 0x10);
  if (__dest == (void *)0x0) {
    __dest = (void *)(**(code **)(param_1 + 0x40))
                               (*(undefined8 *)(param_1 + 0x50),1 << (ulong)(piVar6[0xc] & 0x1f),1);
    *(void **)(piVar6 + 0x10) = __dest;
    if (__dest == (void *)0x0) {
      *piVar5 = 0x1e;
      return 0xfffffffc;
    }
  }
  uVar4 = piVar6[0xd];
  if (uVar4 == 0) {
    piVar6[0xe] = 0;
    piVar6[0xf] = 0;
    uVar4 = 1 << (ulong)(piVar6[0xc] & 0x1f);
    piVar6[0xd] = uVar4;
  }
  if (param_3 < uVar4) {
    uVar4 = uVar4 - piVar6[0xf];
    uVar1 = param_3;
    if (uVar4 <= param_3) {
      uVar1 = uVar4;
    }
    memcpy((void *)((long)__dest + (ulong)(uint)piVar6[0xf]),param_2,(ulong)uVar1);
    uVar4 = param_3 - uVar1;
    if (uVar4 == 0) {
      uVar4 = 0;
      if (piVar6[0xf] + uVar1 != piVar6[0xd]) {
        uVar4 = piVar6[0xf] + uVar1;
      }
      piVar6[0xf] = uVar4;
      if ((uint)piVar6[0xe] < (uint)piVar6[0xd]) {
        piVar6[0xe] = piVar6[0xe] + uVar1;
      }
    }
    else {
      memcpy(*(void **)(piVar6 + 0x10),(void *)((long)param_2 + ((ulong)param_3 - (ulong)uVar4)),
             (ulong)uVar4);
      piVar6[0xe] = piVar6[0xd];
      piVar6[0xf] = uVar4;
    }
  }
  else {
    memcpy(__dest,(void *)((long)param_2 + ((ulong)param_3 - (ulong)uVar4)),(ulong)uVar4);
    piVar6[0xe] = piVar6[0xd];
    piVar6[0xf] = 0;
  }
  piVar5[3] = 1;
  return 0;
}

