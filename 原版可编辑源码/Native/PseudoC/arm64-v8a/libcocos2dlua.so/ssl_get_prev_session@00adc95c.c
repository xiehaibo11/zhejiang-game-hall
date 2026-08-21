
int ssl_get_prev_session(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  SSL_CTX *s;
  time_t tVar6;
  undefined8 uVar7;
  ulong uVar8;
  SSL_SESSION *pSVar9;
  long lVar10;
  long lVar11;
  undefined4 local_1b8;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  SSL_SESSION *local_58;
  int local_44;
  
  local_58 = (SSL_SESSION *)0x0;
  lVar11 = param_3[1];
  bVar3 = lVar11 != 0;
  uVar4 = tls_check_serverhello_tlsext_early();
  pSVar9 = local_58;
  if (uVar4 < 2) {
    bVar1 = bVar3;
    if ((lVar11 != 0) && (local_58 == (SSL_SESSION *)0x0)) {
      lVar10 = *(long *)(param_1 + 0xb4);
      if ((*(byte *)(lVar10 + 0x41) & 1) == 0) {
        local_1b8 = *param_1;
        uStack_164 = 0;
        local_16c = 0;
        uStack_174 = 0;
        local_17c = 0;
        uVar8 = param_3[1];
        if (0x20 < uVar8) {
          bVar2 = 0;
          goto LAB_00adca64;
        }
                    /* catch() { ... } // from try @ 00adca5c with catch @ 00adcac8 */
        memcpy(&local_17c,(void *)*param_3,uVar8);
        local_180 = (undefined4)uVar8;
        CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar10 + 0x360));
                    /* try { // try from 00adcae4 to 00bdcb73 has its CatchHandler @ 00adcae4
                       catch() { ... } // from try @ 00adcae4 with catch @ 00adcae4
                       catch() { ... } // from try @ 00adcba4 with catch @ 00adcae4 */
        local_58 = (SSL_SESSION *)
                   OPENSSL_LH_retrieve(*(undefined8 *)(*(long *)(param_1 + 0xb4) + 0x20),&local_1b8)
        ;
        if (local_58 != (SSL_SESSION *)0x0) {
          CRYPTO_atomic_add(local_58->krb5_client_princ + 0x28,1,&local_44,
                            *(undefined8 *)(local_58->krb5_client_princ + 200));
        }
        CRYPTO_THREAD_unlock(*(undefined8 *)(*(long *)(param_1 + 0xb4) + 0x360));
        pSVar9 = local_58;
        if (local_58 == (SSL_SESSION *)0x0) {
          *(int *)(*(long *)(param_1 + 0xb4) + 0x80) =
               *(int *)(*(long *)(param_1 + 0xb4) + 0x80) + 1;
        }
      }
      else {
        pSVar9 = (SSL_SESSION *)0x0;
                    /* try { // try from 00adca8c to 00bdcae3 has its CatchHandler @ 00adc9cc */
      }
      bVar1 = true;
    }
    if ((lVar11 == 0) || (pSVar9 != (SSL_SESSION *)0x0)) {
LAB_00adc9b8:
      if (pSVar9 != (SSL_SESSION *)0x0) {
        uVar4 = *(uint *)(pSVar9->session_id + 0x14);
                    /* try { // try from 00adc9cc to 00bdca5b has its CatchHandler @ 00adc9cc
                       catch() { ... } // from try @ 00adc9cc with catch @ 00adc9cc
                       catch() { ... } // from try @ 00adca8c with catch @ 00adc9cc */
        if ((uVar4 == param_1[0x54]) &&
           (iVar5 = memcmp(pSVar9->session_id + 0x18,param_1 + 0x55,(ulong)uVar4), iVar5 == 0)) {
          if ((uVar4 == 0) && ((param_1[0x62] & 1) != 0)) {
            ERR_put_error(0x14,0xd9,0x115,"ssl/ssl_sess.c",0x231);
            bVar3 = bVar1;
            goto LAB_00adca44;
          }
          if (*(long *)(pSVar9->krb5_client_princ + 0x48) == 0) {
            uVar7 = *(undefined8 *)(pSVar9->krb5_client_princ + 0x50);
                    /* catch() { ... } // from try @ 00adcb74 with catch @ 00adcbe0 */
            local_1b8 = CONCAT13((char)uVar7,
                                 CONCAT12((char)((ulong)uVar7 >> 8),
                                          CONCAT11((char)((ulong)uVar7 >> 0x10),
                                                   (char)((ulong)uVar7 >> 0x18))));
            uVar8 = 1;
            if (2 < pSVar9->ssl_version >> 8) {
              uVar8 = 2;
            }
                    /* try { // try from 00adcbfc to 00bdcc8b has its CatchHandler @ 00adcbfc
                       catch() { ... } // from try @ 00adcbfc with catch @ 00adcbfc
                       catch() { ... } // from try @ 00adccbc with catch @ 00adcbfc */
            lVar11 = ssl_get_cipher_by_char(param_1,(ulong)&local_1b8 | uVar8);
            *(long *)(local_58->krb5_client_princ + 0x48) = lVar11;
            pSVar9 = local_58;
            if (lVar11 != 0) goto LAB_00adcc10;
            bVar2 = 0;
            goto joined_r0x00adcca0;
          }
LAB_00adcc10:
          lVar11 = *(long *)(pSVar9->krb5_client_princ + 0x30);
          tVar6 = time((time_t *)0x0);
          if (lVar11 < tVar6 - *(long *)(local_58->krb5_client_princ + 0x38)) {
            lVar11 = *(long *)(param_1 + 0xb4);
            *(int *)(lVar11 + 0x84) = *(int *)(lVar11 + 0x84) + 1;
            if (bVar3) {
              FUN_00adced0(lVar11,local_58,1);
            }
          }
          else {
            if ((local_58->krb5_client_princ[0xc0] & 1) != 0) {
              if (((uint)**(undefined8 **)(param_1 + 0x24) >> 9 & 1) != 0) goto LAB_00adcc6c;
                    /* try { // try from 00adccbc to 00bdcd13 has its CatchHandler @ 00adcbfc */
              ERR_put_error(0x14,0xd9,0x68,"ssl/ssl_sess.c",0x252);
              ssl3_send_alert(param_1,2,0x28);
              bVar3 = bVar1;
              goto LAB_00adca44;
            }
            if (((uint)**(undefined8 **)(param_1 + 0x24) >> 9 & 1) == 0) {
LAB_00adcc6c:
              *(int *)(*(long *)(param_1 + 0xb4) + 0x8c) =
                   *(int *)(*(long *)(param_1 + 0xb4) + 0x8c) + 1;
              SSL_SESSION_free(*(SSL_SESSION **)(param_1 + 0x5e));
                    /* try { // try from 00adcc8c to 00bdccbb has its CatchHandler @ 00adccf8 */
              *(SSL_SESSION **)(param_1 + 0x5e) = local_58;
              *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(local_58->krb5_client_princ + 0x20);
              return 1;
            }
          }
        }
      }
    }
    else {
      bVar3 = true;
      pSVar9 = local_58;
      if (*(code **)(*(long *)(param_1 + 0xb4) + 0x60) == (code *)0x0) goto LAB_00adc9b8;
      local_44 = 1;
      local_58 = (SSL_SESSION *)
                 (**(code **)(*(long *)(param_1 + 0xb4) + 0x60))
                           (param_1,*param_3,*(undefined4 *)(param_3 + 1),&local_44);
      if (local_58 == (SSL_SESSION *)0x0) {
LAB_00adcbb0:
        bVar3 = true;
        pSVar9 = local_58;
        goto LAB_00adc9b8;
      }
      s = *(SSL_CTX **)(param_1 + 0xb4);
                    /* try { // try from 00adcb74 to 00bdcba3 has its CatchHandler @ 00adcbe0 */
      (s->stats).sess_cb_hit = (s->stats).sess_cb_hit + 1;
      if (local_44 != 0) {
        CRYPTO_atomic_add(local_58->krb5_client_princ + 0x28,1,&local_1b8,
                          *(undefined8 *)(local_58->krb5_client_princ + 200));
        s = *(SSL_CTX **)(param_1 + 0xb4);
      }
                    /* try { // try from 00adcba4 to 00bdcbfb has its CatchHandler @ 00adcae4 */
      if (((*(byte *)((long)&s->session_cache_mode + 1) >> 1 & 1) != 0) ||
         (iVar5 = SSL_CTX_add_session(s,local_58), iVar5 == 0)) goto LAB_00adcbb0;
    }
    bVar2 = 0;
  }
  else {
    if (uVar4 - 2 < 2) {
      bVar3 = false;
      bVar1 = false;
      goto LAB_00adc9b8;
    }
    if (uVar4 != 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_00adca44:
    bVar2 = 1;
    bVar1 = bVar3;
  }
joined_r0x00adcca0:
  if ((local_58 != (SSL_SESSION *)0x0) && (SSL_SESSION_free(local_58), !bVar1)) {
                    /* try { // try from 00adca5c to 00bdca8b has its CatchHandler @ 00adcac8 */
    param_1[0xa1] = 1;
  }
LAB_00adca64:
  return -(uint)bVar2;
}

