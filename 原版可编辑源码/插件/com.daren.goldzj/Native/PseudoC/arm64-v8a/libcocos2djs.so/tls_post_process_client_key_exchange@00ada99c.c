
undefined8 tls_post_process_client_key_exchange(long param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x6c) == 0) && (*(long *)(*(long *)(param_1 + 0x178) + 0x98) != 0)) {
                    /* catch() { ... } // from try @ 00ada5b8 with catch @ 00ada9d8 */
    if (*(long *)(*(long *)(param_1 + 0x90) + 0xd8) == 0) {
                    /* catch() { ... } // from try @ 00adaabc with catch @ 00adaa00
                       catch() { ... } // from try @ 00adab44 with catch @ 00adaa00
                       catch() { ... } // from try @ 00adab84 with catch @ 00adaa00
                       catch() { ... } // from try @ 00adac08 with catch @ 00adaa00 */
      ERR_put_error(0x14,0x180,0x44,"ssl/statem/statem_srvr.c",0xa74);
      goto LAB_00adaa14;
    }
    iVar1 = ssl3_digest_cached_records(param_1,1);
  }
  else {
    iVar1 = ssl3_digest_cached_records(param_1,0);
  }
  if (iVar1 != 0) {
    return 2;
  }
LAB_00adaa14:
  ossl_statem_set_error(param_1);
  return 0;
}

