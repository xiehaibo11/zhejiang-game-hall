
undefined8 ssl_get_server_cert_serverinfo(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  *param_3 = 0;
  lVar3 = *(long *)(param_1 + 0x148);
  uVar1 = ssl_cipher_get_cert_index(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x228));
  if (uVar1 == 0xffffffff) {
LAB_00ad8c48:
    ERR_put_error(0x14,0x142,0x44,"ssl/ssl_lib.c",0xad0);
  }
  else {
    if (uVar1 == 8) {
      lVar2 = *(long *)(param_1 + 0x148);
      if (*(long *)(lVar2 + 0x110) == 0) {
        if (*(long *)(lVar2 + 0xe8) == 0) {
          if (*(long *)(lVar2 + 0xc0) == 0) goto LAB_00ad8c48;
          uVar1 = 4;
        }
        else {
          uVar1 = 5;
        }
      }
      else {
        uVar1 = 6;
      }
    }
    else if (uVar1 == 0) {
      uVar1 = (uint)(*(long *)(*(long *)(param_1 + 0x148) + 0x20) == 0);
    }
                    /* try { // try from 00ad8c1c to 00bd8c83 has its CatchHandler @ 00ad8c1c
                       catch() { ... } // from try @ 00ad8c1c with catch @ 00ad8c1c
                       catch() { ... } // from try @ 00ad8c8c with catch @ 00ad8c1c */
    lVar2 = *(long *)(lVar3 + (long)(int)uVar1 * 0x28 + 0x38);
    if (lVar2 != 0) {
      *param_2 = lVar2;
      *param_3 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x28 + 0x40);
      return 1;
    }
  }
  return 0;
}

