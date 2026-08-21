
long cpSpaceHashInit(undefined4 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  cpSpatialIndexInit(param_2,&PTR_FUN_01781768);
  iVar1 = FUN_01170ff4(param_3);
  free(*(void **)(param_2 + 0x28));
  *(int *)(param_2 + 0x20) = iVar1;
  pvVar2 = calloc((long)iVar1,8);
  *(void **)(param_2 + 0x28) = pvVar2;
  *(undefined4 *)(param_2 + 0x24) = param_1;
  uVar3 = cpHashSetNew(0,FUN_01171240);
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  uVar3 = cpArrayNew(0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = uVar3;
  uVar3 = cpArrayNew(0);
  *(undefined8 *)(param_2 + 0x48) = uVar3;
  *(undefined4 *)(param_2 + 0x50) = 1;
  return param_2;
}

