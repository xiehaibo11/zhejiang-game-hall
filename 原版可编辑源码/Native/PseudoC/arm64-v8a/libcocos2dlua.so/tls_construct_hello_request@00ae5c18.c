
bool tls_construct_hello_request(long param_1)

{
  int iVar1;
  
                    /* try { // try from 00ae5c20 to 00be5ccf has its CatchHandler @ 00ae5c20
                       catch() { ... } // from try @ 00ae5c20 with catch @ 00ae5c20
                       catch() { ... } // from try @ 00ae5cdc with catch @ 00ae5c20 */
  iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x70))(param_1,0,0);
  if (iVar1 == 0) {
    ERR_put_error(0x14,0x175,0x44,"ssl/statem/statem_srvr.c",0x34a);
    ossl_statem_set_error(param_1);
  }
  return iVar1 != 0;
}

