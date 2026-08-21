
undefined4 tls_process_client_certificate(int *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  byte *pbVar8;
  X509 *a;
  ulong len;
  ulong uVar9;
  byte *pbVar10;
  byte *local_48;
  
                    /* catch() { ... } // from try @ 00ae7f1c with catch @ 00ae803c */
                    /* catch() { ... } // from try @ 00ae7f6c with catch @ 00ae8050 */
  lVar4 = OPENSSL_sk_new_null();
  if (lVar4 == 0) {
    ERR_put_error(0x14,0x17c,0x41,"ssl/statem/statem_srvr.c",0xb2b);
LAB_00ae80e4:
    a = (X509 *)0x0;
LAB_00ae80e8:
    uVar3 = 0x50;
  }
  else {
    uVar1 = param_2[1] - 3;
    if (2 < (ulong)param_2[1]) {
      pbVar8 = (byte *)*param_2;
      pbVar10 = pbVar8 + 3;
      uVar9 = (ulong)*pbVar8 << 0x10 | (ulong)pbVar8[1] << 8 | (ulong)pbVar8[2];
      *param_2 = (long)pbVar10;
      param_2[1] = uVar1;
      if (uVar9 <= uVar1) {
        *param_2 = (long)(pbVar10 + uVar9);
        param_2[1] = uVar1 - uVar9;
        if (uVar1 - uVar9 == 0) {
          do {
            if (uVar9 == 0) {
              iVar2 = OPENSSL_sk_num(lVar4);
              if (iVar2 < 1) {
                if (*param_1 == 0x300) {
                    /* try { // try from 00ae828c to 00be8293 has its CatchHandler @ 00ae8388 */
                    /* try { // try from 00ae8294 to 00be82b7 has its CatchHandler @ 00ae8224 */
                  iVar2 = 0xb0;
                  iVar7 = 0xb58;
                }
                else {
                    /* try { // try from 00ae82f4 to 00be8313 has its CatchHandler @ 00ae8224 */
                  if ((~param_1[0x62] & 3U) != 0) {
                    /* try { // try from 00ae833c to 00be8347 has its CatchHandler @ 00ae8384 */
                    if ((*(long *)(*(long *)(param_1 + 0x24) + 0xd8) != 0) &&
                       (iVar2 = ssl3_digest_cached_records(param_1,0), iVar2 == 0))
                    goto LAB_00ae80e4;
LAB_00ae8348:
                    /* try { // try from 00ae8348 to 00be838b has its CatchHandler @ 00ae8224 */
                    X509_free(*(X509 **)(*(long *)(param_1 + 0x5e) + 0x98));
                    uVar6 = OPENSSL_sk_shift(lVar4);
                    lVar5 = *(long *)(param_1 + 0x5e);
                    *(undefined8 *)(lVar5 + 0x98) = uVar6;
                    *(undefined8 *)(lVar5 + 0xb0) = *(undefined8 *)(param_1 + 0x72);
                    OPENSSL_sk_pop_free(*(undefined8 *)(lVar5 + 0xa8),X509_free);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae82ec with catch @ 00ae8384
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae8314 with catch @ 00ae8384
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae833c with catch @ 00ae8384
                        */
                    a = (X509 *)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae828c with catch @ 00ae8388
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae82b8 with catch @ 00ae8388
                        */
                    uVar3 = 3;
                    *(long *)(*(long *)(param_1 + 0x5e) + 0xa8) = lVar4;
                    lVar4 = 0;
                    goto LAB_00ae8108;
                  }
                    /* try { // try from 00ae8314 to 00be831b has its CatchHandler @ 00ae8384 */
                  iVar2 = 199;
                  iVar7 = 0xb5f;
                }
              }
              else {
                iVar2 = ssl_verify_cert_chain(param_1,lVar4);
                if (iVar2 < 1) {
                  uVar3 = ssl_verify_alarm_type(*(undefined8 *)(param_1 + 0x72));
                    /* try { // try from 00ae82b8 to 00be82c3 has its CatchHandler @ 00ae8388 */
                    /* try { // try from 00ae82c4 to 00be82eb has its CatchHandler @ 00ae8224 */
                  ERR_put_error(0x14,0x17c,0x86,"ssl/statem/statem_srvr.c",0xb6d);
                  a = (X509 *)0x0;
                  goto LAB_00ae80ec;
                }
                if (iVar2 == 1) {
                  OPENSSL_sk_value(lVar4,0);
                  lVar5 = X509_get0_pubkey();
                  if (lVar5 != 0) goto LAB_00ae8348;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae8294 with catch @ 00ae8224
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae82c4 with catch @ 00ae8224
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae82f4 with catch @ 00ae8224
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae831c with catch @ 00ae8224
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae8348 with catch @ 00ae8224
                        */
                  iVar2 = 0xf7;
                  iVar7 = 0xb79;
                }
                else {
                  iVar7 = 0xb71;
                    /* try { // try from 00ae82ec to 00be82f3 has its CatchHandler @ 00ae8384 */
                }
              }
                    /* try { // try from 00ae831c to 00be833b has its CatchHandler @ 00ae8224 */
              ERR_put_error(0x14,0x17c,iVar2,"ssl/statem/statem_srvr.c",iVar7);
              a = (X509 *)0x0;
              uVar3 = 0x28;
              goto LAB_00ae80ec;
            }
            uVar1 = uVar9 - 3;
            if (uVar9 < 3) {
LAB_00ae81c4:
              iVar2 = 0x87;
              iVar7 = 0xb3c;
              goto LAB_00ae80b8;
            }
            len = (ulong)*pbVar10 << 0x10 | (ulong)pbVar10[1] << 8 | (ulong)pbVar10[2];
            uVar9 = uVar1 - len;
            if (uVar1 < len) goto LAB_00ae81c4;
            local_48 = pbVar10 + 3;
            a = d2i_X509((X509 **)0x0,&local_48,len);
            if (a == (X509 *)0x0) {
              iVar2 = 0xd;
              iVar7 = 0xb43;
              goto LAB_00ae8258;
            }
            pbVar10 = pbVar10 + 3 + len;
            if (local_48 != pbVar10) {
              ERR_put_error(0x14,0x17c,0x87,"ssl/statem/statem_srvr.c",0xb49);
              goto LAB_00ae80c0;
            }
            iVar2 = OPENSSL_sk_push(lVar4,a);
          } while (iVar2 != 0);
          iVar2 = 0x41;
          iVar7 = 0xb4d;
LAB_00ae8258:
          ERR_put_error(0x14,0x17c,iVar2,"ssl/statem/statem_srvr.c",iVar7);
          goto LAB_00ae80e8;
        }
      }
    }
    iVar2 = 0x9f;
    iVar7 = 0xb33;
LAB_00ae80b8:
    ERR_put_error(0x14,0x17c,iVar2,"ssl/statem/statem_srvr.c",iVar7);
    a = (X509 *)0x0;
LAB_00ae80c0:
    uVar3 = 0x32;
  }
LAB_00ae80ec:
  ssl3_send_alert(param_1,2,uVar3);
  ossl_statem_set_error(param_1);
  uVar3 = 0;
LAB_00ae8108:
  X509_free(a);
  OPENSSL_sk_pop_free(lVar4,X509_free);
  return uVar3;
}

