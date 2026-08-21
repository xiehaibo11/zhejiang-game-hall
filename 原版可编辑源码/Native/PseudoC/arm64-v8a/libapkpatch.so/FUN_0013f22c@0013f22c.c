
undefined8 FUN_0013f22c(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 < *(int *)(param_1 + 0x60)) {
    *(int *)(param_1 + 0x78) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x58);
    }
    uVar2 = FUN_0013e768(param_1,iVar1,param_2,param_3,1);
    return uVar2;
  }
  FUN_0013fb24(&DAT_0016ba80,"curFileIndex < self->_fileEntryCount",DAT_0016ba88);
  return 0;
}

