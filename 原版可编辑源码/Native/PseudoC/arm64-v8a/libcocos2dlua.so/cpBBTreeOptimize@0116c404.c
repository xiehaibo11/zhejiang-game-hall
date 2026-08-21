
void cpBBTreeOptimize(undefined8 *param_1)

{
  int iVar1;
  void *__ptr;
  undefined8 uVar2;
  long lVar3;
  void *local_38;
  
  if (((undefined **)*param_1 == &PTR_FUN_01781708) && (lVar3 = param_1[6], lVar3 != 0)) {
    iVar1 = cpHashSetCount(param_1[5]);
    __ptr = calloc((long)iVar1,8);
    local_38 = __ptr;
    cpHashSetEach(param_1[5],FUN_0116c4b0,&local_38);
    FUN_0116c4c8(param_1,lVar3);
    uVar2 = FUN_0116c514(param_1,__ptr,iVar1);
    param_1[6] = uVar2;
    free(__ptr);
  }
  return;
}

