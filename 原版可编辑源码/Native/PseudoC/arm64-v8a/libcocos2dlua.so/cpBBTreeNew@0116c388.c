
void * cpBBTreeNew(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = calloc(1,0x58);
  cpSpatialIndexInit(pvVar1,&PTR_FUN_01781708,param_1,param_2);
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  uVar2 = cpHashSetNew(0,FUN_0116c358);
  *(undefined8 *)((long)pvVar1 + 0x28) = uVar2;
  *(undefined8 *)((long)pvVar1 + 0x30) = 0;
  *(undefined8 *)((long)pvVar1 + 0x38) = 0;
  uVar2 = cpArrayNew(0);
  *(undefined8 *)((long)pvVar1 + 0x48) = uVar2;
  *(undefined4 *)((long)pvVar1 + 0x50) = 0;
  return pvVar1;
}

