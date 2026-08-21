
undefined8 tls_construct_server_done(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x70))(param_1,0xe,0);
  if (iVar1 == 0) {
                    /* try { // try from 00ae6c18 to 00be6c97 has its CatchHandler @ 00ae6c18
                       catch() { ... } // from try @ 00ae6c18 with catch @ 00ae6c18
                       catch() { ... } // from try @ 00ae6d00 with catch @ 00ae6c18 */
    ERR_put_error(0x14,0x177,0x44,"ssl/statem/statem_srvr.c",0x63e);
    ossl_statem_set_error(param_1);
    uVar2 = 0;
  }
  else {
    if ((*(int *)(*(long *)(param_1 + 0x90) + 0x288) == 0) &&
       (iVar1 = ssl3_digest_cached_records(param_1,0), iVar1 == 0)) {
      ossl_statem_set_error(param_1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

