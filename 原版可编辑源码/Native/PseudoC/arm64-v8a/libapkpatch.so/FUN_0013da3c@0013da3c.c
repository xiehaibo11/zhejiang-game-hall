
undefined8 FUN_0013da3c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  void *pvVar4;
  
  if ((void *)param_1[0x1a] != (void *)0x0) {
    free((void *)param_1[0x1a]);
    param_1[0x1a] = 0;
  }
  pvVar4 = (void *)param_1[0x25];
  if (pvVar4 != (void *)0x0) {
    *(undefined4 *)((long)param_1 + 0x124) = 1;
    FUN_0013db00(pvVar4);
    operator_delete(pvVar4);
    param_1[0x25] = 0;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((void *)param_1[0x21] != (void *)0x0) {
    free((void *)param_1[0x21]);
    param_1[0x21] = 0;
  }
  if ((param_1[5] == 0) || (iVar1 = FUN_001356d0(param_1 + 1), iVar1 != 0)) {
    if (param_1[0x1b] != 0) {
      param_1[0x1b] = 0;
      iVar1 = FUN_0013dbb0();
      if (iVar1 == 0) {
        pcVar3 = "_zlib_compress_close_by(compressPlugin,compressHandle)";
        goto LAB_0013dadc;
      }
    }
    uVar2 = 1;
  }
  else {
    pcVar3 = "hpatch_TFileStreamOutput_close(&self->_fileStream)";
LAB_0013dadc:
    FUN_0013fb24(&DAT_0016ba80,pcVar3,DAT_0016ba88);
    uVar2 = 0;
  }
  return uVar2;
}

