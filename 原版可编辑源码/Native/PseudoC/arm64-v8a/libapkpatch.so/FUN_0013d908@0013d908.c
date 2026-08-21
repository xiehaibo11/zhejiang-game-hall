
undefined4 FUN_0013d908(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (void *)0x0) {
    uVar2 = 1;
  }
  else {
    if ((*(long *)((long)param_1 + 0x60) == 0) ||
       (iVar1 = FUN_0013278c((long)param_1 + 0x28), iVar1 == 0)) {
      uVar2 = 1;
    }
    else {
      __android_log_print(6,"hpatch","check Z_OK==inflateEnd(&self->d_stream) ERROR!\n");
      uVar2 = 0;
    }
    memset(param_1,0,0xa0);
  }
  return uVar2;
}

