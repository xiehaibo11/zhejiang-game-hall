
undefined4 tls_process_certificate_request(long param_1,long *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  void *__dest;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong __n;
  byte *__src;
  X509_NAME *a;
  uchar *local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae1754 with catch @ 00ae1794
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae1684 with catch @ 00ae1798
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae16e8 with catch @ 00ae17a0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae16a4 with catch @ 00ae17a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae169c with catch @ 00ae17b4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae16dc with catch @ 00ae17b8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae1724 with catch @ 00ae17b8
                        */
  lVar7 = OPENSSL_sk_new(&LAB_00ae2468);
  if (lVar7 == 0) {
    iVar6 = 0x41;
                    /* try { // try from 00ae1824 to 00be189f has its CatchHandler @ 00ae1824
                       catch() { ... } // from try @ 00ae1824 with catch @ 00ae1824
                       catch() { ... } // from try @ 00ae18a8 with catch @ 00ae1824
                       catch() { ... } // from try @ 00ae1934 with catch @ 00ae1824 */
    iVar8 = 0x6ed;
    goto LAB_00ae1828;
  }
  if (param_2[1] == 0) {
LAB_00ae17e4:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae17d8 with catch @ 00ae17e4
                        */
                    /* try { // try from 00ae17e8 to 00be17eb has its CatchHandler @ 00ae17f4 */
                    /* try { // try from 00ae17ec to 00be17f7 has its CatchHandler @ 00ae1630 */
    ssl3_send_alert(param_1,2,0x32);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae17e8 with catch @ 00ae17f4
                        */
    iVar6 = 0x9f;
    iVar8 = 0x6f5;
  }
  else {
    uVar10 = param_2[1] - 1;
    __src = (byte *)*param_2 + 1;
    bVar3 = *(byte *)*param_2;
    __n = (ulong)bVar3;
                    /* try { // try from 00ae17d8 to 00be17db has its CatchHandler @ 00ae17e4 */
                    /* try { // try from 00ae17dc to 00be17e7 has its CatchHandler @ 00ae1630 */
    *param_2 = (long)__src;
    param_2[1] = uVar10;
    if (uVar10 < __n) goto LAB_00ae17e4;
    *param_2 = (long)(__src + __n);
    param_2[1] = uVar10 - __n;
    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x148) + 0x138));
    *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x138) = 0;
    if (bVar3 < 10) {
                    /* try { // try from 00ae18dc to 00be18e3 has its CatchHandler @ 00ae1968 */
      if (bVar3 != 0) goto LAB_00ae18e0;
    }
    else {
                    /* try { // try from 00ae18a0 to 00be18a7 has its CatchHandler @ 00ae196c */
                    /* try { // try from 00ae18a8 to 00be18db has its CatchHandler @ 00ae1824 */
      __dest = CRYPTO_malloc((uint)bVar3,"ssl/statem/statem_clnt.c",0x6fc);
      *(void **)(*(long *)(param_1 + 0x148) + 0x138) = __dest;
      if (__dest == (void *)0x0) {
        iVar6 = 0x41;
        iVar8 = 0x6fe;
        goto LAB_00ae1828;
      }
      memcpy(__dest,__src,__n);
      *(ulong *)(*(long *)(param_1 + 0x148) + 0x140) = __n;
      __n = 9;
LAB_00ae18e0:
      uVar10 = 0;
      do {
        pbVar1 = __src + uVar10;
        lVar9 = *(long *)(param_1 + 0x90) + uVar10;
        uVar10 = uVar10 + 1;
        *(byte *)(lVar9 + 0x240) = *pbVar1;
      } while (uVar10 < __n);
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 1 & 1) == 0) {
      ssl_set_default_md(param_1);
LAB_00ae1918:
      uVar10 = param_2[1] - 2;
      if (1 < (ulong)param_2[1]) {
        puVar11 = (undefined1 *)*param_2;
        uVar4 = *puVar11;
                    /* try { // try from 00ae192c to 00be1933 has its CatchHandler @ 00ae1964 */
        uVar5 = puVar11[1];
                    /* try { // try from 00ae1934 to 00be197f has its CatchHandler @ 00ae1824 */
        *param_2 = (long)(puVar11 + 2);
        param_2[1] = uVar10;
        uVar12 = (ulong)CONCAT11(uVar4,uVar5);
        if (uVar10 == uVar12) {
          while (uVar12 != 0) {
            if (uVar12 == 1) {
LAB_00ae1b48:
              ssl3_send_alert(param_1,2,0x32);
              iVar6 = 0x9f;
              iVar8 = 0x732;
              goto LAB_00ae1828;
            }
                    /* try { // try from 00ae1980 to 00be19af has its CatchHandler @ 00ae1980
                       catch() { ... } // from try @ 00ae1980 with catch @ 00ae1980
                       catch() { ... } // from try @ 00ae19b8 with catch @ 00ae1980 */
            puVar11 = (undefined1 *)*param_2;
            uVar12 = uVar12 - 2;
            uVar4 = *puVar11;
            uVar5 = puVar11[1];
            puVar2 = puVar11 + 2;
            *param_2 = (long)puVar2;
            param_2[1] = uVar12;
            uVar10 = (ulong)CONCAT11(uVar4,uVar5);
            if (uVar12 < uVar10) goto LAB_00ae1b48;
                    /* try { // try from 00ae19b0 to 00be19b7 has its CatchHandler @ 00ae19f8 */
            *param_2 = (long)(puVar2 + uVar10);
            param_2[1] = uVar12 - uVar10;
            local_48 = puVar2;
                    /* try { // try from 00ae19b8 to 00be1a0b has its CatchHandler @ 00ae1980 */
            a = d2i_X509_NAME((X509_NAME **)0x0,&local_48,uVar10);
            if (a == (X509_NAME *)0x0) {
              ssl3_send_alert(param_1,2,0x32);
              iVar6 = 0xd;
              iVar8 = 0x73b;
LAB_00ae1bc8:
              ERR_put_error(0x14,0x169,iVar6,"ssl/statem/statem_clnt.c",iVar8);
              goto LAB_00ae1830;
            }
            if (local_48 != puVar2 + uVar10) {
              ssl3_send_alert(param_1,2,0x32);
              iVar6 = 0x83;
              iVar8 = 0x742;
              goto LAB_00ae1bc8;
            }
            iVar6 = OPENSSL_sk_push(lVar7,a);
            if (iVar6 == 0) {
              iVar6 = 0x41;
              iVar8 = 0x746;
                    /* catch() { ... } // from try @ 00ae19b0 with catch @ 00ae19f8 */
              goto LAB_00ae1bc8;
            }
            uVar12 = param_2[1];
          }
          lVar9 = *(long *)(param_1 + 0x90);
          *(undefined4 *)(lVar9 + 0x238) = 1;
          *(int *)(lVar9 + 0x23c) = (int)__n;
          OPENSSL_sk_pop_free(*(undefined8 *)(lVar9 + 0x250),X509_NAME_free);
          a = (X509_NAME *)0x0;
          uVar13 = 2;
          *(long *)(*(long *)(param_1 + 0x90) + 0x250) = lVar7;
          lVar7 = 0;
          goto LAB_00ae183c;
        }
      }
      ssl3_send_alert(param_1,2,0x32);
                    /* catch() { ... } // from try @ 00ae192c with catch @ 00ae1964 */
      iVar6 = 0x9f;
                    /* catch() { ... } // from try @ 00ae18dc with catch @ 00ae1968 */
      iVar8 = 0x729;
                    /* catch() { ... } // from try @ 00ae18a0 with catch @ 00ae196c */
    }
    else {
      uVar10 = param_2[1] - 2;
      if (1 < (ulong)param_2[1]) {
        puVar11 = (undefined1 *)*param_2;
                    /* try { // try from 00ae1a0c to 00be1aef has its CatchHandler @ 00ae1a0c
                       catch() { ... } // from try @ 00ae1a0c with catch @ 00ae1a0c
                       catch() { ... } // from try @ 00ae1b00 with catch @ 00ae1a0c */
        bVar3 = puVar11[1];
        uVar4 = *puVar11;
        *param_2 = (long)(puVar11 + 2);
        param_2[1] = uVar10;
        uVar12 = (ulong)CONCAT11(uVar4,bVar3);
        if (uVar12 <= uVar10) {
          *param_2 = (long)(puVar11 + 2 + uVar12);
          param_2[1] = uVar10 - uVar12;
          *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x2d8) = 0;
          lVar9 = *(long *)(param_1 + 0x90);
          *(undefined4 *)(lVar9 + 0x310) = 0;
          *(undefined8 *)(lVar9 + 0x2e0) = 0;
          lVar9 = *(long *)(param_1 + 0x90);
          *(undefined4 *)(lVar9 + 0x314) = 0;
          *(undefined8 *)(lVar9 + 0x2e8) = 0;
          lVar9 = *(long *)(param_1 + 0x90);
          *(undefined4 *)(lVar9 + 0x318) = 0;
          *(undefined8 *)(lVar9 + 0x2f0) = 0;
          lVar9 = *(long *)(param_1 + 0x90);
          *(undefined4 *)(lVar9 + 0x31c) = 0;
          *(undefined8 *)(lVar9 + 0x2f8) = 0;
          lVar9 = *(long *)(param_1 + 0x90);
          *(undefined4 *)(lVar9 + 800) = 0;
          *(undefined8 *)(lVar9 + 0x300) = 0;
          lVar9 = *(long *)(param_1 + 0x90);
          *(undefined4 *)(lVar9 + 0x324) = 0;
          *(undefined8 *)(lVar9 + 0x308) = 0;
          *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x328) = 0;
          if (((bVar3 & 1) == 0) && (iVar6 = tls1_save_sigalgs(param_1), iVar6 != 0)) {
            iVar6 = tls1_process_sigalgs(param_1);
            if (iVar6 != 0) goto LAB_00ae1918;
                    /* try { // try from 00ae1af0 to 00be1aff has its CatchHandler @ 00ae1b04 */
            ssl3_send_alert(param_1,2,0x50);
                    /* try { // try from 00ae1b00 to 00be1b47 has its CatchHandler @ 00ae1a0c */
                    /* catch() { ... } // from try @ 00ae1af0 with catch @ 00ae1b04 */
            iVar6 = 0x41;
            iVar8 = 0x71e;
          }
          else {
            ssl3_send_alert(param_1,2,0x32);
            iVar6 = 0x168;
            iVar8 = 0x719;
          }
          goto LAB_00ae1828;
        }
      }
      ssl3_send_alert(param_1,2,0x32);
      iVar6 = 0x9f;
      iVar8 = 0x70d;
    }
  }
LAB_00ae1828:
  ERR_put_error(0x14,0x169,iVar6,"ssl/statem/statem_clnt.c",iVar8);
  a = (X509_NAME *)0x0;
LAB_00ae1830:
  ossl_statem_set_error(param_1);
  uVar13 = 0;
LAB_00ae183c:
  X509_NAME_free(a);
  OPENSSL_sk_pop_free(lVar7,X509_NAME_free);
  return uVar13;
}

