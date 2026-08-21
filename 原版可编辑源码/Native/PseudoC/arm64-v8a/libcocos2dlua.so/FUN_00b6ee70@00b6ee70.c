
undefined8 FUN_00b6ee70(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  X509 *pXVar4;
  undefined8 uVar5;
  X509 *pXVar6;
  EVP_PKEY *r;
  code *pcVar7;
  undefined4 uVar8;
  X509 *pXVar9;
  int iVar10;
  X509 *pXVar11;
  
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  iVar10 = iVar2 + -1;
  pXVar4 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar10);
  pXVar11 = pXVar4;
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar3 = (**(code **)(param_1 + 0x48))(param_1,pXVar4,pXVar4);
    if (iVar3 != 0) {
      pXVar6 = pXVar4;
      if (-1 < iVar10) goto LAB_00b6efa8;
      return 1;
    }
    pXVar9 = pXVar4;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) >> 3 & 1) == 0) {
      if (1 < iVar2) {
        iVar10 = iVar2 + -2;
        *(int *)(param_1 + 0xac) = iVar10;
        pXVar6 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar10);
        goto LAB_00b6efa4;
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (pXVar4 == (X509 *)0x0) {
        pXVar4 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(X509 **)(param_1 + 0xb8) = pXVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x15;
                    /* WARNING: Could not recover jumptable at 0x00b6ef3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar5;
    }
  }
  else {
    pXVar9 = (X509 *)0x0;
  }
LAB_00b6ef58:
  do {
    do {
      uVar5 = x509_check_cert_time(param_1,pXVar11,iVar10);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      *(X509 **)(param_1 + 0xb8) = pXVar11;
      *(X509 **)(param_1 + 0xc0) = pXVar9;
      *(int *)(param_1 + 0xac) = iVar10;
      uVar5 = (**(code **)(param_1 + 0x38))(1,param_1);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      iVar2 = iVar10 + -1;
      bVar1 = 0 < iVar10;
      pXVar4 = pXVar9;
      pXVar6 = pXVar11;
      iVar10 = iVar2;
      if (bVar1) {
        pXVar6 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar2);
        pXVar4 = pXVar11;
      }
LAB_00b6efa4:
      if (iVar10 < 0) {
        return 1;
      }
LAB_00b6efa8:
      pXVar9 = pXVar4;
    } while ((pXVar6 == pXVar4) &&
            (pXVar11 = pXVar4, (*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 6 & 1) == 0));
    r = (EVP_PKEY *)X509_get0_pubkey(pXVar4);
    pXVar11 = pXVar6;
    if (r == (EVP_PKEY *)0x0) {
      iVar2 = iVar10;
      if (pXVar6 != pXVar4) {
        iVar2 = iVar10 + 1;
      }
      *(int *)(param_1 + 0xac) = iVar2;
      if (pXVar4 == (X509 *)0x0) {
        pXVar4 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
      }
      pcVar7 = *(code **)(param_1 + 0x38);
      uVar8 = 6;
      *(X509 **)(param_1 + 0xb8) = pXVar4;
    }
    else {
      iVar2 = X509_verify(pXVar6,r);
      if (0 < iVar2) goto LAB_00b6ef58;
      *(int *)(param_1 + 0xac) = iVar10;
      if (pXVar6 == (X509 *)0x0) {
        pXVar6 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar10);
      }
      pcVar7 = *(code **)(param_1 + 0x38);
      *(X509 **)(param_1 + 0xb8) = pXVar6;
      uVar8 = 7;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar8;
    uVar5 = (*pcVar7)(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  } while( true );
}

