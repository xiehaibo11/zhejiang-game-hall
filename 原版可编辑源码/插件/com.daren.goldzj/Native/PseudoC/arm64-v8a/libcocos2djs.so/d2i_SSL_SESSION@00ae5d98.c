
SSL_SESSION * d2i_SSL_SESSION(SSL_SESSION **a,uchar **pp,long length)

{
  uchar uVar1;
  uchar uVar2;
  ASN1_VALUE *val;
  int line;
  int iVar3;
  uint uVar4;
  long lVar5;
  uchar *puVar6;
  SSL_SESSION *ses;
  int *piVar7;
  uint *puVar8;
  uchar *local_38;
  
  local_38 = *pp;
                    /* try { // try from 00ae5db4 to 00be5dc3 has its CatchHandler @ 00ae62c0 */
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_38,length,(ASN1_ITEM *)&DAT_01c72a60);
                    /* try { // try from 00ae5dd0 to 00be5dd7 has its CatchHandler @ 00ae62bc */
  if (val == (ASN1_VALUE *)0x0) {
    ses = (SSL_SESSION *)0x0;
    goto LAB_00ae5ed0;
  }
                    /* try { // try from 00ae5dd8 to 00be5ee7 has its CatchHandler @ 00ae4dc4 */
  if (((a == (SSL_SESSION **)0x0) || (ses = *a, ses == (SSL_SESSION *)0x0)) &&
     (ses = SSL_SESSION_new(), ses == (SSL_SESSION *)0x0)) goto LAB_00ae5ed0;
  if (*(long *)val == 1) {
    lVar5 = *(long *)(val + 8);
    if (((lVar5 >> 8 == 3) || (lVar5 >> 8 == 0xfe)) || (lVar5 == 0x100)) {
      ses->ssl_version = (int)lVar5;
      if (**(int **)(val + 0x10) == 2) {
        local_38 = *(uchar **)(*(int **)(val + 0x10) + 2);
        uVar1 = *local_38;
        uVar2 = local_38[1];
        ses->krb5_client_princ[0x48] = '\0';
        ses->krb5_client_princ[0x49] = '\0';
        ses->krb5_client_princ[0x4a] = '\0';
        ses->krb5_client_princ[0x4b] = '\0';
        ses->krb5_client_princ[0x4c] = '\0';
        ses->krb5_client_princ[0x4d] = '\0';
        ses->krb5_client_princ[0x4e] = '\0';
        ses->krb5_client_princ[0x4f] = '\0';
        *(ulong *)(ses->krb5_client_princ + 0x50) = (ulong)CONCAT11(uVar1,uVar2) | 0x3000000;
        piVar7 = *(int **)(val + 0x28);
        if (piVar7 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          if (0x20 < *piVar7) goto LAB_00ae5ed0;
          memcpy(ses->master_key + 0x28,*(void **)(piVar7 + 2),(long)*piVar7);
          iVar3 = *piVar7;
        }
        *(int *)(ses->master_key + 0x24) = iVar3;
        puVar8 = *(uint **)(val + 0x20);
        if (puVar8 == (uint *)0x0) {
          uVar4 = 0;
        }
        else {
          if (0x30 < (int)*puVar8) goto LAB_00ae5ed0;
          memcpy(ses->key_arg,*(void **)(puVar8 + 2),(long)(int)*puVar8);
          uVar4 = *puVar8;
        }
        ses->key_arg_length = uVar4;
        lVar5 = *(long *)(val + 0x38);
        if (lVar5 == 0) {
          lVar5 = time((time_t *)0x0);
        }
        *(long *)(ses->krb5_client_princ + 0x38) = lVar5;
        lVar5 = 3;
        if (*(long *)(val + 0x40) != 0) {
          lVar5 = *(long *)(val + 0x40);
        }
                    /* try { // try from 00ae5f70 to 00be5f77 has its CatchHandler @ 00ae62b4 */
        *(long *)(ses->krb5_client_princ + 0x30) = lVar5;
        X509_free(*(X509 **)(ses->krb5_client_princ + 8));
                    /* try { // try from 00ae5f78 to 00be5fdb has its CatchHandler @ 00ae4dc4 */
        *(undefined8 *)(ses->krb5_client_princ + 8) = *(undefined8 *)(val + 0x48);
        piVar7 = *(int **)(val + 0x50);
        *(undefined8 *)(val + 0x48) = 0;
        if (piVar7 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          if (0x20 < *piVar7) goto LAB_00ae5ed0;
          memcpy(ses->session_id + 0x18,*(void **)(piVar7 + 2),(long)*piVar7);
          iVar3 = *piVar7;
        }
        *(int *)(ses->session_id + 0x14) = iVar3;
        *(undefined8 *)(ses->krb5_client_princ + 0x20) = *(undefined8 *)(val + 0x58);
        piVar7 = *(int **)(val + 0x60);
        CRYPTO_free(*(void **)(ses->krb5_client_princ + 0x78));
        ses->krb5_client_princ[0x78] = '\0';
        ses->krb5_client_princ[0x79] = '\0';
        ses->krb5_client_princ[0x7a] = '\0';
        ses->krb5_client_princ[0x7b] = '\0';
        ses->krb5_client_princ[0x7c] = '\0';
        ses->krb5_client_princ[0x7d] = '\0';
        ses->krb5_client_princ[0x7e] = '\0';
        ses->krb5_client_princ[0x7f] = '\0';
        if (piVar7 != (int *)0x0) {
                    /* try { // try from 00ae5fdc to 00be6003 has its CatchHandler @ 00ae62f8 */
          lVar5 = CRYPTO_strndup(*(undefined8 *)(piVar7 + 2),(long)*piVar7,"ssl/ssl_asn1.c",0xda);
          *(long *)(ses->krb5_client_princ + 0x78) = lVar5;
          if (lVar5 == 0) goto LAB_00ae5ed0;
        }
        piVar7 = *(int **)(val + 0x78);
                    /* try { // try from 00ae6010 to 00be6017 has its CatchHandler @ 00ae62b0 */
        CRYPTO_free(*(void **)(ses->sid_ctx + 0x14));
        ses->sid_ctx[0x14] = '\0';
        ses->sid_ctx[0x15] = '\0';
        ses->sid_ctx[0x16] = '\0';
        ses->sid_ctx[0x17] = '\0';
        ses->sid_ctx[0x18] = '\0';
        ses->sid_ctx[0x19] = '\0';
        ses->sid_ctx[0x1a] = '\0';
        ses->sid_ctx[0x1b] = '\0';
                    /* try { // try from 00ae6018 to 00be60f3 has its CatchHandler @ 00ae4dc4 */
        if (piVar7 != (int *)0x0) {
          lVar5 = CRYPTO_strndup(*(undefined8 *)(piVar7 + 2),(long)*piVar7,"ssl/ssl_asn1.c",0xda);
          *(long *)(ses->sid_ctx + 0x14) = lVar5;
          if (lVar5 == 0) goto LAB_00ae5ed0;
        }
        piVar7 = *(int **)(val + 0x80);
        CRYPTO_free(*(void **)(ses->sid_ctx + 0x1c));
        *(undefined8 *)(ses->sid_ctx + 0x1c) = 0;
        if (piVar7 != (int *)0x0) {
          lVar5 = CRYPTO_strndup(*(undefined8 *)(piVar7 + 2),(long)*piVar7,"ssl/ssl_asn1.c",0xda);
          *(long *)(ses->sid_ctx + 0x1c) = lVar5;
          if (lVar5 == 0) goto LAB_00ae5ed0;
        }
        *(undefined8 *)(ses->krb5_client_princ + 0xb0) = *(undefined8 *)(val + 0x68);
        piVar7 = *(int **)(val + 0x70);
        if (piVar7 == (int *)0x0) {
          puVar6 = ses->krb5_client_princ + 0xa0;
        }
        else {
          puVar6 = (uchar *)(piVar7 + 2);
          *(undefined8 *)(ses->krb5_client_princ + 0xa0) = *(undefined8 *)puVar6;
          *(long *)(ses->krb5_client_princ + 0xa8) = (long)*piVar7;
        }
        puVar6[0] = '\0';
        puVar6[1] = '\0';
        puVar6[2] = '\0';
        puVar6[3] = '\0';
        puVar6[4] = '\0';
        puVar6[5] = '\0';
        puVar6[6] = '\0';
        puVar6[7] = '\0';
        piVar7 = *(int **)(val + 0x18);
        uVar4 = 0;
        if (piVar7 != (int *)0x0) {
          if (*piVar7 != 1) {
            iVar3 = 0x10f;
            line = 0x153;
                    /* try { // try from 00ae6158 to 00be6167 has its CatchHandler @ 00ae63a8 */
            goto LAB_00ae5ecc;
          }
          uVar4 = (uint)**(byte **)(piVar7 + 2);
        }
        *(uint *)(ses->krb5_client_princ + 0x40) = uVar4;
        piVar7 = *(int **)(val + 0x88);
        CRYPTO_free(*(void **)(ses->krb5_client_princ + 0xb8));
        ses->krb5_client_princ[0xb8] = '\0';
        ses->krb5_client_princ[0xb9] = '\0';
        ses->krb5_client_princ[0xba] = '\0';
        ses->krb5_client_princ[0xbb] = '\0';
        ses->krb5_client_princ[0xbc] = '\0';
        ses->krb5_client_princ[0xbd] = '\0';
        ses->krb5_client_princ[0xbe] = '\0';
        ses->krb5_client_princ[0xbf] = '\0';
        if (piVar7 == (int *)0x0) {
LAB_00ae610c:
          *(int *)(ses->krb5_client_princ + 0xc0) = (int)*(undefined8 *)(val + 0x90);
          ASN1_item_free(val,(ASN1_ITEM *)&DAT_01c72a60);
          if ((a != (SSL_SESSION **)0x0) && (*a == (SSL_SESSION *)0x0)) {
            *a = ses;
          }
          *pp = local_38;
          return ses;
        }
                    /* try { // try from 00ae60f4 to 00be60fb has its CatchHandler @ 00ae62ac */
                    /* try { // try from 00ae60fc to 00be6157 has its CatchHandler @ 00ae4dc4 */
        lVar5 = CRYPTO_strndup(*(undefined8 *)(piVar7 + 2),(long)*piVar7,"ssl/ssl_asn1.c",0xda);
        *(long *)(ses->krb5_client_princ + 0xb8) = lVar5;
        if (lVar5 != 0) goto LAB_00ae610c;
        goto LAB_00ae5ed0;
      }
      iVar3 = 0x89;
      line = 0x115;
    }
    else {
      iVar3 = 0x103;
      line = 0x10e;
    }
  }
  else {
    iVar3 = 0xfe;
    line = 0x107;
  }
LAB_00ae5ecc:
  ERR_put_error(0x14,0x67,iVar3,"ssl/ssl_asn1.c",line);
LAB_00ae5ed0:
  ASN1_item_free(val,(ASN1_ITEM *)&DAT_01c72a60);
                    /* try { // try from 00ae5ee8 to 00be5eef has its CatchHandler @ 00ae62b8 */
  if ((a == (SSL_SESSION **)0x0) || (*a != ses)) {
                    /* try { // try from 00ae5ef0 to 00be5f6f has its CatchHandler @ 00ae4dc4 */
    SSL_SESSION_free(ses);
  }
  return (SSL_SESSION *)0x0;
}

