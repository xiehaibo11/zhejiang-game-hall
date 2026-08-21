
ulong FUN_00b7ca30(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
                    /* try { // try from 00b7ca6c to 00c7ca6f has its CatchHandler @ 00b7ca74 */
  if ((param_2 == 0) || (iVar4 = OPENSSL_sk_num(param_2), iVar4 < 1)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: chain != NULL && sk_X509_num(chain) > 0",
                "crypto/x509v3/v3_asid.c",0x2ce);
  }
                    /* try { // try from 00b7ca70 to 00c7cab3 has its CatchHandler @ 00b7bfa0 */
                    /* catch() { ... } // from try @ 00b7ca6c with catch @ 00b7ca74 */
  if ((param_1 == 0) && (param_3 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx != NULL || ext != NULL","crypto/x509v3/v3_asid.c",0x2cf);
  }
                    /* catch() { ... } // from try @ 00b7c994 with catch @ 00b7ca78 */
                    /* catch() { ... } // from try @ 00b7c264 with catch @ 00b7ca7c */
                    /* catch() { ... } // from try @ 00b7c20c with catch @ 00b7ca80 */
  if ((param_1 != 0) && (*(long *)(param_1 + 0x38) == 0)) {
                    /* try { // try from 00b7cf24 to 00c7cf43 has its CatchHandler @ 00b7d388 */
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx == NULL || ctx->verify_cb != NULL","crypto/x509v3/v3_asid.c",
                0x2d0);
  }
                    /* catch() { ... } // from try @ 00b7c170 with catch @ 00b7ca84 */
  if (param_3 == (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00b7c3d4 with catch @ 00b7ca94 */
                    /* catch() { ... } // from try @ 00b7c204 with catch @ 00b7ca98
                       catch() { ... } // from try @ 00b7c344 with catch @ 00b7ca98
                       catch() { ... } // from try @ 00b7c590 with catch @ 00b7ca98 */
    lVar9 = OPENSSL_sk_value(param_2,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: x != NULL","crypto/x509v3/v3_asid.c",0x2dd);
    }
    param_3 = *(undefined8 **)(lVar9 + 0x118);
    if (param_3 == (undefined8 *)0x0) {
      return 1;
    }
    iVar4 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00b7c95c with catch @ 00b7ca88 */
    lVar9 = 0;
                    /* catch() { ... } // from try @ 00b7c900 with catch @ 00b7ca8c */
    iVar4 = -1;
                    /* catch() { ... } // from try @ 00b7c4d0 with catch @ 00b7ca90 */
  }
  iVar5 = FUN_00b7bc70(*param_3);
  if ((iVar5 == 0) || (iVar5 = FUN_00b7bc70(param_3[1]), iVar5 == 0)) {
    if (param_1 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0xac) = iVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x29;
    *(long *)(param_1 + 0xb8) = lVar9;
    uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
    uVar10 = uVar7 & 0xffffffff;
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    piVar8 = (int *)*param_3;
    if (piVar8 != (int *)0x0) goto LAB_00b7cb0c;
LAB_00b7cb34:
    lVar11 = 0;
LAB_00b7cb48:
    bVar2 = false;
    piVar8 = (int *)param_3[1];
    if (piVar8 == (int *)0x0) goto LAB_00b7cb74;
LAB_00b7cb54:
    if (*piVar8 != 1) {
      if (*piVar8 == 0) {
        lVar12 = 0;
        bVar3 = true;
        goto LAB_00b7cb84;
      }
      goto LAB_00b7cb74;
    }
    lVar12 = *(long *)(piVar8 + 2);
  }
  else {
    uVar10 = 1;
    piVar8 = (int *)*param_3;
    if (piVar8 == (int *)0x0) goto LAB_00b7cb34;
LAB_00b7cb0c:
    if (*piVar8 == 1) {
      lVar11 = *(long *)(piVar8 + 2);
      goto LAB_00b7cb48;
    }
    if (*piVar8 != 0) goto LAB_00b7cb34;
    lVar11 = 0;
    bVar2 = true;
    piVar8 = (int *)param_3[1];
    if (piVar8 != (int *)0x0) goto LAB_00b7cb54;
LAB_00b7cb74:
    lVar12 = 0;
  }
  bVar3 = false;
LAB_00b7cb84:
  if (lVar11 == 0 && lVar12 == 0) goto LAB_00b7cbc0;
LAB_00b7cdd8:
  do {
    iVar4 = iVar4 + 1;
    iVar5 = OPENSSL_sk_num(param_2);
    if (iVar5 <= iVar4) {
LAB_00b7ce08:
      uVar6 = (uint)uVar10;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: x != NULL","crypto/x509v3/v3_asid.c",0x32c);
      }
      puVar13 = *(undefined8 **)(lVar9 + 0x118);
      if (puVar13 == (undefined8 *)0x0) {
        return uVar10;
      }
      if (((int *)*puVar13 == (int *)0x0) || (*(int *)*puVar13 != 0)) {
        piVar8 = (int *)puVar13[1];
      }
      else {
        if (param_1 == 0) {
          return 0;
        }
        *(int *)(param_1 + 0xac) = iVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0x2e;
        *(long *)(param_1 + 0xb8) = lVar9;
        uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
        uVar10 = uVar7 & 0xffffffff;
        uVar6 = (uint)uVar7;
        if (uVar6 == 0) {
          return uVar7;
        }
        piVar8 = *(int **)(*(long *)(lVar9 + 0x118) + 8);
      }
      if (piVar8 == (int *)0x0) {
        return uVar10;
      }
      if (*piVar8 == 0) {
        uVar6 = 0;
      }
      if (*piVar8 == 0) {
        if (param_1 != 0) {
          *(int *)(param_1 + 0xac) = iVar4;
          *(undefined4 *)(param_1 + 0xb0) = 0x2e;
          *(long *)(param_1 + 0xb8) = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00b7ce74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
          return uVar10;
        }
        return (ulong)uVar6;
      }
      return (ulong)uVar6;
    }
    lVar9 = OPENSSL_sk_value(param_2,iVar4);
    if (lVar9 == 0) {
LAB_00b7ced8:
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: x != NULL","crypto/x509v3/v3_asid.c",0x2fe);
    }
    puVar13 = *(undefined8 **)(lVar9 + 0x118);
    if (puVar13 != (undefined8 *)0x0) {
LAB_00b7cc28:
      plVar1 = (long *)(lVar9 + 0x118);
      iVar5 = FUN_00b7bc70(*puVar13);
      if ((iVar5 == 0) || (iVar5 = FUN_00b7bc70(puVar13[1]), iVar5 == 0)) {
        if (param_1 == 0) {
          return 0;
        }
        *(int *)(param_1 + 0xac) = iVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0x29;
        *(long *)(param_1 + 0xb8) = lVar9;
        uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
        uVar10 = uVar7 & 0xffffffff;
        if ((int)uVar7 == 0) {
          return uVar7;
        }
      }
      puVar13 = (undefined8 *)*plVar1;
      piVar8 = (int *)*puVar13;
      if ((lVar11 != 0) && (piVar8 == (int *)0x0)) {
        if (param_1 == 0) {
          return 0;
        }
        *(int *)(param_1 + 0xac) = iVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0x2e;
        *(long *)(param_1 + 0xb8) = lVar9;
        uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
        uVar10 = uVar7 & 0xffffffff;
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        puVar13 = (undefined8 *)*plVar1;
        lVar11 = 0;
        piVar8 = (int *)*puVar13;
        bVar2 = false;
      }
      if ((piVar8 != (int *)0x0) && (*piVar8 == 1)) {
        if (bVar2) {
LAB_00b7cce0:
          lVar11 = *(long *)(piVar8 + 2);
        }
        else {
          iVar5 = FUN_00b7c8bc(*(undefined8 *)(piVar8 + 2),lVar11);
          if (iVar5 != 0) {
            puVar13 = (undefined8 *)*plVar1;
            piVar8 = (int *)*puVar13;
            goto LAB_00b7cce0;
          }
          if (param_1 == 0) {
            return 0;
          }
          *(int *)(param_1 + 0xac) = iVar4;
          *(undefined4 *)(param_1 + 0xb0) = 0x2e;
          *(long *)(param_1 + 0xb8) = lVar9;
          uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
          uVar10 = uVar7 & 0xffffffff;
          if ((int)uVar7 == 0) {
            return uVar7;
          }
          puVar13 = (undefined8 *)*plVar1;
        }
        bVar2 = false;
      }
      piVar8 = (int *)puVar13[1];
      if ((lVar12 != 0) && (piVar8 == (int *)0x0)) {
        if (param_1 == 0) {
          return 0;
        }
        *(int *)(param_1 + 0xac) = iVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0x2e;
        *(long *)(param_1 + 0xb8) = lVar9;
        uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
        uVar10 = uVar7 & 0xffffffff;
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        lVar12 = 0;
        piVar8 = *(int **)(*plVar1 + 8);
        bVar3 = false;
      }
      if ((piVar8 == (int *)0x0) || (*piVar8 != 1)) {
LAB_00b7cdb4:
        if (lVar11 != 0 || lVar12 != 0) goto LAB_00b7cdd8;
      }
      else {
        if (!bVar3) {
          iVar5 = FUN_00b7c8bc(*(undefined8 *)(piVar8 + 2),lVar12);
          if (iVar5 == 0) {
            if (param_1 == 0) {
              return 0;
            }
            *(int *)(param_1 + 0xac) = iVar4;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(long *)(param_1 + 0xb8) = lVar9;
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            uVar10 = (ulong)uVar6;
            bVar3 = false;
            if (uVar6 == 0) {
              return 0;
            }
            goto LAB_00b7cdb4;
          }
          piVar8 = *(int **)(*plVar1 + 8);
        }
        lVar12 = *(long *)(piVar8 + 2);
        bVar3 = false;
        if (lVar11 != 0 || lVar12 != 0) goto LAB_00b7cdd8;
      }
LAB_00b7cbc0:
      if (param_1 == 0) {
        do {
          iVar4 = iVar4 + 1;
          iVar5 = OPENSSL_sk_num(param_2);
          if (iVar5 <= iVar4) goto LAB_00b7ce08;
          lVar9 = OPENSSL_sk_value(param_2,iVar4);
          if (lVar9 == 0) goto LAB_00b7ced8;
          puVar13 = *(undefined8 **)(lVar9 + 0x118);
        } while (puVar13 == (undefined8 *)0x0);
      }
      else {
        do {
          iVar4 = iVar4 + 1;
          iVar5 = OPENSSL_sk_num(param_2);
          if (iVar5 <= iVar4) goto LAB_00b7ce08;
          lVar9 = OPENSSL_sk_value(param_2,iVar4);
          if (lVar9 == 0) goto LAB_00b7ced8;
          puVar13 = *(undefined8 **)(lVar9 + 0x118);
        } while (puVar13 == (undefined8 *)0x0);
      }
      goto LAB_00b7cc28;
    }
    if (param_1 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0xac) = iVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
    *(long *)(param_1 + 0xb8) = lVar9;
    uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
    uVar10 = uVar7 & 0xffffffff;
                    /* try { // try from 00b7cbb4 to 00c7cf23 has its CatchHandler @ 00b7cbb4
                       catch() { ... } // from try @ 00b7cbb4 with catch @ 00b7cbb4
                       catch() { ... } // from try @ 00b7d374 with catch @ 00b7cbb4 */
    if ((int)uVar7 == 0) {
      return uVar7;
    }
  } while( true );
}

