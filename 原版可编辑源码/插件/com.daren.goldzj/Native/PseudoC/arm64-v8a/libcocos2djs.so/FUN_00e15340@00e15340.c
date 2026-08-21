
undefined4 FUN_00e15340(long param_1,size_t param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  void *__s;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x128) + 8);
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0xb8);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(long *)(param_1 + 0x128) + 8) = uVar1 | 1;
  }
  else {
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if ((long)param_2 < 1) {
    __s = (void *)0x0;
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = 6;
    }
  }
  else {
    __s = (void *)(**(code **)(lVar3 + 8))(lVar3,param_2);
    if (__s == (void *)0x0) {
      uVar2 = 0x40;
    }
    else {
      memset(__s,0,param_2);
      uVar2 = 0;
    }
  }
  *(void **)(param_1 + 0xa8) = __s;
  return uVar2;
}

