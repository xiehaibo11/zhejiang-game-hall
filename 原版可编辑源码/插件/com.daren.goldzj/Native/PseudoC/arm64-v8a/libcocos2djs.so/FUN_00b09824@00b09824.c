
undefined4 FUN_00b09824(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  EC_KEY *pEVar2;
  X509_ALGOR *local_40;
  EC_KEY *local_38;
  int local_30;
  int local_2c;
  void *local_28;
  uchar *local_18;
  
  local_18 = (uchar *)0x0;
                    /* try { // try from 00b09854 to 00c09857 has its CatchHandler @ 00b09ab4 */
  local_38 = (EC_KEY *)0x0;
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_18,&local_30,&local_40,param_2);
  if (iVar1 != 0) {
    X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_2c,&local_28,local_40);
    local_38 = (EC_KEY *)FUN_00b0ab88(local_2c,local_28);
    if (local_38 == (EC_KEY *)0x0) {
                    /* try { // try from 00b098c0 to 00c098c7 has its CatchHandler @ 00b09a48 */
                    /* try { // try from 00b098c8 to 00c098ff has its CatchHandler @ 00b091d8 */
      ERR_put_error(0x10,0xd7,0x10,"crypto/ec/ec_ameth.c",0x96);
    }
    else {
      pEVar2 = o2i_ECPublicKey(&local_38,&local_18,(long)local_30);
      if (pEVar2 != (EC_KEY *)0x0) {
        EVP_PKEY_assign(param_1,0x198,local_38);
        return 1;
      }
      ERR_put_error(0x10,0xd7,0x8e,"crypto/ec/ec_ameth.c",0x9c);
      EC_KEY_free(local_38);
    }
  }
                    /* try { // try from 00b09900 to 00c09907 has its CatchHandler @ 00b09a90 */
  return 0;
}

