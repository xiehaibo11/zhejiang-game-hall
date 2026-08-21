
int SSL_CTX_add_session(SSL_CTX *s,SSL_SESSION *c)

{
  ssl_session_st **ppsVar1;
  int iVar2;
  SSL_SESSION *ses;
  long lVar3;
  long lVar4;
  uchar *puVar5;
  ssl_session_st **ppsVar6;
  ssl_session_st *psVar7;
  ssl_session_st *psVar8;
  undefined1 auStack_24 [4];
  
                    /* catch() { ... } // from try @ 00adcc8c with catch @ 00adccf8 */
  CRYPTO_atomic_add(c->krb5_client_princ + 0x28,1,auStack_24,
                    *(undefined8 *)(c->krb5_client_princ + 200));
  CRYPTO_THREAD_write_lock(s[1].comp_methods);
                    /* catch() { ... } // from try @ 00adce4c with catch @ 00adcd14 */
  ses = (SSL_SESSION *)OPENSSL_LH_insert(s->sessions,c);
  if ((ses == (SSL_SESSION *)0x0) || (ses == c)) {
    if (ses != (SSL_SESSION *)0x0) {
      SSL_SESSION_free(ses);
      iVar2 = 0;
                    /* try { // try from 00adcd70 to 00bdcd73 has its CatchHandler @ 00adce78 */
      goto LAB_00adceac;
    }
  }
  else {
    psVar7 = *(ssl_session_st **)(ses->krb5_client_princ + 0x70);
    if (psVar7 != (ssl_session_st *)0x0) {
      puVar5 = ses->krb5_client_princ + 0x68;
      psVar8 = *(ssl_session_st **)puVar5;
      if (psVar8 != (ssl_session_st *)0x0) {
        ppsVar6 = &s->session_cache_tail;
                    /* try { // try from 00adcd44 to 00bdcd63 has its CatchHandler @ 00adce80 */
        ppsVar1 = &s->session_cache_head;
        if (psVar7 == (ssl_session_st *)ppsVar6) {
          if (psVar8 == (ssl_session_st *)ppsVar1) {
            *ppsVar1 = (ssl_session_st *)0x0;
            s->session_cache_tail = (ssl_session_st *)0x0;
          }
          else {
            *ppsVar6 = psVar8;
            *(ssl_session_st ***)(psVar8->krb5_client_princ + 0x70) = ppsVar6;
                    /* try { // try from 00adcd84 to 00bdcd8f has its CatchHandler @ 00adce84 */
          }
        }
        else if (psVar8 == (ssl_session_st *)ppsVar1) {
          *ppsVar1 = psVar7;
          *(ssl_session_st ***)(psVar7->krb5_client_princ + 0x68) = ppsVar1;
        }
        else {
          *(ssl_session_st **)(psVar7->krb5_client_princ + 0x68) = psVar8;
          *(ssl_session_st **)(*(long *)puVar5 + 0x100) = psVar7;
        }
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5[4] = '\0';
        puVar5[5] = '\0';
        puVar5[6] = '\0';
        puVar5[7] = '\0';
        ses->krb5_client_princ[0x70] = '\0';
        ses->krb5_client_princ[0x71] = '\0';
        ses->krb5_client_princ[0x72] = '\0';
        ses->krb5_client_princ[0x73] = '\0';
        ses->krb5_client_princ[0x74] = '\0';
        ses->krb5_client_princ[0x75] = '\0';
        ses->krb5_client_princ[0x76] = '\0';
        ses->krb5_client_princ[0x77] = '\0';
      }
    }
    SSL_SESSION_free(ses);
  }
  psVar7 = *(ssl_session_st **)(c->krb5_client_princ + 0x70);
                    /* try { // try from 00adcda4 to 00bdcdab has its CatchHandler @ 00adce7c */
  if (psVar7 != (ssl_session_st *)0x0) {
    puVar5 = c->krb5_client_princ + 0x68;
    psVar8 = *(ssl_session_st **)puVar5;
    if (psVar8 != (ssl_session_st *)0x0) {
      ppsVar6 = &s->session_cache_tail;
      ppsVar1 = &s->session_cache_head;
      if (psVar7 == (ssl_session_st *)ppsVar6) {
        if (psVar8 == (ssl_session_st *)ppsVar1) {
          *ppsVar1 = (ssl_session_st *)0x0;
          s->session_cache_tail = (ssl_session_st *)0x0;
        }
        else {
                    /* try { // try from 00adcde4 to 00bdcdef has its CatchHandler @ 00adce88 */
          *ppsVar6 = psVar8;
          *(ssl_session_st ***)(psVar8->krb5_client_princ + 0x70) = ppsVar6;
        }
      }
      else if (psVar8 == (ssl_session_st *)ppsVar1) {
        *ppsVar1 = psVar7;
        *(ssl_session_st ***)(psVar7->krb5_client_princ + 0x68) = ppsVar1;
      }
      else {
        *(ssl_session_st **)(psVar7->krb5_client_princ + 0x68) = psVar8;
        *(ssl_session_st **)(*(long *)puVar5 + 0x100) = psVar7;
      }
      puVar5[0] = '\0';
      puVar5[1] = '\0';
      puVar5[2] = '\0';
      puVar5[3] = '\0';
      puVar5[4] = '\0';
      puVar5[5] = '\0';
      puVar5[6] = '\0';
      puVar5[7] = '\0';
      c->krb5_client_princ[0x70] = '\0';
      c->krb5_client_princ[0x71] = '\0';
      c->krb5_client_princ[0x72] = '\0';
      c->krb5_client_princ[0x73] = '\0';
      c->krb5_client_princ[0x74] = '\0';
      c->krb5_client_princ[0x75] = '\0';
      c->krb5_client_princ[0x76] = '\0';
      c->krb5_client_princ[0x77] = '\0';
    }
  }
  ppsVar6 = &s->session_cache_head;
  psVar7 = *ppsVar6;
  if (psVar7 == (ssl_session_st *)0x0) {
    s->session_cache_tail = c;
    s->session_cache_head = c;
    *(ssl_session_st ***)(c->krb5_client_princ + 0x68) = ppsVar6;
    *(ssl_session_st ***)(c->krb5_client_princ + 0x70) = &s->session_cache_tail;
  }
  else {
    *(ssl_session_st **)(c->krb5_client_princ + 0x70) = psVar7;
    *(SSL_SESSION **)(psVar7->krb5_client_princ + 0x68) = c;
                    /* try { // try from 00adce18 to 00bdce27 has its CatchHandler @ 00adce7c */
    *(ssl_session_st ***)(c->krb5_client_princ + 0x68) = ppsVar6;
    *ppsVar6 = c;
  }
                    /* try { // try from 00adce34 to 00bdce4b has its CatchHandler @ 00adce84 */
  lVar3 = SSL_CTX_ctrl(s,0x2b,0,(void *)0x0);
                    /* try { // try from 00adce4c to 00bdcea3 has its CatchHandler @ 00adcd14 */
  if (0 < lVar3) {
    while( true ) {
      lVar3 = SSL_CTX_ctrl(s,0x14,0,(void *)0x0);
                    /* catch() { ... } // from try @ 00adcd70 with catch @ 00adce78 */
                    /* catch() { ... } // from try @ 00adcda4 with catch @ 00adce7c
                       catch() { ... } // from try @ 00adce18 with catch @ 00adce7c */
                    /* catch() { ... } // from try @ 00adcd44 with catch @ 00adce80 */
                    /* catch() { ... } // from try @ 00adcd84 with catch @ 00adce84
                       catch() { ... } // from try @ 00adce34 with catch @ 00adce84 */
                    /* catch() { ... } // from try @ 00adcde4 with catch @ 00adce88 */
      lVar4 = SSL_CTX_ctrl(s,0x2b,0,(void *)0x0);
      if ((lVar3 <= lVar4) || (iVar2 = FUN_00adced0(s,s->session_cache_tail,0), iVar2 == 0)) break;
      (s->stats).sess_cache_full = (s->stats).sess_cache_full + 1;
    }
  }
  iVar2 = 1;
LAB_00adceac:
  CRYPTO_THREAD_unlock(s[1].comp_methods);
  return iVar2;
}

