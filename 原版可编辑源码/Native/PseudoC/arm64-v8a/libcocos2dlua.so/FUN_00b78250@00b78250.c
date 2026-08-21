
undefined8 FUN_00b78250(undefined8 *param_1,void *param_2,void *param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ASN1_VALUE *val;
  ASN1_VALUE *pAVar5;
  ASN1_BIT_STRING *pAVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  iVar3 = FUN_00b78a2c(param_2,param_3,param_4);
  if (-1 < iVar3) {
    uVar4 = FUN_00b78038(param_1,param_2,iVar3);
    return uVar4;
  }
  val = ASN1_item_new((ASN1_ITEM *)IPAddressOrRange_it);
  if (val == (ASN1_VALUE *)0x0) {
    return 0;
  }
  *(undefined4 *)val = 1;
  if (*(long *)(val + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: aor->u.addressRange == NULL","crypto/x509v3/v3_addr.c",0x1b0);
  }
  pAVar5 = ASN1_item_new((ASN1_ITEM *)IPAddressRange_it);
  *(ASN1_VALUE **)(val + 8) = pAVar5;
  if (pAVar5 != (ASN1_VALUE *)0x0) {
    if (*(long *)pAVar5 == 0) {
      pAVar6 = ASN1_BIT_STRING_new();
      **(undefined8 **)(val + 8) = pAVar6;
      if (pAVar6 == (ASN1_BIT_STRING *)0x0) goto LAB_00b78470;
      lVar7 = *(long *)(*(long *)(val + 8) + 8);
    }
    else {
      lVar7 = *(long *)(pAVar5 + 8);
    }
    if (lVar7 == 0) {
      pAVar6 = ASN1_BIT_STRING_new();
      *(ASN1_BIT_STRING **)(*(long *)(val + 8) + 8) = pAVar6;
      if (pAVar6 == (ASN1_BIT_STRING *)0x0) goto LAB_00b78470;
    }
    lVar12 = (long)param_4;
    lVar7 = lVar12 << 0x20;
    lVar10 = lVar12;
    do {
      lVar9 = lVar10;
      lVar7 = lVar7 + -0x100000000;
      if (lVar9 < 1) {
        bVar2 = false;
        goto LAB_00b78368;
      }
      lVar10 = lVar9 + -1;
    } while (*(char *)((long)param_2 + lVar9 + -1) == '\0');
    bVar2 = true;
LAB_00b78368:
    iVar3 = ASN1_BIT_STRING_set((ASN1_STRING *)**(undefined8 **)(val + 8),param_2,(int)lVar9);
    if (iVar3 != 0) {
      plVar8 = *(long **)(val + 8);
      lVar10 = *plVar8;
      uVar11 = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffff0 | 8;
      *(ulong *)(lVar10 + 0x10) = uVar11;
      if (bVar2) {
        iVar3 = -8;
        do {
          uVar1 = iVar3 + 9;
          iVar3 = iVar3 + 1;
        } while ((0xffU >> (ulong)(uVar1 & 0x1f) & (uint)*(byte *)((long)param_2 + (lVar7 >> 0x20)))
                 != 0);
        *(ulong *)(lVar10 + 0x10) = uVar11 | (long)-iVar3;
      }
      lVar7 = lVar12 << 0x20;
      do {
        lVar10 = lVar12;
        lVar7 = lVar7 + -0x100000000;
        if (lVar10 < 1) {
          bVar2 = false;
          goto LAB_00b78404;
        }
        lVar12 = lVar10 + -1;
      } while (*(char *)((long)param_3 + lVar10 + -1) == -1);
      bVar2 = true;
LAB_00b78404:
      iVar3 = ASN1_BIT_STRING_set((ASN1_STRING *)plVar8[1],param_3,(int)lVar10);
      if (iVar3 != 0) {
        lVar10 = *(long *)(*(long *)(val + 8) + 8);
        uVar11 = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffff0 | 8;
        *(ulong *)(lVar10 + 0x10) = uVar11;
        if (bVar2) {
          iVar3 = -8;
          do {
            uVar1 = iVar3 + 9;
            iVar3 = iVar3 + 1;
          } while ((0xffU >> (ulong)(uVar1 & 0x1f) &
                   (*(byte *)((long)param_3 + (lVar7 >> 0x20)) ^ 0xffffffff)) != 0);
          *(ulong *)(lVar10 + 0x10) = uVar11 | (long)-iVar3;
        }
        *param_1 = val;
        return 1;
      }
    }
  }
LAB_00b78470:
  ASN1_item_free(val,(ASN1_ITEM *)IPAddressOrRange_it);
  return 0;
}

