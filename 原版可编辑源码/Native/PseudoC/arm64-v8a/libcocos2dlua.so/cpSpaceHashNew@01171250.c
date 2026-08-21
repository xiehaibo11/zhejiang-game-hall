
void * cpSpaceHashNew(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar2 = calloc(1,0x58);
  cpSpatialIndexInit(pvVar2,&PTR_FUN_01781768,param_3,param_4);
  iVar1 = FUN_01170ff4(param_2);
  free(*(void **)((long)pvVar2 + 0x28));
  *(int *)((long)pvVar2 + 0x20) = iVar1;
  pvVar3 = calloc((long)iVar1,8);
  *(void **)((long)pvVar2 + 0x28) = pvVar3;
  *(undefined4 *)((long)pvVar2 + 0x24) = param_1;
  uVar4 = cpHashSetNew(0,FUN_01171240);
  *(undefined8 *)((long)pvVar2 + 0x30) = uVar4;
  uVar4 = cpArrayNew(0);
  *(undefined8 *)((long)pvVar2 + 0x38) = 0;
  *(undefined8 *)((long)pvVar2 + 0x40) = uVar4;
  uVar4 = cpArrayNew(0);
  *(undefined8 *)((long)pvVar2 + 0x48) = uVar4;
  *(undefined4 *)((long)pvVar2 + 0x50) = 1;
  return pvVar2;
}

