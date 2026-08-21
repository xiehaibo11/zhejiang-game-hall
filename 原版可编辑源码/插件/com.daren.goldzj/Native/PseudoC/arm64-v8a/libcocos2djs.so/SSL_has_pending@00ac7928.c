
undefined8 SSL_has_pending(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0xa0))();
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = RECORD_LAYER_read_pending(param_1 + 0x3a0);
  return uVar2;
}

