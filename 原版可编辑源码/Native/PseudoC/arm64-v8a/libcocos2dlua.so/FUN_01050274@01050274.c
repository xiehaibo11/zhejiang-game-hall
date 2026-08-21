
bool FUN_01050274(int param_1,X509_STORE_CTX *param_2)

{
  int iVar1;
  SSL *ssl;
  void *pvVar2;
  
                    /* try { // try from 01050274 to 01150277 has its CatchHandler @ 010502b0 */
  iVar1 = SSL_get_ex_data_X509_STORE_CTX_idx();
  ssl = X509_STORE_CTX_get_ex_data(param_2,iVar1);
  pvVar2 = SSL_get_ex_data(ssl,DAT_01795f7c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01050274 with catch @ 010502b0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01050234 with catch @ 010502c4
                        */
  iVar1 = (**(code **)(*(long *)(*(long *)((long)pvVar2 + 0x228) + 0x188) + 8))
                    (pvVar2,0x17,param_2,ssl,(long)param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010501f4 with catch @ 010502d8
                        */
  return iVar1 == 0;
}

