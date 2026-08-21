
ulong FUN_00b6d5b0(long param_1,long param_2,undefined8 *param_3)

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
  
  if ((param_2 == 0) || (iVar4 = OPENSSL_sk_num(param_2), iVar4 < 1)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: chain != NULL && sk_X509_num(chain) > 0",
                "crypto/x509v3/v3_asid.c",0x2ce);
  }
  if ((param_1 == 0) && (param_3 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx != NULL || ext != NULL","crypto/x509v3/v3_asid.c",0x2cf);
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x38) == 0)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx == NULL || ctx->verify_cb != NULL","crypto/x509v3/v3_asid.c",
                0x2d0);
  }
  if (param_3 == (undefined8 *)0x0) {
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
    lVar9 = 0;
    iVar4 = -1;
  }
  iVar5 = FUN_00b6c7f0(*param_3);
  if ((iVar5 == 0) || (iVar5 = FUN_00b6c7f0(param_3[1]), iVar5 == 0)) {
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
    if (piVar8 != (int *)0x0) goto LAB_00b6d68c;
LAB_00b6d6b4:
    lVar11 = 0;
LAB_00b6d6c8:
    bVar2 = false;
    piVar8 = (int *)param_3[1];
    if (piVar8 == (int *)0x0) goto LAB_00b6d6f4;
LAB_00b6d6d4:
    if (*piVar8 != 1) {
      if (*piVar8 == 0) {
        lVar12 = 0;
        bVar3 = true;
        goto LAB_00b6d704;
      }
      goto LAB_00b6d6f4;
    }
    lVar12 = *(long *)(piVar8 + 2);
  }
  else {
    uVar10 = 1;
    piVar8 = (int *)*param_3;
    if (piVar8 == (int *)0x0) goto LAB_00b6d6b4;
LAB_00b6d68c:
    if (*piVar8 == 1) {
      lVar11 = *(long *)(piVar8 + 2);
      goto LAB_00b6d6c8;
    }
    if (*piVar8 != 0) goto LAB_00b6d6b4;
    lVar11 = 0;
    bVar2 = true;
    piVar8 = (int *)param_3[1];
    if (piVar8 != (int *)0x0) goto LAB_00b6d6d4;
LAB_00b6d6f4:
    lVar12 = 0;
  }
  bVar3 = false;
LAB_00b6d704:
  if (lVar11 == 0 && lVar12 == 0) goto LAB_00b6d740;
LAB_00b6d958:
  do {
    iVar4 = iVar4 + 1;
    iVar5 = OPENSSL_sk_num(param_2);
    if (iVar5 <= iVar4) {
LAB_00b6d988:
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
                    /* WARNING: Could not recover jumptable at 0x00b6d9f4. Too many branches */
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
LAB_00b6da58:
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: x != NULL","crypto/x509v3/v3_asid.c",0x2fe);
    }
    puVar13 = *(undefined8 **)(lVar9 + 0x118);
    if (puVar13 != (undefined8 *)0x0) {
LAB_00b6d7a8:
      plVar1 = (long *)(lVar9 + 0x118);
      iVar5 = FUN_00b6c7f0(*puVar13);
      if ((iVar5 == 0) || (iVar5 = FUN_00b6c7f0(puVar13[1]), iVar5 == 0)) {
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
LAB_00b6d860:
          lVar11 = *(long *)(piVar8 + 2);
        }
        else {
          iVar5 = FUN_00b6d43c(*(undefined8 *)(piVar8 + 2),lVar11);
          if (iVar5 != 0) {
            puVar13 = (undefined8 *)*plVar1;
            piVar8 = (int *)*puVar13;
            goto LAB_00b6d860;
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
LAB_00b6d934:
        if (lVar11 != 0 || lVar12 != 0) goto LAB_00b6d958;
      }
      else {
        if (!bVar3) {
          iVar5 = FUN_00b6d43c(*(undefined8 *)(piVar8 + 2),lVar12);
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
            goto LAB_00b6d934;
          }
          piVar8 = *(int **)(*plVar1 + 8);
        }
        lVar12 = *(long *)(piVar8 + 2);
        bVar3 = false;
        if (lVar11 != 0 || lVar12 != 0) goto LAB_00b6d958;
      }
LAB_00b6d740:
      if (param_1 == 0) {
        do {
          iVar4 = iVar4 + 1;
          iVar5 = OPENSSL_sk_num(param_2);
          if (iVar5 <= iVar4) goto LAB_00b6d988;
          lVar9 = OPENSSL_sk_value(param_2,iVar4);
          if (lVar9 == 0) goto LAB_00b6da58;
          puVar13 = *(undefined8 **)(lVar9 + 0x118);
        } while (puVar13 == (undefined8 *)0x0);
      }
      else {
        do {
          iVar4 = iVar4 + 1;
          iVar5 = OPENSSL_sk_num(param_2);
          if (iVar5 <= iVar4) goto LAB_00b6d988;
          lVar9 = OPENSSL_sk_value(param_2,iVar4);
          if (lVar9 == 0) goto LAB_00b6da58;
          puVar13 = *(undefined8 **)(lVar9 + 0x118);
        } while (puVar13 == (undefined8 *)0x0);
      }
      goto LAB_00b6d7a8;
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
  } while( true );
}

