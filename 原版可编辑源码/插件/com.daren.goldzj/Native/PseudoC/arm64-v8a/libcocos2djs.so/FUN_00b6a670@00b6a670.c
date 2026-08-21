
int FUN_00b6a670(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  short sVar10;
  undefined1 *puVar11;
  long lVar12;
  
  if ((param_2 == 0) || (iVar1 = OPENSSL_sk_num(param_2), iVar1 < 1)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: chain != NULL && sk_X509_num(chain) > 0",
                "crypto/x509v3/v3_addr.c",0x49f);
  }
  if ((param_1 == 0) && (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx != NULL || ext != NULL","crypto/x509v3/v3_addr.c",0x4a0);
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x38) == 0)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx == NULL || ctx->verify_cb != NULL","crypto/x509v3/v3_addr.c",
                0x4a1);
  }
  if (param_3 == 0) {
    lVar12 = OPENSSL_sk_value(param_2,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: x != NULL","crypto/x509v3/v3_addr.c",0x4ae);
    }
    param_3 = *(long *)(lVar12 + 0x110);
    if (param_3 == 0) {
      iVar1 = 1;
      lVar6 = 0;
      goto LAB_00b6ab34;
    }
    iVar5 = 0;
  }
  else {
    lVar12 = 0;
    iVar5 = -1;
  }
  iVar1 = X509v3_addr_is_canonical(param_3);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      iVar1 = 0;
      lVar6 = 0;
      goto LAB_00b6ab34;
    }
    *(int *)(param_1 + 0xac) = iVar5;
    *(undefined4 *)(param_1 + 0xb0) = 0x29;
    *(long *)(param_1 + 0xb8) = lVar12;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      lVar6 = 0;
      goto LAB_00b6ab34;
    }
  }
  else {
    iVar1 = 1;
  }
  OPENSSL_sk_set_cmp_func(param_3,&LAB_00b6955c);
  lVar6 = OPENSSL_sk_dup(param_3);
                    /* try { // try from 00b6a71c to 00c6a75b has its CatchHandler @ 00b6a71c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b6a71c with catch @ 00b6a71c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b6a794 with catch @ 00b6a71c
                        */
  if (lVar6 == 0) {
                    /* try { // try from 00b6ab04 to 00c6ab0b has its CatchHandler @ 00b6adf8 */
    ERR_put_error(0x22,0xa6,0x41,"crypto/x509v3/v3_addr.c",0x4b7);
                    /* try { // try from 00b6ab0c to 00c6acbb has its CatchHandler @ 00b6aab0 */
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
  }
  else {
    iVar5 = iVar5 + 1;
    iVar2 = OPENSSL_sk_num(param_2);
    if (iVar5 < iVar2) {
LAB_00b6a738:
      lVar12 = OPENSSL_sk_value(param_2,iVar5);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: x != NULL","crypto/x509v3/v3_addr.c",0x4c3);
      }
      iVar2 = X509v3_addr_is_canonical(*(undefined8 *)(lVar12 + 0x110));
      if (iVar2 == 0) {
        if (param_1 == 0) goto LAB_00b6ab30;
                    /* try { // try from 00b6a75c to 00c6a763 has its CatchHandler @ 00b6a7c8 */
        *(int *)(param_1 + 0xac) = iVar5;
        *(undefined4 *)(param_1 + 0xb0) = 0x29;
        *(long *)(param_1 + 0xb8) = lVar12;
        iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar1 == 0) goto LAB_00b6ab34;
      }
      if (*(long *)(lVar12 + 0x110) == 0) {
        iVar2 = OPENSSL_sk_num(lVar6);
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            lVar8 = OPENSSL_sk_value(lVar6,iVar2);
            if (**(int **)(lVar8 + 8) != 0) goto LAB_00b6a9b8;
            iVar2 = iVar2 + 1;
            iVar4 = OPENSSL_sk_num(lVar6);
          } while (iVar2 < iVar4);
        }
      }
      else {
                    /* try { // try from 00b6a78c to 00c6a793 has its CatchHandler @ 00b6a7c4 */
        OPENSSL_sk_set_cmp_func(*(long *)(lVar12 + 0x110),&LAB_00b6955c);
                    /* try { // try from 00b6a794 to 00c6a7db has its CatchHandler @ 00b6a71c */
        iVar2 = OPENSSL_sk_num(lVar6);
        if (0 < iVar2) {
          if (param_1 == 0) {
            iVar2 = 0;
            do {
              plVar7 = (long *)OPENSSL_sk_value(lVar6,iVar2);
              uVar3 = OPENSSL_sk_find(*(undefined8 *)(lVar12 + 0x110),plVar7);
              lVar8 = OPENSSL_sk_value(*(undefined8 *)(lVar12 + 0x110),uVar3);
              if (lVar8 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6a828 with catch @ 00b6a990
                        */
                if (*(int *)plVar7[1] == 1) goto LAB_00b6a9b8;
              }
              else if (**(int **)(lVar8 + 8) == 1) {
                if (*(int *)plVar7[1] != 0) {
                  sVar10 = 0;
                  if (*plVar7 != 0) {
                    puVar11 = *(undefined1 **)(*plVar7 + 8);
                    sVar10 = 0;
                    if (puVar11 != (undefined1 *)0x0) {
                      sVar10 = CONCAT11(*puVar11,puVar11[1]);
                    }
                  }
                  iVar4 = 4;
                  if (sVar10 != 1) {
                    iVar4 = (uint)(sVar10 == 2) << 4;
                  }
                  iVar4 = FUN_00b6a544(*(undefined8 *)(*(int **)(lVar8 + 8) + 2),
                                       *(undefined8 *)((int *)plVar7[1] + 2),iVar4);
                  if (iVar4 == 0) goto LAB_00b6ab30;
                }
                OPENSSL_sk_set(lVar6,iVar2,lVar8);
              }
              iVar2 = iVar2 + 1;
              iVar4 = OPENSSL_sk_num(lVar6);
            } while (iVar2 < iVar4);
          }
          else {
            iVar2 = 0;
            do {
              plVar7 = (long *)OPENSSL_sk_value(lVar6,iVar2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6a78c with catch @ 00b6a7c4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6a75c with catch @ 00b6a7c8
                        */
              uVar3 = OPENSSL_sk_find(*(undefined8 *)(lVar12 + 0x110),plVar7);
              lVar8 = OPENSSL_sk_value(*(undefined8 *)(lVar12 + 0x110),uVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6a830 with catch @ 00b6a7dc
                        */
              if (lVar8 == 0) {
                if (*(int *)plVar7[1] == 1) goto LAB_00b6a9b8;
              }
              else if (**(int **)(lVar8 + 8) == 1) {
                if (*(int *)plVar7[1] != 0) {
                  sVar10 = 0;
                  if (*plVar7 != 0) {
                    puVar11 = *(undefined1 **)(*plVar7 + 8);
                    sVar10 = 0;
                    if (puVar11 != (undefined1 *)0x0) {
                      sVar10 = CONCAT11(*puVar11,puVar11[1]);
                    }
                  }
                    /* try { // try from 00b6a828 to 00c6a82f has its CatchHandler @ 00b6a990 */
                    /* try { // try from 00b6a830 to 00c6a993 has its CatchHandler @ 00b6a7dc */
                  iVar4 = 4;
                  if (sVar10 != 1) {
                    iVar4 = (uint)(sVar10 == 2) << 4;
                  }
                  uVar9 = FUN_00b6a544(*(undefined8 *)(*(int **)(lVar8 + 8) + 2),
                                       *(undefined8 *)((int *)plVar7[1] + 2),iVar4);
                  if ((int)uVar9 == 0) {
                    *(int *)(param_1 + 0xac) = iVar5;
                    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                    *(long *)(param_1 + 0xb8) = lVar12;
                    iVar1 = (**(code **)(param_1 + 0x38))(uVar9,param_1);
                    if (iVar1 != 0) goto LAB_00b6a864;
                    goto LAB_00b6ab34;
                  }
                }
                OPENSSL_sk_set(lVar6,iVar2,lVar8);
              }
LAB_00b6a864:
              iVar2 = iVar2 + 1;
              iVar4 = OPENSSL_sk_num(lVar6);
            } while (iVar2 < iVar4);
          }
        }
      }
      goto LAB_00b6a9e0;
    }
LAB_00b6a9f4:
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: x != NULL","crypto/x509v3/v3_addr.c",0x4ef);
    }
    if ((*(long *)(lVar12 + 0x110) != 0) && (iVar2 = OPENSSL_sk_num(), 0 < iVar2)) {
      iVar2 = 0;
      if (param_1 == 0) {
        do {
          lVar8 = OPENSSL_sk_value(*(undefined8 *)(lVar12 + 0x110),iVar2);
          if ((**(int **)(lVar8 + 8) == 0) && (iVar5 = OPENSSL_sk_find(lVar6,lVar8), -1 < iVar5))
          goto LAB_00b6ab30;
          iVar2 = iVar2 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6ab0c with catch @ 00b6aab0
                       catch(type#1 @ 00000000) { ... } // from try @ 00b6acc4 with catch @ 00b6aab0
                        */
          iVar5 = OPENSSL_sk_num(*(undefined8 *)(lVar12 + 0x110));
        } while (iVar2 < iVar5);
      }
      else {
        iVar2 = 0;
        do {
          lVar8 = OPENSSL_sk_value(*(undefined8 *)(lVar12 + 0x110),iVar2);
          if ((**(int **)(lVar8 + 8) == 0) && (iVar4 = OPENSSL_sk_find(lVar6,lVar8), -1 < iVar4)) {
            *(int *)(param_1 + 0xac) = iVar5;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(long *)(param_1 + 0xb8) = lVar12;
            iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar1 == 0) break;
          }
          iVar2 = iVar2 + 1;
          iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar12 + 0x110));
        } while (iVar2 < iVar4);
      }
    }
  }
LAB_00b6ab34:
  OPENSSL_sk_free(lVar6);
  return iVar1;
LAB_00b6a9b8:
  if (param_1 == 0) goto LAB_00b6ab30;
  *(int *)(param_1 + 0xac) = iVar5;
  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
  *(long *)(param_1 + 0xb8) = lVar12;
  iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
  if (iVar1 == 0) goto LAB_00b6ab34;
LAB_00b6a9e0:
  iVar5 = iVar5 + 1;
  iVar2 = OPENSSL_sk_num(param_2);
  if (iVar2 <= iVar5) goto LAB_00b6a9f4;
  goto LAB_00b6a738;
LAB_00b6ab30:
  iVar1 = 0;
  goto LAB_00b6ab34;
}

