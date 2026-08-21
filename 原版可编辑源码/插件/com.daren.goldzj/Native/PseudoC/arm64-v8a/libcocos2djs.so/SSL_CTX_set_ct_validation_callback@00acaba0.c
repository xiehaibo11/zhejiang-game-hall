
undefined8 SSL_CTX_set_ct_validation_callback(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acab30 with catch @ 00acabc0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aca934 with catch @ 00acabc8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acaa58 with catch @ 00acabcc
                        */
  if ((param_2 == 0) || (iVar1 = SSL_CTX_has_client_custom_ext(param_1,0x12), iVar1 == 0)) {
    uVar2 = 1;
    *(long *)(param_1 + 400) = param_2;
    *(undefined8 *)(param_1 + 0x198) = param_3;
  }
  else {
    ERR_put_error(0x14,0x18c,0xce,"ssl/ssl_lib.c",0x1010);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acaa28 with catch @ 00acabec
                        */
    uVar2 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aca954 with catch @ 00acabf0
                        */
  }
  return uVar2;
}

