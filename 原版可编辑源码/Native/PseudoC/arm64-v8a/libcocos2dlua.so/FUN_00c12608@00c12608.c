
ulong FUN_00c12608(ulong param_1)

{
  size_t *psVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *__addr;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_1 + 0x348);
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined4 *)__errno();
    do {
      __addr = (void *)*puVar5;
      psVar1 = puVar5 + 1;
      uVar2 = *puVar4;
      puVar5 = (undefined8 *)puVar5[2];
      uVar3 = munmap(__addr,*psVar1);
      param_1 = (ulong)uVar3;
      *puVar4 = uVar2;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return param_1;
}

