
void lws_ssl_remove_wsi_from_buffered_list(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x2c0);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x2c8);
    if ((lVar3 == 0) &&
       (*(long *)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x128) !=
        param_1)) {
      return;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x2c8);
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x128);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x2c8);
  }
  *plVar1 = lVar3;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x2c8) + 0x2c0) = *(undefined8 *)(param_1 + 0x2c0);
  }
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  return;
}

