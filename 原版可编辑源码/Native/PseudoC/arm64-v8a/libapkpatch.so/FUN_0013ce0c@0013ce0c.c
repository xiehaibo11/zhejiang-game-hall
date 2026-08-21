
bool FUN_0013ce0c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x4000);
  *(void **)(param_1 + 0x88) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    FUN_0013fb24(&DAT_0016ba80,"self->_buf!=0",DAT_0016ba88);
  }
  else {
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return pvVar1 != (void *)0x0;
}

