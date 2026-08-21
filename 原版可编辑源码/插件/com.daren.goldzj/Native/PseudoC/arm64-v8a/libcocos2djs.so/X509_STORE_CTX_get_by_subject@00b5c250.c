
undefined8 X509_STORE_CTX_get_by_subject(long *param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  int local_50 [4];
  
  lVar8 = *param_1;
  CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar8 + 0x90));
  uVar6 = *(undefined8 *)(lVar8 + 8);
  iVar1 = FUN_00b5c838(uVar6,param_2,param_3,0);
  if (iVar1 == -1) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)OPENSSL_sk_value(uVar6,iVar1);
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar8 + 0x90));
  if ((param_2 == 2) || (piVar7 = piVar3, piVar3 == (int *)0x0)) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar8 + 0x10));
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar8 + 0x10),iVar1);
        if ((((*(long *)(lVar4 + 8) != 0) &&
             (pcVar5 = *(code **)(*(long *)(lVar4 + 8) + 0x30), pcVar5 != (code *)0x0)) &&
            (*(int *)(lVar4 + 4) == 0)) &&
           (iVar2 = (*pcVar5)(lVar4,param_2,param_3,local_50), piVar7 = local_50, iVar2 != 0))
        goto LAB_00b5c334;
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar8 + 0x10));
      } while (iVar1 < iVar2);
    }
    piVar7 = piVar3;
    if (piVar3 == (int *)0x0) {
      return 0;
    }
  }
LAB_00b5c334:
  iVar1 = *piVar7;
  *param_4 = iVar1;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(piVar7 + 2);
  if (iVar1 == 2) {
    X509_CRL_up_ref();
  }
  else if (iVar1 == 1) {
    X509_up_ref();
  }
  return 1;
}

