
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
  
  lVar7 = OPENSSL_sk_new(&LAB_00ad35b4);
  if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 00ad2870 with catch @ 00ad295c */
    iVar6 = 0x41;
    iVar8 = 0x6ed;
    goto LAB_00ad2974;
  }
  if (param_2[1] == 0) {
LAB_00ad2930:
    ssl3_send_alert(param_1,2,0x32);
    iVar6 = 0x9f;
    iVar8 = 0x6f5;
  }
  else {
    uVar10 = param_2[1] - 1;
    __src = (byte *)*param_2 + 1;
    bVar3 = *(byte *)*param_2;
    __n = (ulong)bVar3;
    *param_2 = (long)__src;
    param_2[1] = uVar10;
    if (uVar10 < __n) goto LAB_00ad2930;
    *param_2 = (long)(__src + __n);
    param_2[1] = uVar10 - __n;
    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x148) + 0x138));
    *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x138) = 0;
    if (bVar3 < 10) {
      if (bVar3 != 0) goto LAB_00ad2a2c;
    }
    else {
      __dest = CRYPTO_malloc((uint)bVar3,"ssl/statem/statem_clnt.c",0x6fc);
      *(void **)(*(long *)(param_1 + 0x148) + 0x138) = __dest;
      if (__dest == (void *)0x0) {
        iVar6 = 0x41;
        iVar8 = 0x6fe;
        goto LAB_00ad2974;
      }
      memcpy(__dest,__src,__n);
      *(ulong *)(*(long *)(param_1 + 0x148) + 0x140) = __n;
      __n = 9;
LAB_00ad2a2c:
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
LAB_00ad2a64:
      uVar10 = param_2[1] - 2;
      if (1 < (ulong)param_2[1]) {
        puVar11 = (undefined1 *)*param_2;
        uVar4 = *puVar11;
        uVar5 = puVar11[1];
        *param_2 = (long)(puVar11 + 2);
        param_2[1] = uVar10;
        uVar12 = (ulong)CONCAT11(uVar4,uVar5);
        if (uVar10 == uVar12) {
          while (uVar12 != 0) {
            if (uVar12 == 1) {
LAB_00ad2c94:
              ssl3_send_alert(param_1,2,0x32);
              iVar6 = 0x9f;
              iVar8 = 0x732;
              goto LAB_00ad2974;
            }
            puVar11 = (undefined1 *)*param_2;
            uVar12 = uVar12 - 2;
            uVar4 = *puVar11;
            uVar5 = puVar11[1];
            puVar2 = puVar11 + 2;
            *param_2 = (long)puVar2;
            param_2[1] = uVar12;
            uVar10 = (ulong)CONCAT11(uVar4,uVar5);
            if (uVar12 < uVar10) goto LAB_00ad2c94;
            *param_2 = (long)(puVar2 + uVar10);
            param_2[1] = uVar12 - uVar10;
            local_48 = puVar2;
            a = d2i_X509_NAME((X509_NAME **)0x0,&local_48,uVar10);
            if (a == (X509_NAME *)0x0) {
              ssl3_send_alert(param_1,2,0x32);
              iVar6 = 0xd;
              iVar8 = 0x73b;
LAB_00ad2d14:
              ERR_put_error(0x14,0x169,iVar6,"ssl/statem/statem_clnt.c",iVar8);
              goto LAB_00ad297c;
            }
            if (local_48 != puVar2 + uVar10) {
              ssl3_send_alert(param_1,2,0x32);
              iVar6 = 0x83;
              iVar8 = 0x742;
              goto LAB_00ad2d14;
            }
            iVar6 = OPENSSL_sk_push(lVar7,a);
            if (iVar6 == 0) {
              iVar6 = 0x41;
              iVar8 = 0x746;
              goto LAB_00ad2d14;
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
          goto LAB_00ad2988;
        }
      }
      ssl3_send_alert(param_1,2,0x32);
      iVar6 = 0x9f;
      iVar8 = 0x729;
    }
    else {
      uVar10 = param_2[1] - 2;
      if (1 < (ulong)param_2[1]) {
        puVar11 = (undefined1 *)*param_2;
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
            if (iVar6 != 0) goto LAB_00ad2a64;
            ssl3_send_alert(param_1,2,0x50);
            iVar6 = 0x41;
            iVar8 = 0x71e;
          }
          else {
            ssl3_send_alert(param_1,2,0x32);
            iVar6 = 0x168;
            iVar8 = 0x719;
          }
          goto LAB_00ad2974;
        }
      }
      ssl3_send_alert(param_1,2,0x32);
      iVar6 = 0x9f;
      iVar8 = 0x70d;
    }
  }
LAB_00ad2974:
  ERR_put_error(0x14,0x169,iVar6,"ssl/statem/statem_clnt.c",iVar8);
  a = (X509_NAME *)0x0;
LAB_00ad297c:
  ossl_statem_set_error(param_1);
  uVar13 = 0;
LAB_00ad2988:
  X509_NAME_free(a);
  OPENSSL_sk_pop_free(lVar7,X509_NAME_free);
  return uVar13;
}

