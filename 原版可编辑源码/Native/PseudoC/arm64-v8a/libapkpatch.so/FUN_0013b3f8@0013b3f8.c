
undefined4 FUN_0013b3f8(undefined8 param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == (void *)0x0) {
    uVar2 = 1;
  }
  else {
    if ((*(long *)((long)param_2 + 0x60) == 0) ||
       (iVar1 = FUN_0013278c((long)param_2 + 0x28), iVar1 == 0)) {
      uVar2 = 1;
    }
    else {
      __android_log_print(6,"hpatch","check Z_OK==inflateEnd(&self->d_stream) ERROR!\n");
      uVar2 = 0;
    }
    memset(param_2,0,0xa0);
    free(param_2);
  }
  return uVar2;
}

