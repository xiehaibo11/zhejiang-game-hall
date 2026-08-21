
long ssl_get_sign_pkey(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  lVar3 = *(long *)(param_1 + 0x148);
                    /* catch() { ... } // from try @ 00ac95c4 with catch @ 00ac95fc */
  if (((uVar1 >> 1 & 1) == 0) || (lVar2 = *(long *)(lVar3 + 0x78), lVar2 == 0)) {
    if ((uVar1 & 1) == 0) {
      if (((uVar1 >> 3 & 1) == 0) || (lVar2 = *(long *)(lVar3 + 0xa0), lVar2 == 0)) {
LAB_00ac9674:
        ERR_put_error(0x14,0xb7,0x44,"ssl/ssl_lib.c",0xafd);
        return 0;
      }
      lVar4 = 3;
    }
    else {
      lVar2 = *(long *)(lVar3 + 0x50);
      if (lVar2 == 0) {
        lVar2 = *(long *)(lVar3 + 0x28);
        if (lVar2 == 0) goto LAB_00ac9674;
        lVar4 = 0;
      }
      else {
        lVar4 = 1;
      }
    }
  }
  else {
    lVar4 = 2;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar4 * 8 + 0x2d8);
    lVar2 = *(long *)(lVar3 + lVar4 * 0x28 + 0x28);
  }
  return lVar2;
}

