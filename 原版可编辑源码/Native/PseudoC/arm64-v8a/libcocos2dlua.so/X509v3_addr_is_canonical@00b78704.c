
undefined8 X509v3_addr_is_canonical(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  short sVar11;
  int *piVar12;
  undefined1 *puVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  ulong __n;
  undefined8 uVar17;
  undefined1 auStack_a0 [15];
  char acStack_91 [17];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  if (param_1 == 0) {
    return 1;
  }
  iVar5 = 0;
  while (iVar3 = OPENSSL_sk_num(param_1), iVar5 < iVar3 + -1) {
    puVar6 = (undefined8 *)OPENSSL_sk_value(param_1,iVar5);
    iVar5 = iVar5 + 1;
    puVar7 = (undefined8 *)OPENSSL_sk_value(param_1,iVar5);
    piVar12 = (int *)*puVar6;
    piVar15 = (int *)*puVar7;
    iVar3 = *piVar12 - *piVar15;
    piVar16 = piVar12;
    if (iVar3 != 0 && *piVar15 <= *piVar12) {
      piVar16 = piVar15;
    }
    iVar4 = memcmp(*(void **)(piVar12 + 2),*(void **)(piVar15 + 2),(long)*piVar16);
    if (iVar4 != 0) {
      iVar3 = iVar4;
    }
    if (-1 < iVar3) {
      return 0;
    }
  }
  iVar5 = OPENSSL_sk_num(param_1);
  if (iVar5 < 1) {
    return 1;
  }
  iVar5 = 0;
  do {
    plVar8 = (long *)OPENSSL_sk_value(param_1,iVar5);
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    sVar11 = 0;
    if (*plVar8 != 0) {
      puVar13 = *(undefined1 **)(*plVar8 + 8);
      sVar11 = 0;
      if (puVar13 != (undefined1 *)0x0) {
        sVar11 = CONCAT11(*puVar13,puVar13[1]);
      }
    }
    piVar16 = (int *)plVar8[1];
    uVar1 = 4;
    if (sVar11 != 1) {
      uVar1 = (uint)(sVar11 == 2) << 4;
    }
    __n = (ulong)uVar1;
    if (piVar16 == (int *)0x0) {
      return 0;
    }
    if (*piVar16 != 0) {
      if (*piVar16 != 1) {
        return 0;
      }
      uVar17 = *(undefined8 *)(piVar16 + 2);
      uVar9 = OPENSSL_sk_num(uVar17);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      iVar3 = OPENSSL_sk_num(uVar17);
      if (1 < iVar3) {
        iVar3 = 0;
        do {
          piVar16 = (int *)OPENSSL_sk_value(uVar17,iVar3);
          iVar3 = iVar3 + 1;
          uVar9 = OPENSSL_sk_value(uVar17,iVar3);
          uVar10 = FUN_00b78528(piVar16,auStack_70,auStack_80,__n);
          if ((int)uVar10 == 0) {
            return uVar10;
          }
          uVar9 = FUN_00b78528(uVar9,acStack_91 + 1,auStack_a0,__n);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          iVar4 = memcmp(auStack_70,acStack_91 + 1,__n);
          if (-1 < iVar4) {
            return 0;
          }
          iVar4 = memcmp(auStack_70,auStack_80,__n);
          if (0 < iVar4) {
            return 0;
          }
          iVar4 = memcmp(acStack_91 + 1,auStack_a0,__n);
          uVar14 = __n;
          if (0 < iVar4) {
            return 0;
          }
          do {
            if ((long)uVar14 < 1) break;
            cVar2 = acStack_91[uVar14];
            acStack_91[uVar14] = cVar2 + -1;
            uVar14 = uVar14 - 1;
          } while (cVar2 == '\0');
          iVar4 = memcmp(auStack_80,acStack_91 + 1,__n);
          if (-1 < iVar4) {
            return 0;
          }
          if ((*piVar16 == 1) && (iVar4 = FUN_00b78a2c(auStack_70,auStack_80,__n), -1 < iVar4)) {
            return 0;
          }
          iVar4 = OPENSSL_sk_num(uVar17);
        } while (iVar3 < iVar4 + -1);
      }
      iVar3 = OPENSSL_sk_num(uVar17);
      piVar16 = (int *)OPENSSL_sk_value(uVar17,iVar3 + -1);
      if ((piVar16 != (int *)0x0) && (*piVar16 == 1)) {
        uVar9 = FUN_00b78528(piVar16,auStack_70,auStack_80,__n);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        iVar3 = memcmp(auStack_70,auStack_80,__n);
        if (0 < iVar3) {
          return 0;
        }
        iVar3 = FUN_00b78a2c(auStack_70,auStack_80,__n);
        if (-1 < iVar3) {
          return 0;
        }
      }
    }
    iVar5 = iVar5 + 1;
    iVar3 = OPENSSL_sk_num(param_1);
    if (iVar3 <= iVar5) {
      return 1;
    }
  } while( true );
}

