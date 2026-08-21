
undefined8 tls_process_new_session_ticket(long param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  void *pvVar8;
  EVP_MD *type;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  SSL_SESSION *c;
  
  uVar10 = param_2[1];
  if (uVar10 < 4) {
LAB_00ae1eac:
                    /* try { // try from 00ae1eac to 00be1f0f has its CatchHandler @ 00ae1e1c */
    iVar7 = 0x76c;
LAB_00ae1ec4:
    ERR_put_error(0x14,0x16e,0x9f,"ssl/statem/statem_clnt.c",iVar7);
    uVar9 = 0x32;
  }
  else {
    pbVar12 = (byte *)*param_2;
    bVar1 = *pbVar12;
    bVar2 = pbVar12[1];
    bVar3 = pbVar12[2];
    bVar4 = pbVar12[3];
    *param_2 = (long)(pbVar12 + 4);
    param_2[1] = uVar10 - 4;
    if (uVar10 - 4 < 2) goto LAB_00ae1eac;
    bVar5 = pbVar12[4];
    bVar6 = pbVar12[5];
    uVar10 = uVar10 - 6;
    *param_2 = (long)(pbVar12 + 6);
    param_2[1] = uVar10;
    if (uVar10 != (uint)CONCAT11(bVar5,bVar6)) goto LAB_00ae1eac;
    if (CONCAT11(bVar5,bVar6) == 0) {
      return 3;
    }
    c = *(SSL_SESSION **)(param_1 + 0x178);
    if (*(int *)(c->master_key + 0x24) == 0) {
LAB_00ae1e48:
      CRYPTO_free(*(void **)(c->krb5_client_princ + 0xa0));
      *(undefined8 *)(*(long *)(param_1 + 0x178) + 0x138) = 0;
      pvVar8 = CRYPTO_malloc((int)uVar10,"ssl/statem/statem_clnt.c",0x78f);
      *(void **)(*(long *)(param_1 + 0x178) + 0x130) = pvVar8;
      if (pvVar8 == (void *)0x0) {
                    /* try { // try from 00ae1f10 to 00be1f8f has its CatchHandler @ 00ae1f10
                       catch() { ... } // from try @ 00ae1f10 with catch @ 00ae1f10
                       catch() { ... } // from try @ 00ae1f98 with catch @ 00ae1f10 */
        ERR_put_error(0x14,0x16e,0x41,"ssl/statem/statem_clnt.c",0x791);
        goto LAB_00ae1ed8;
      }
      if (uVar10 <= (ulong)param_2[1]) {
        memcpy(pvVar8,(void *)*param_2,uVar10);
        *param_2 = *param_2 + uVar10;
        param_2[1] = param_2[1] - uVar10;
        lVar11 = *(long *)(param_1 + 0x178);
        pvVar8 = *(void **)(lVar11 + 0x130);
        *(ulong *)(lVar11 + 0x138) = uVar10;
        *(ulong *)(lVar11 + 0x140) =
             (ulong)bVar1 << 0x18 | (ulong)bVar2 << 0x10 | (ulong)bVar3 << 8 | (ulong)bVar4;
        type = EVP_sha256();
        iVar7 = EVP_Digest(pvVar8,uVar10,(uchar *)(lVar11 + 0x3c),(uint *)(lVar11 + 0x38),type,
                           (ENGINE *)0x0);
        if (iVar7 != 0) {
          return 3;
        }
        ERR_put_error(0x14,0x16e,6,"ssl/statem/statem_clnt.c",0x7aa);
        goto LAB_00ae1ed8;
      }
                    /* try { // try from 00ae1ea4 to 00be1eab has its CatchHandler @ 00ae1ef0 */
      iVar7 = 0x796;
      goto LAB_00ae1ec4;
    }
    if (((*(SSL_CTX **)(param_1 + 0x2d0))->session_cache_mode & 1) != 0) {
                    /* try { // try from 00ae1e1c to 00be1ea3 has its CatchHandler @ 00ae1e1c
                       catch() { ... } // from try @ 00ae1e1c with catch @ 00ae1e1c
                       catch() { ... } // from try @ 00ae1eac with catch @ 00ae1e1c */
      SSL_CTX_remove_session(*(SSL_CTX **)(param_1 + 0x2d0),c);
      c = *(SSL_SESSION **)(param_1 + 0x178);
    }
    c = (SSL_SESSION *)ssl_session_dup(c,0);
    if (c != (SSL_SESSION *)0x0) {
      SSL_SESSION_free(*(SSL_SESSION **)(param_1 + 0x178));
      *(SSL_SESSION **)(param_1 + 0x178) = c;
      goto LAB_00ae1e48;
    }
                    /* try { // try from 00ae1f90 to 00be1f97 has its CatchHandler @ 00ae1fd4 */
                    /* try { // try from 00ae1f98 to 00be1ff3 has its CatchHandler @ 00ae1f10 */
    ERR_put_error(0x14,0x16e,0x41,"ssl/statem/statem_clnt.c",0x784);
    uVar9 = 0x50;
  }
  ssl3_send_alert(param_1,2,uVar9);
LAB_00ae1ed8:
  ossl_statem_set_error(param_1);
                    /* catch() { ... } // from try @ 00ae1ea4 with catch @ 00ae1ef0 */
  return 0;
}

