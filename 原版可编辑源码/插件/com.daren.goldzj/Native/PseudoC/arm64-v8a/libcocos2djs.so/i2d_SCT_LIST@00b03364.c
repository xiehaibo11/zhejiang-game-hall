
int i2d_SCT_LIST(undefined8 param_1,uchar **param_2)

{
  int iVar1;
  ASN1_OCTET_STRING local_38;
  
  local_38.data = (uchar *)0x0;
  local_38.length = i2o_SCT_LIST(param_1,&local_38.data);
  if (local_38.length == -1) {
    iVar1 = -1;
  }
  else {
    iVar1 = i2d_ASN1_OCTET_STRING(&local_38,param_2);
                    /* try { // try from 00b033b0 to 00c03443 has its CatchHandler @ 00b033b0
                       catch() { ... } // from try @ 00b033b0 with catch @ 00b033b0
                       catch() { ... } // from try @ 00b035e4 with catch @ 00b033b0 */
    CRYPTO_free(local_38.data);
  }
  return iVar1;
}

