
undefined4 tls_process_server_certificate(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  X509 *a;
  undefined8 uVar6;
  EVP_PKEY *pkey;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *local_38;
  
                    /* try { // try from 00ad181c to 00bd181f has its CatchHandler @ 00ad19ac */
  lVar5 = OPENSSL_sk_new_null();
  if (lVar5 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad1928 with catch @ 00ad1978
                        */
    ERR_put_error(0x14,0x16f,0x41,"ssl/statem/statem_clnt.c",0x4a3);
    a = (X509 *)0x0;
  }
  else {
    uVar1 = param_2[1] - 3;
    if ((ulong)param_2[1] < 3) {
LAB_00ad1934:
      iVar2 = 0x9f;
      iVar4 = 0x4aa;
LAB_00ad194c:
      ERR_put_error(0x14,0x16f,iVar2,"ssl/statem/statem_clnt.c",iVar4);
      a = (X509 *)0x0;
LAB_00ad1954:
      uVar3 = 0x32;
    }
    else {
      pbVar8 = (byte *)*param_2;
                    /* try { // try from 00ad1840 to 00bd1843 has its CatchHandler @ 00ad19a8 */
      uVar9 = (ulong)*pbVar8 << 0x10 | (ulong)pbVar8[1] << 8 | (ulong)pbVar8[2];
      *param_2 = (long)(pbVar8 + 3);
      param_2[1] = uVar1;
      pbVar8 = local_38;
      if (uVar1 != uVar9) goto LAB_00ad1934;
      while (uVar9 != 0) {
        uVar1 = uVar9 - 3;
        if (uVar9 < 3) {
LAB_00ad19fc:
          iVar2 = 0x87;
          iVar4 = 0x4b2;
          local_38 = pbVar8;
          goto LAB_00ad194c;
        }
        pbVar10 = (byte *)*param_2;
                    /* try { // try from 00ad187c to 00bd187f has its CatchHandler @ 00ad19a4 */
        local_38 = pbVar10 + 3;
        uVar9 = (ulong)*pbVar10 << 0x10 | (ulong)pbVar10[1] << 8 | (ulong)pbVar10[2];
        *param_2 = (long)local_38;
        param_2[1] = uVar1;
        if (uVar1 < uVar9) goto LAB_00ad19fc;
                    /* try { // try from 00ad18a0 to 00bd18a3 has its CatchHandler @ 00ad19a0 */
        pbVar8 = local_38 + uVar9;
        *param_2 = (long)pbVar8;
        param_2[1] = uVar1 - uVar9;
        a = d2i_X509((X509 **)0x0,&local_38,uVar9);
        if (a == (X509 *)0x0) {
          ERR_put_error(0x14,0x16f,0xd,"ssl/statem/statem_clnt.c",0x4ba);
          uVar3 = 0x2a;
          goto LAB_00ad1958;
        }
        if (local_38 != pbVar8) {
          ERR_put_error(0x14,0x16f,0x87,"ssl/statem/statem_clnt.c",0x4c0);
          goto LAB_00ad1954;
        }
        iVar2 = OPENSSL_sk_push(lVar5,a);
        if (iVar2 == 0) {
          ERR_put_error(0x14,0x16f,0x41,"ssl/statem/statem_clnt.c",0x4c4);
          goto LAB_00ad198c;
        }
        pbVar8 = local_38;
        uVar9 = param_2[1];
      }
      local_38 = pbVar8;
                    /* try { // try from 00ad18ec to 00bd18ef has its CatchHandler @ 00ad198c */
      iVar2 = ssl_verify_cert_chain(param_1,lVar5);
      if ((iVar2 < 1) && (*(int *)(param_1 + 0x188) != 0)) {
        uVar3 = ssl_verify_alarm_type(*(undefined8 *)(param_1 + 0x1c8));
                    /* try { // try from 00ad1928 to 00bd192b has its CatchHandler @ 00ad1978 */
        ERR_put_error(0x14,0x16f,0x86,"ssl/statem/statem_clnt.c",0x4dc);
        a = (X509 *)0x0;
      }
      else {
        ERR_clear_error();
        if (iVar2 < 2) {
          *(long *)(*(long *)(param_1 + 0x178) + 0xa8) = lVar5;
          uVar6 = OPENSSL_sk_value(lVar5,0);
          pkey = (EVP_PKEY *)X509_get0_pubkey();
          if ((pkey == (EVP_PKEY *)0x0) || (iVar2 = EVP_PKEY_missing_parameters(pkey), iVar2 != 0))
          {
            iVar2 = 0xef;
            iVar4 = 0x4f7;
          }
          else {
            iVar2 = ssl_cert_type(uVar6,pkey);
            if (-1 < iVar2) {
              iVar4 = ssl_cipher_get_cert_index(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x228));
              if (((iVar4 < 0) || (iVar2 == iVar4)) || ((iVar2 - 4U < 3 && (iVar4 == 8)))) {
                lVar5 = *(long *)(param_1 + 0x178);
                *(int *)(lVar5 + 0xa0) = iVar2;
                X509_free(*(X509 **)(lVar5 + 0x98));
                X509_up_ref(uVar6);
                lVar7 = *(long *)(param_1 + 0x178);
                a = (X509 *)0x0;
                lVar5 = 0;
                *(undefined8 *)(lVar7 + 0x98) = uVar6;
                uVar3 = 3;
                *(undefined8 *)(lVar7 + 0xb0) = *(undefined8 *)(param_1 + 0x1c8);
                goto LAB_00ad1998;
              }
              ERR_put_error(0x14,0x16f,0x17f,"ssl/statem/statem_clnt.c",0x50c);
              a = (X509 *)0x0;
              lVar5 = 0;
              uVar3 = 0x2f;
              goto LAB_00ad1958;
            }
            iVar2 = 0xf7;
            iVar4 = 0x500;
          }
          ERR_put_error(0x14,0x16f,iVar2,"ssl/statem/statem_clnt.c",iVar4);
          a = (X509 *)0x0;
          lVar5 = 0;
          uVar3 = 2;
        }
        else {
          ERR_put_error(0x14,0x16f,iVar2,"ssl/statem/statem_clnt.c",0x4e1);
          a = (X509 *)0x0;
          uVar3 = 0x28;
        }
      }
    }
LAB_00ad1958:
    ssl3_send_alert(param_1,2,uVar3);
  }
LAB_00ad198c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad18ec with catch @ 00ad198c
                        */
  ossl_statem_set_error(param_1);
  uVar3 = 0;
LAB_00ad1998:
  X509_free(a);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad18a0 with catch @ 00ad19a0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad187c with catch @ 00ad19a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad1840 with catch @ 00ad19a8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad181c with catch @ 00ad19ac
                        */
  OPENSSL_sk_pop_free(lVar5,X509_free);
  return uVar3;
}

