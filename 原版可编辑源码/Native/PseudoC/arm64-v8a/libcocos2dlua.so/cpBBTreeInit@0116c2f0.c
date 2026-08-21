
long cpBBTreeInit(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  cpSpatialIndexInit(param_1,&PTR_FUN_01781708,param_2,param_3);
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = cpHashSetNew(0,FUN_0116c358);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = cpArrayNew(0);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return param_1;
}

