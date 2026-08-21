
undefined8 FUN_0013ca2c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  if ((void *)param_1[0x11] != (void *)0x0) {
    free((void *)param_1[0x11]);
    param_1[0x11] = 0;
  }
  if ((void *)param_1[0x13] != (void *)0x0) {
    free((void *)param_1[0x13]);
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((param_1[5] == 0) || (iVar1 = FUN_00135458(param_1 + 1), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    FUN_0013fb24(&DAT_0016ba80,"hpatch_TFileStreamInput_close(&self->_fileStream)",DAT_0016ba88);
    uVar2 = 0;
  }
  return uVar2;
}

