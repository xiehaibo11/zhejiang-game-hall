
void * cpHashSetNew(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar2 = calloc(1,0x30);
  uVar1 = FUN_01166724(param_1);
  *(uint *)((long)pvVar2 + 4) = uVar1;
  *(undefined8 *)((long)pvVar2 + 8) = param_2;
  pvVar3 = calloc((ulong)uVar1,8);
  *(void **)((long)pvVar2 + 0x18) = pvVar3;
  uVar4 = cpArrayNew(0);
  *(undefined8 *)((long)pvVar2 + 0x28) = uVar4;
  return pvVar2;
}

