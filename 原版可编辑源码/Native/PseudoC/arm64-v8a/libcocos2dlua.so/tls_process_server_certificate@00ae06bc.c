
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
  
                    /* try { // try from 00ae06cc to 00be06d3 has its CatchHandler @ 00ae07c8 */
                    /* try { // try from 00ae06d4 to 00be06f7 has its CatchHandler @ 00ae0664 */
  lVar5 = OPENSSL_sk_new_null();
  if (lVar5 == 0) {
                    /* catch() { ... } // from try @ 00ae0804 with catch @ 00ae0824 */
    ERR_put_error(0x14,0x16f,0x41,"ssl/statem/statem_clnt.c",0x4a3);
    a = (X509 *)0x0;
  }
  else {
    uVar1 = param_2[1] - 3;
    if ((ulong)param_2[1] < 3) {
LAB_00ae07e8:
      iVar2 = 0x9f;
      iVar4 = 0x4aa;
LAB_00ae0800:
      ERR_put_error(0x14,0x16f,iVar2,"ssl/statem/statem_clnt.c",iVar4);
                    /* try { // try from 00ae0804 to 00be0807 has its CatchHandler @ 00ae0824 */
      a = (X509 *)0x0;
LAB_00ae0808:
                    /* try { // try from 00ae0808 to 00be083f has its CatchHandler @ 00ae07cc */
      uVar3 = 0x32;
    }
    else {
      pbVar8 = (byte *)*param_2;
                    /* try { // try from 00ae06f8 to 00be0703 has its CatchHandler @ 00ae07c8 */
                    /* try { // try from 00ae0704 to 00be072b has its CatchHandler @ 00ae0664 */
      uVar9 = (ulong)*pbVar8 << 0x10 | (ulong)pbVar8[1] << 8 | (ulong)pbVar8[2];
      *param_2 = (long)(pbVar8 + 3);
      param_2[1] = uVar1;
      pbVar8 = local_38;
      if (uVar1 != uVar9) goto LAB_00ae07e8;
      while (uVar9 != 0) {
        uVar1 = uVar9 - 3;
        if (uVar9 < 3) {
LAB_00ae08b0:
          iVar2 = 0x87;
          iVar4 = 0x4b2;
          local_38 = pbVar8;
                    /* try { // try from 00ae08c8 to 00be08d3 has its CatchHandler @ 00ae0aec */
          goto LAB_00ae0800;
        }
        pbVar10 = (byte *)*param_2;
                    /* try { // try from 00ae072c to 00be0733 has its CatchHandler @ 00ae07c4 */
                    /* try { // try from 00ae0734 to 00be0753 has its CatchHandler @ 00ae0664 */
        local_38 = pbVar10 + 3;
        uVar9 = (ulong)*pbVar10 << 0x10 | (ulong)pbVar10[1] << 8 | (ulong)pbVar10[2];
        *param_2 = (long)local_38;
        param_2[1] = uVar1;
        if (uVar1 < uVar9) goto LAB_00ae08b0;
                    /* try { // try from 00ae0754 to 00be075b has its CatchHandler @ 00ae07c4 */
        pbVar8 = local_38 + uVar9;
                    /* try { // try from 00ae075c to 00be077b has its CatchHandler @ 00ae0664 */
        *param_2 = (long)pbVar8;
        param_2[1] = uVar1 - uVar9;
        a = d2i_X509((X509 **)0x0,&local_38,uVar9);
        if (a == (X509 *)0x0) {
                    /* try { // try from 00ae0934 to 00be093f has its CatchHandler @ 00ae0ac8 */
          ERR_put_error(0x14,0x16f,0xd,"ssl/statem/statem_clnt.c",0x4ba);
          uVar3 = 0x2a;
          goto LAB_00ae080c;
        }
                    /* try { // try from 00ae077c to 00be0787 has its CatchHandler @ 00ae07c4 */
        if (local_38 != pbVar8) {
                    /* try { // try from 00ae0958 to 00be0963 has its CatchHandler @ 00ae0abc */
                    /* try { // try from 00ae0964 to 00be096f has its CatchHandler @ 00ae0aac */
          ERR_put_error(0x14,0x16f,0x87,"ssl/statem/statem_clnt.c",0x4c0);
          goto LAB_00ae0808;
        }
                    /* try { // try from 00ae0788 to 00be07cb has its CatchHandler @ 00ae0664 */
        iVar2 = OPENSSL_sk_push(lVar5,a);
        if (iVar2 == 0) {
                    /* try { // try from 00ae0970 to 00be0983 has its CatchHandler @ 00ae0a94 */
          ERR_put_error(0x14,0x16f,0x41,"ssl/statem/statem_clnt.c",0x4c4);
          goto LAB_00ae0840;
        }
        pbVar8 = local_38;
        uVar9 = param_2[1];
      }
      local_38 = pbVar8;
      iVar2 = ssl_verify_cert_chain(param_1,lVar5);
      if ((iVar2 < 1) && (*(int *)(param_1 + 0x188) != 0)) {
        uVar3 = ssl_verify_alarm_type(*(undefined8 *)(param_1 + 0x1c8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae072c with catch @ 00ae07c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae0754 with catch @ 00ae07c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae077c with catch @ 00ae07c4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae06cc with catch @ 00ae07c8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae06f8 with catch @ 00ae07c8
                        */
                    /* catch() { ... } // from try @ 00ae0808 with catch @ 00ae07cc */
        ERR_put_error(0x14,0x16f,0x86,"ssl/statem/statem_clnt.c",0x4dc);
        a = (X509 *)0x0;
      }
      else {
                    /* try { // try from 00ae087c to 00be088f has its CatchHandler @ 00ae0a80 */
        ERR_clear_error();
        if (iVar2 < 2) {
                    /* try { // try from 00ae08d4 to 00be08e3 has its CatchHandler @ 00ae0ac4 */
          *(long *)(*(long *)(param_1 + 0x178) + 0xa8) = lVar5;
          uVar6 = OPENSSL_sk_value(lVar5,0);
                    /* try { // try from 00ae08e4 to 00be08ff has its CatchHandler @ 00ae0acc */
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
                    /* try { // try from 00ae09bc to 00be09cf has its CatchHandler @ 00ae0a90 */
              if (((iVar4 < 0) || (iVar2 == iVar4)) || ((iVar2 - 4U < 3 && (iVar4 == 8)))) {
                lVar5 = *(long *)(param_1 + 0x178);
                    /* try { // try from 00ae09d0 to 00be09e7 has its CatchHandler @ 00ae0a7c */
                *(int *)(lVar5 + 0xa0) = iVar2;
                X509_free(*(X509 **)(lVar5 + 0x98));
                X509_up_ref(uVar6);
                lVar7 = *(long *)(param_1 + 0x178);
                    /* try { // try from 00ae09e8 to 00be0b27 has its CatchHandler @ 00ae0840 */
                a = (X509 *)0x0;
                lVar5 = 0;
                *(undefined8 *)(lVar7 + 0x98) = uVar6;
                uVar3 = 3;
                *(undefined8 *)(lVar7 + 0xb0) = *(undefined8 *)(param_1 + 0x1c8);
                goto LAB_00ae084c;
              }
              ERR_put_error(0x14,0x16f,0x17f,"ssl/statem/statem_clnt.c",0x50c);
              a = (X509 *)0x0;
              lVar5 = 0;
              uVar3 = 0x2f;
              goto LAB_00ae080c;
            }
            iVar2 = 0xf7;
            iVar4 = 0x500;
          }
          ERR_put_error(0x14,0x16f,iVar2,"ssl/statem/statem_clnt.c",iVar4);
                    /* try { // try from 00ae0918 to 00be0923 has its CatchHandler @ 00ae0aec */
          a = (X509 *)0x0;
          lVar5 = 0;
          uVar3 = 2;
                    /* try { // try from 00ae0924 to 00be0933 has its CatchHandler @ 00ae0ac0 */
        }
        else {
                    /* try { // try from 00ae0890 to 00be089b has its CatchHandler @ 00ae0a90 */
          ERR_put_error(0x14,0x16f,iVar2,"ssl/statem/statem_clnt.c",0x4e1);
          a = (X509 *)0x0;
          uVar3 = 0x28;
        }
      }
    }
LAB_00ae080c:
    ssl3_send_alert(param_1,2,uVar3);
  }
LAB_00ae0840:
                    /* try { // try from 00ae0840 to 00be087b has its CatchHandler @ 00ae0840
                       catch() { ... } // from try @ 00ae0840 with catch @ 00ae0840
                       catch() { ... } // from try @ 00ae09e8 with catch @ 00ae0840 */
  ossl_statem_set_error(param_1);
  uVar3 = 0;
LAB_00ae084c:
  X509_free(a);
  OPENSSL_sk_pop_free(lVar5,X509_free);
  return uVar3;
}

