
void ssl_update_cache(long param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  SSL_CTX *pSVar4;
  time_t tm;
  
                    /* try { // try from 00ad8c84 to 00bd8c8b has its CatchHandler @ 00ad8cc8 */
                    /* try { // try from 00ad8c8c to 00bd8ce3 has its CatchHandler @ 00ad8c1c */
  if (*(int *)((*(SSL_SESSION **)(param_1 + 0x178))->master_key + 0x24) == 0) {
    return;
  }
  pSVar4 = *(SSL_CTX **)(param_1 + 0x2d0);
  uVar2 = pSVar4->session_cache_mode;
  if (((uVar2 & param_2) != 0) && (*(int *)(param_1 + 0xb0) == 0)) {
    if ((uVar2 >> 9 & 1) == 0) {
      iVar3 = SSL_CTX_add_session(pSVar4,*(SSL_SESSION **)(param_1 + 0x178));
      if (iVar3 == 0) goto joined_r0x00ad8d48;
      pSVar4 = *(SSL_CTX **)(param_1 + 0x2d0);
    }
    if (pSVar4->new_session_cb != (_func_3087 *)0x0) {
                    /* try { // try from 00ad8d24 to 00bd8d6b has its CatchHandler @ 00ad8d24
                       catch() { ... } // from try @ 00ad8d24 with catch @ 00ad8d24
                       catch() { ... } // from try @ 00ad8d90 with catch @ 00ad8d24 */
      SSL_SESSION_up_ref(*(undefined8 *)(param_1 + 0x178));
      iVar3 = (**(code **)(*(long *)(param_1 + 0x2d0) + 0x50))
                        (param_1,*(undefined8 *)(param_1 + 0x178));
      if (iVar3 == 0) {
        SSL_SESSION_free(*(SSL_SESSION **)(param_1 + 0x178));
      }
    }
  }
joined_r0x00ad8d48:
  if (((uVar2 >> 7 & 1) == 0) && ((uVar2 & param_2) == param_2)) {
    pSVar4 = *(SSL_CTX **)(param_1 + 0x2d0);
                    /* catch() { ... } // from try @ 00ad8c84 with catch @ 00ad8cc8 */
    piVar1 = &(pSVar4->stats).sess_accept_good;
    if ((param_2 & 1) != 0) {
      piVar1 = &(pSVar4->stats).sess_connect_good;
    }
    if ((~*piVar1 & 0xffU) == 0) {
      tm = time((time_t *)0x0);
      SSL_CTX_flush_sessions(pSVar4,tm);
      return;
    }
  }
  return;
}

