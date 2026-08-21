
undefined8 X509v3_addr_canonize(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ASN1_VALUE *val;
  ASN1_VALUE *val_00;
  undefined8 uVar7;
  int *piVar8;
  short sVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong __n;
  undefined8 local_a8;
  undefined1 auStack_a0 [15];
  char acStack_91 [17];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  iVar3 = OPENSSL_sk_num();
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      plVar6 = (long *)OPENSSL_sk_value(param_1,iVar3);
      if (*(int *)plVar6[1] == 1) {
        uVar12 = *(undefined8 *)((int *)plVar6[1] + 2);
        if (plVar6 == (long *)0x0) {
          sVar9 = 0;
        }
        else {
          sVar9 = 0;
          if (*plVar6 != 0) {
            puVar10 = *(undefined1 **)(*plVar6 + 8);
            sVar9 = 0;
            if (puVar10 != (undefined1 *)0x0) {
              sVar9 = CONCAT11(*puVar10,puVar10[1]);
            }
          }
        }
        uVar1 = 4;
        if (sVar9 != 1) {
          uVar1 = (uint)(sVar9 == 2) << 4;
        }
        __n = (ulong)uVar1;
        OPENSSL_sk_sort(uVar12);
        iVar4 = OPENSSL_sk_num(uVar12);
        if (1 < iVar4) {
          iVar4 = 0;
          do {
            val = (ASN1_VALUE *)OPENSSL_sk_value(uVar12,iVar4);
            val_00 = (ASN1_VALUE *)OPENSSL_sk_value(uVar12,iVar4 + 1);
            iVar5 = FUN_00b690a8(val,auStack_70,auStack_80,__n);
            if (iVar5 == 0) {
              return 0;
            }
            iVar5 = FUN_00b690a8(val_00,acStack_91 + 1,auStack_a0,__n);
            if (iVar5 == 0) {
              return 0;
            }
            iVar5 = memcmp(auStack_70,auStack_80,__n);
            if (0 < iVar5) {
              return 0;
            }
            iVar5 = memcmp(acStack_91 + 1,auStack_a0,__n);
            if (0 < iVar5) {
              return 0;
            }
            iVar5 = memcmp(auStack_80,acStack_91 + 1,__n);
            uVar11 = __n;
            if (-1 < iVar5) {
              return 0;
            }
            do {
              if ((long)uVar11 < 1) break;
              cVar2 = acStack_91[uVar11];
              acStack_91[uVar11] = cVar2 + -1;
              uVar11 = uVar11 - 1;
            } while (cVar2 == '\0');
            iVar5 = memcmp(auStack_80,acStack_91 + 1,__n);
            if (iVar5 == 0) {
              uVar7 = FUN_00b68dd0(&local_a8,auStack_70,auStack_a0,__n);
              if ((int)uVar7 == 0) {
                return uVar7;
              }
              OPENSSL_sk_set(uVar12,iVar4,local_a8);
              OPENSSL_sk_delete(uVar12,iVar4 + 1);
              ASN1_item_free(val,(ASN1_ITEM *)IPAddressOrRange_it);
              ASN1_item_free(val_00,(ASN1_ITEM *)IPAddressOrRange_it);
              iVar4 = iVar4 + -1;
            }
            iVar4 = iVar4 + 1;
            iVar5 = OPENSSL_sk_num(uVar12);
          } while (iVar4 < iVar5 + -1);
        }
        iVar4 = OPENSSL_sk_num(uVar12);
        piVar8 = (int *)OPENSSL_sk_value(uVar12,iVar4 + -1);
        if (((piVar8 != (int *)0x0) && (*piVar8 == 1)) &&
           ((iVar4 = FUN_00b690a8(piVar8,auStack_70,auStack_80,__n), iVar4 == 0 ||
            (iVar4 = memcmp(auStack_70,auStack_80,__n), 0 < iVar4)))) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = OPENSSL_sk_num(param_1);
    } while (iVar3 < iVar4);
  }
  OPENSSL_sk_set_cmp_func(param_1,&LAB_00b6955c);
  OPENSSL_sk_sort(param_1);
  iVar3 = X509v3_addr_is_canonical(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: X509v3_addr_is_canonical(addr)","crypto/x509v3/v3_addr.c",0x36e);
  }
  return 1;
}

