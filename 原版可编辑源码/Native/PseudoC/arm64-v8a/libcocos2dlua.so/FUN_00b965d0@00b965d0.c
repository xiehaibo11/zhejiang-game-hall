
bool FUN_00b965d0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long in_x9;
  long lVar6;
  long in_x10;
  long in_x11;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *in_x12;
  long lVar9;
  BN_CTX *unaff_x19;
  undefined8 unaff_x20;
  void *ptr;
  long unaff_x21;
  int n;
  long lVar10;
  int iVar11;
  void *ptr_00;
  BIGNUM *unaff_x24;
  int unaff_w25;
  long unaff_x26;
  BN_MONT_CTX *mont;
  uint unaff_w27;
  int unaff_w28;
  long unaff_x29;
  
  do {
    lVar10 = param_1 * 8;
    param_1 = param_1 + 1;
    *in_x12 = *(undefined8 *)(in_x9 + lVar10);
    in_x12 = (undefined8 *)((long)in_x12 + in_x11);
  } while (param_1 < in_x10);
  lVar10 = *(long *)(unaff_x29 + -0xb8);
  *(undefined8 *)(unaff_x29 + -200) = unaff_x20;
  iVar3 = *(int *)(unaff_x29 + -0x78);
  if (unaff_w25 <= *(int *)(unaff_x29 + -0x78)) {
    iVar3 = unaff_w25;
  }
  if (0 < iVar3) {
    lVar9 = *(long *)(unaff_x29 + -0xa0);
    lVar6 = *(long *)(unaff_x29 + -0x80);
    lVar5 = 0;
    puVar7 = (undefined8 *)(unaff_x26 + (0x48 - lVar10));
    do {
      lVar1 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      *puVar7 = *(undefined8 *)(lVar6 + lVar1);
      puVar7 = puVar7 + lVar9;
    } while (lVar5 < iVar3);
  }
  if (1 < unaff_w27) {
    iVar3 = BN_mod_mul_montgomery
                      ((BIGNUM *)(unaff_x29 + -0x68),(BIGNUM *)(unaff_x29 + -0x80),
                       (BIGNUM *)(unaff_x29 + -0x80),*(BN_MONT_CTX **)(unaff_x29 + -0x88),unaff_x19)
    ;
    if (iVar3 == 0) {
      mont = *(BN_MONT_CTX **)(unaff_x29 + -0x88);
LAB_00b9683c:
      ptr = *(void **)(unaff_x29 + -200);
      goto LAB_00b96840;
    }
    iVar3 = *(int *)(unaff_x29 + -0x60);
    if (unaff_w25 <= *(int *)(unaff_x29 + -0x60)) {
      iVar3 = unaff_w25;
    }
    if (0 < iVar3) {
      lVar9 = *(long *)(unaff_x29 + -0xa0);
      lVar6 = *(long *)(unaff_x29 + -0x68);
      lVar5 = 0;
      puVar7 = (undefined8 *)(unaff_x26 + (0x50 - lVar10));
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        *puVar7 = *(undefined8 *)(lVar6 + lVar1);
        puVar7 = puVar7 + lVar9;
      } while (lVar5 < iVar3);
    }
    if (3 < *(int *)(unaff_x29 + -0x94)) {
      lVar5 = *(long *)(unaff_x29 + -0xa0);
      puVar7 = (undefined8 *)(unaff_x26 + (0x58 - lVar10));
      mont = *(BN_MONT_CTX **)(unaff_x29 + -0x88);
      lVar10 = 3;
      do {
        iVar3 = BN_mod_mul_montgomery
                          ((BIGNUM *)(unaff_x29 + -0x68),(BIGNUM *)(unaff_x29 + -0x80),
                           (BIGNUM *)(unaff_x29 + -0x68),mont,unaff_x19);
        if (iVar3 == 0) goto LAB_00b9683c;
        iVar3 = *(int *)(unaff_x29 + -0x60);
        if (unaff_w25 <= *(int *)(unaff_x29 + -0x60)) {
          iVar3 = unaff_w25;
        }
        if (0 < iVar3) {
          lVar9 = *(long *)(unaff_x29 + -0x68);
          lVar6 = 0;
          puVar8 = puVar7;
          do {
            lVar1 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            *puVar8 = *(undefined8 *)(lVar9 + lVar1);
            puVar8 = puVar8 + lVar5;
          } while (lVar6 < iVar3);
        }
        lVar10 = lVar10 + 1;
        puVar7 = puVar7 + 1;
      } while (lVar10 < *(long *)(unaff_x29 + -0xa0));
    }
  }
  n = unaff_w28 + -1;
  iVar3 = 0;
  if (unaff_w27 != 0) {
    iVar3 = n / (int)unaff_w27;
  }
  iVar11 = 0;
  iVar3 = n - iVar3 * unaff_w27;
  if (iVar3 < 0) {
    mont = *(BN_MONT_CTX **)(unaff_x29 + -0x88);
  }
  else {
    mont = *(BN_MONT_CTX **)(unaff_x29 + -0x88);
    iVar3 = iVar3 + 1;
    do {
      iVar4 = BN_is_bit_set(unaff_x24,n);
      iVar3 = iVar3 + -1;
      iVar11 = iVar4 + iVar11 * 2;
      n = n + -1;
    } while (0 < iVar3);
  }
  ptr = *(void **)(unaff_x29 + -200);
  iVar3 = FUN_00b9690c(unaff_x29 + -0x68,unaff_w25,ptr,iVar11,unaff_w27);
  while (iVar3 != 0) {
    if (n < 0) {
      iVar3 = BN_from_montgomery(*(BIGNUM **)(unaff_x29 + -0xc0),(BIGNUM *)(unaff_x29 + -0x68),mont,
                                 unaff_x19);
      bVar2 = iVar3 != 0;
      ptr_00 = *(void **)(unaff_x29 + -0xb0);
      if (unaff_x21 != 0) goto LAB_00b96854;
      goto LAB_00b9684c;
    }
    iVar3 = 0;
    iVar11 = 0;
    do {
      iVar4 = BN_mod_mul_montgomery
                        ((BIGNUM *)(unaff_x29 + -0x68),(BIGNUM *)(unaff_x29 + -0x68),
                         (BIGNUM *)(unaff_x29 + -0x68),mont,unaff_x19);
      if (iVar4 == 0) goto LAB_00b9683c;
      iVar4 = BN_is_bit_set(unaff_x24,n);
      iVar3 = iVar3 + 1;
      iVar11 = iVar4 + iVar11 * 2;
      n = n + -1;
    } while (iVar3 < (int)unaff_w27);
    ptr = *(void **)(unaff_x29 + -200);
    iVar3 = FUN_00b9690c(unaff_x29 + -0x80,unaff_w25,ptr,iVar11,unaff_w27);
    if (iVar3 == 0) break;
    iVar3 = BN_mod_mul_montgomery
                      ((BIGNUM *)(unaff_x29 + -0x68),(BIGNUM *)(unaff_x29 + -0x68),
                       (BIGNUM *)(unaff_x29 + -0x80),mont,unaff_x19);
  }
LAB_00b96840:
  bVar2 = false;
  ptr_00 = *(void **)(unaff_x29 + -0xb0);
  if (unaff_x21 == 0) {
LAB_00b9684c:
    BN_MONT_CTX_free(mont);
  }
LAB_00b96854:
  if (ptr != (void *)0x0) {
    OPENSSL_cleanse(ptr,(long)(int)*(undefined8 *)(unaff_x29 + -0x90));
    CRYPTO_free(ptr_00);
  }
  BN_CTX_end(unaff_x19);
  return bVar2;
}

