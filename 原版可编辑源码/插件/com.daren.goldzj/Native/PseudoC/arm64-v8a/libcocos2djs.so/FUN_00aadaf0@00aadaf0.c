
bool FUN_00aadaf0(int param_1,X509_STORE_CTX *param_2)

{
  int iVar1;
  SSL *ssl;
  void *pvVar2;
  
  iVar1 = SSL_get_ex_data_X509_STORE_CTX_idx();
  ssl = X509_STORE_CTX_get_ex_data(param_2,iVar1);
  pvVar2 = SSL_get_ex_data(ssl,DAT_01d54498);
                    /* try { // try from 00aadb3c to 00badb43 has its CatchHandler @ 00aadc74 */
                    /* try { // try from 00aadb44 to 00badbc3 has its CatchHandler @ 00aad90c */
  iVar1 = (**(code **)(*(long *)(*(long *)((long)pvVar2 + 0x228) + 0x188) + 8))
                    (pvVar2,0x17,param_2,ssl,(long)param_1);
  return iVar1 == 0;
}

