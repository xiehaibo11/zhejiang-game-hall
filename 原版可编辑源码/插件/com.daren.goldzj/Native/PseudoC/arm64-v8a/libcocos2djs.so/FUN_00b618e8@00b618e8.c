
uint FUN_00b618e8(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  X509 *x;
  X509_NAME *pXVar6;
  X509 *a;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0xe8);
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  if (((((lVar9 != 0) && (param_2 < iVar2)) && (0 < param_2)) &&
      (((*(uint *)(lVar9 + 0x28) & 5) != 0 && (*(long *)(param_1 + 0xe8) != 0)))) &&
     (((*(byte *)(*(long *)(param_1 + 0xe8) + 0x28) & 5) != 0 &&
      (lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_2), lVar5 != 0)))) {
    iVar3 = FUN_00b61bbc(*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xe8),lVar5,
                         param_2);
    if (iVar3 < 0) {
      return 2;
    }
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x94) = param_2 + -1;
      return 1;
    }
  }
  iVar3 = param_2;
  if (param_2 < iVar2) {
    do {
      x = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3);
      iVar4 = X509_check_trust(x,*(int *)(*(long *)(param_1 + 0x20) + 0x24),0);
      if (iVar4 == 1) goto LAB_00b61b70;
      if (iVar4 == 2) goto LAB_00b61ae8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
    if (param_2 < iVar2) {
      uVar7 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      uVar1 = (uVar7 & 0x80000) >> 0x12 ^ 3;
      if ((uVar7 >> 0x13 & 1) == 0) {
        return uVar1;
      }
      if (lVar9 == 0) {
        return uVar1;
      }
      goto LAB_00b61b74;
    }
  }
  if ((iVar2 != param_2) || ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) >> 3 & 1) == 0)) {
    return 3;
  }
  x = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
  pcVar8 = *(code **)(param_1 + 0x78);
  pXVar6 = X509_get_subject_name(x);
  lVar5 = (*pcVar8)(param_1,pXVar6);
  if (lVar5 == 0) {
    return 3;
  }
  iVar2 = OPENSSL_sk_num(lVar5);
  if (iVar2 < 1) {
    iVar2 = 0;
    a = (X509 *)0x0;
  }
  else {
    iVar2 = 0;
    do {
      a = (X509 *)OPENSSL_sk_value(lVar5,iVar2);
      iVar3 = X509_cmp(a,x);
      if (iVar3 == 0) break;
      iVar2 = iVar2 + 1;
      iVar3 = OPENSSL_sk_num(lVar5);
    } while (iVar2 < iVar3);
  }
  iVar3 = OPENSSL_sk_num(lVar5);
  if (iVar3 <= iVar2) {
    OPENSSL_sk_pop_free(lVar5,X509_free);
    return 3;
  }
  X509_up_ref(a);
  OPENSSL_sk_pop_free(lVar5,X509_free);
  if (a == (X509 *)0x0) {
    return 3;
  }
  iVar2 = X509_check_trust(a,*(int *)(*(long *)(param_1 + 0x20) + 0x24),0);
  if (iVar2 == 2) {
    X509_free(a);
    iVar3 = 0;
LAB_00b61ae8:
    *(int *)(param_1 + 0xac) = iVar3;
    if (x == (X509 *)0x0) {
      x = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3);
    }
    *(X509 **)(param_1 + 0xb8) = x;
    *(undefined4 *)(param_1 + 0xb0) = 0x1c;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 != 0) {
      return 3;
    }
    return 2;
  }
  OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x98),0,a);
  X509_free(x);
  *(undefined4 *)(param_1 + 0x94) = 0;
LAB_00b61b70:
  if (lVar9 == 0) {
    return 1;
  }
LAB_00b61b74:
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar9 + 8));
  if (iVar2 < 1) {
    return 1;
  }
  if (*(int *)(lVar9 + 0x30) < 0) {
    *(int *)(lVar9 + 0x30) = param_2;
  }
  return *(uint *)(lVar9 + 0x2c) >> 0x1e | 1;
}

