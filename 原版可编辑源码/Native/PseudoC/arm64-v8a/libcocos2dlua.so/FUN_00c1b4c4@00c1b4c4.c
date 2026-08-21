
void FUN_00c1b4c4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  void *__dest;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar3 = *(uint *)(param_3 + 0x10);
  uVar1 = uVar3 + uVar2;
  __dest = *(void **)(lVar4 + 0x98);
  *(long *)(lVar4 + 0xa0) = param_1;
  if ((uint)((int)*(undefined8 *)(lVar4 + 0x90) - (int)__dest) < uVar1) {
    __dest = (void *)FUN_00c1a418(lVar4 + 0x88,uVar1);
  }
  memcpy(__dest,(void *)(param_2 + 0x18),(ulong)uVar2);
  memcpy((void *)((long)__dest + (ulong)uVar2),(void *)(param_3 + 0x18),(ulong)uVar3);
  FUN_00bfba1c(param_1,__dest,uVar1);
  return;
}

