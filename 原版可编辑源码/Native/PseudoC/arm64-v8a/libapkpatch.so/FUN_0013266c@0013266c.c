
undefined4 FUN_0013266c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x38);
  __dest = *(void **)(lVar5 + 0x48);
  if (__dest == (void *)0x0) {
    __dest = (void *)(**(code **)(param_1 + 0x40))
                               (*(undefined8 *)(param_1 + 0x50),
                                1 << (ulong)(*(uint *)(lVar5 + 0x38) & 0x1f),1);
    *(void **)(lVar5 + 0x48) = __dest;
    if (__dest == (void *)0x0) {
      return 1;
    }
  }
  uVar3 = *(uint *)(lVar5 + 0x3c);
  if (uVar3 == 0) {
    *(undefined8 *)(lVar5 + 0x40) = 0;
    uVar3 = 1 << (ulong)(*(uint *)(lVar5 + 0x38) & 0x1f);
    *(uint *)(lVar5 + 0x3c) = uVar3;
  }
  if (param_3 < uVar3) {
    uVar3 = uVar3 - *(uint *)(lVar5 + 0x44);
    uVar1 = param_3;
    if (uVar3 <= param_3) {
      uVar1 = uVar3;
    }
    memcpy((void *)((long)__dest + (ulong)*(uint *)(lVar5 + 0x44)),
           (void *)(param_2 - (ulong)param_3),(ulong)uVar1);
    param_3 = param_3 - uVar1;
    if (param_3 == 0) {
      uVar3 = *(int *)(lVar5 + 0x44) + uVar1;
      uVar2 = 0;
      if (uVar3 != *(uint *)(lVar5 + 0x3c)) {
        uVar2 = uVar3;
      }
      *(uint *)(lVar5 + 0x44) = uVar2;
      if (*(uint *)(lVar5 + 0x3c) <= *(uint *)(lVar5 + 0x40)) {
        return 0;
      }
      iVar4 = *(uint *)(lVar5 + 0x40) + uVar1;
    }
    else {
      memcpy(*(void **)(lVar5 + 0x48),(void *)(param_2 - (ulong)param_3),(ulong)param_3);
      iVar4 = *(int *)(lVar5 + 0x3c);
      *(uint *)(lVar5 + 0x44) = param_3;
    }
  }
  else {
    memcpy(__dest,(void *)(param_2 - (ulong)uVar3),(ulong)uVar3);
    iVar4 = *(int *)(lVar5 + 0x3c);
    *(undefined4 *)(lVar5 + 0x44) = 0;
  }
  *(int *)(lVar5 + 0x40) = iVar4;
  return 0;
}

