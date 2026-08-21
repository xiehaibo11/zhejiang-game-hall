
void ssl_set_client_disabled(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(lVar2 + 0x32c) = 0;
  ssl_set_sig_mask(lVar2 + 0x330,param_1,0x5000e);
  ssl_get_client_min_max_version
            (param_1,*(long *)(param_1 + 0x90) + 0x334,*(long *)(param_1 + 0x90) + 0x338);
  if (*(long *)(param_1 + 0x1a8) == 0) {
    lVar2 = *(long *)(param_1 + 0x90);
    *(uint *)(lVar2 + 0x330) = *(uint *)(lVar2 + 0x330) | 0x10;
    *(uint *)(lVar2 + 0x32c) = *(uint *)(lVar2 + 0x32c) | 0x1c8;
    bVar1 = *(byte *)(param_1 + 0x390);
  }
  else {
                    /* try { // try from 00adc3d0 to 00bdc48f has its CatchHandler @ 00adc3d0
                       catch() { ... } // from try @ 00adc3d0 with catch @ 00adc3d0
                       catch() { ... } // from try @ 00adc5ac with catch @ 00adc3d0 */
    bVar1 = *(byte *)(param_1 + 0x390);
  }
  if ((bVar1 >> 5 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x90);
    *(uint *)(lVar2 + 0x330) = *(uint *)(lVar2 + 0x330) | 0x40;
    *(uint *)(lVar2 + 0x32c) = *(uint *)(lVar2 + 0x32c) | 0x20;
  }
  return;
}

