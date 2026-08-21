
undefined8 tls_construct_certificate_request(SSL *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  stack_st_X509_NAME *psVar9;
  X509_NAME *a;
  undefined8 uVar10;
  ssl2_state_st *str;
  uchar *puVar11;
  undefined2 uVar12;
  int iVar13;
  undefined8 local_68;
  uchar *local_58;
  
  str = param_1->s2;
  puVar1 = (undefined1 *)
           (*(long *)&str->escape + (ulong)*(uint *)(param_1->method->get_timeout + 0x6c));
  local_58 = puVar1 + 1;
  iVar4 = ssl3_get_req_cert_type();
  *puVar1 = (char)iVar4;
  puVar11 = local_58 + iVar4;
  if (((byte)param_1->method->get_timeout[0x68] >> 1 & 1) == 0) {
    iVar4 = iVar4 + 1;
  }
  else {
    local_58 = puVar11;
    iVar5 = tls12_get_psigalgs(param_1,&local_68);
    local_58 = local_58 + 2;
    iVar5 = tls12_copy_sigalgs(param_1,local_58,local_68,(long)iVar5);
    puVar11[1] = (uchar)iVar5;
    *puVar11 = (uchar)((uint)iVar5 >> 8);
    iVar4 = iVar4 + iVar5 + 3;
    puVar11 = local_58 + iVar5;
  }
  local_58 = puVar11 + 2;
  iVar5 = iVar4 + 2;
  psVar9 = SSL_get_client_CA_list(param_1);
  if ((psVar9 == (stack_st_X509_NAME *)0x0) || (iVar6 = OPENSSL_sk_num(psVar9), iVar6 < 1)) {
    uVar12 = 0;
  }
  else {
    iVar6 = 0;
    iVar13 = 0;
    do {
      a = (X509_NAME *)OPENSSL_sk_value(psVar9,iVar6);
      iVar7 = i2d_X509_NAME(a,(uchar **)0x0);
      iVar8 = BUF_MEM_grow_clean((BUF_MEM *)str,
                                 (ulong)(iVar5 + iVar7 +
                                         *(int *)(param_1->method->get_timeout + 0x6c) + 2));
      if (iVar8 == 0) {
        iVar4 = 7;
        iVar5 = 0x7ea;
        goto LAB_00ae6b84;
      }
      lVar2 = *(long *)&param_1->s2->escape + (ulong)*(uint *)(param_1->method->get_timeout + 0x6c);
      lVar3 = lVar2 + iVar5;
      *(char *)(lVar2 + iVar5) = (char)((uint)iVar7 >> 8);
      *(char *)(lVar3 + 1) = (char)iVar7;
      local_58 = (uchar *)(lVar3 + 2);
      i2d_X509_NAME(a,&local_58);
      iVar5 = iVar7 + 2 + iVar5;
      iVar13 = iVar7 + 2 + iVar13;
      uVar12 = (undefined2)iVar13;
      iVar6 = iVar6 + 1;
      iVar7 = OPENSSL_sk_num(psVar9);
    } while (iVar6 < iVar7);
  }
  lVar2 = *(long *)&param_1->s2->escape + (ulong)*(uint *)(param_1->method->get_timeout + 0x6c);
  lVar3 = lVar2 + iVar4;
  *(char *)(lVar2 + iVar4) = (char)((ushort)uVar12 >> 8);
  *(char *)(lVar3 + 1) = (char)uVar12;
  local_58 = (uchar *)(lVar3 + 2);
  iVar4 = (**(code **)(param_1->method->get_timeout + 0x70))(param_1,0xd,(long)iVar5);
  if (iVar4 == 0) {
    iVar4 = 0x44;
    iVar5 = 0x7f9;
LAB_00ae6b84:
    ERR_put_error(0x14,0x174,iVar4,"ssl/statem/statem_srvr.c",iVar5);
    ossl_statem_set_error(param_1);
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    *(undefined4 *)(*(long *)&param_1->read_ahead + 0x288) = 1;
  }
  return uVar10;
}

