
bool tls_construct_hello_request(long param_1)

{
  int iVar1;
  
                    /* try { // try from 00ad6d80 to 00bd6deb has its CatchHandler @ 00ad6e1c */
  iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x70))(param_1,0,0);
  if (iVar1 == 0) {
    ERR_put_error(0x14,0x175,0x44,"ssl/statem/statem_srvr.c",0x34a);
    ossl_statem_set_error(param_1);
  }
  return iVar1 != 0;
}

