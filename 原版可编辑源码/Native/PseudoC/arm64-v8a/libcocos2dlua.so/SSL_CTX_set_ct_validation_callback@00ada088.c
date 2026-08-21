
undefined8 SSL_CTX_set_ct_validation_callback(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00ada038 with catch @ 00ada098 */
                    /* catch() { ... } // from try @ 00ada014 with catch @ 00ada09c */
  if ((param_2 == 0) || (iVar1 = SSL_CTX_has_client_custom_ext(param_1,0x12), iVar1 == 0)) {
    uVar2 = 1;
    *(long *)(param_1 + 400) = param_2;
    *(undefined8 *)(param_1 + 0x198) = param_3;
  }
  else {
                    /* try { // try from 00ada0b8 to 00bda12b has its CatchHandler @ 00ada0b8
                       catch() { ... } // from try @ 00ada0b8 with catch @ 00ada0b8
                       catch() { ... } // from try @ 00ada134 with catch @ 00ada0b8 */
    ERR_put_error(0x14,0x18c,0xce,"ssl/ssl_lib.c",0x1010);
    uVar2 = 0;
  }
  return uVar2;
}

