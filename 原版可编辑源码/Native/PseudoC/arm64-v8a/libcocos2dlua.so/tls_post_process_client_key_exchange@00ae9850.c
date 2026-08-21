
undefined8 tls_post_process_client_key_exchange(long param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x6c) == 0) && (*(long *)(*(long *)(param_1 + 0x178) + 0x98) != 0)) {
    if (*(long *)(*(long *)(param_1 + 0x90) + 0xd8) == 0) {
      ERR_put_error(0x14,0x180,0x44,"ssl/statem/statem_srvr.c",0xa74);
      goto LAB_00ae98c8;
    }
                    /* try { // try from 00ae98a0 to 00be98b7 has its CatchHandler @ 00aea0f8 */
    iVar1 = ssl3_digest_cached_records(param_1,1);
  }
  else {
    iVar1 = ssl3_digest_cached_records(param_1,0);
  }
  if (iVar1 != 0) {
    return 2;
  }
LAB_00ae98c8:
  ossl_statem_set_error(param_1);
  return 0;
}

