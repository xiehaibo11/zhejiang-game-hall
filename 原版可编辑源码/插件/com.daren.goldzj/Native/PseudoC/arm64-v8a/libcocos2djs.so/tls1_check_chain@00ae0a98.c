
ulong tls1_check_chain(SSL *param_1,X509 *param_2,EVP_PKEY *param_3,undefined8 param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  X509_NAME *pXVar9;
  X509_NAME *pXVar10;
  X509 *a;
  char cVar11;
  undefined4 uVar12;
  _func_3151 *p_Var13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  ulong uVar21;
  _func_3151 *p_Var22;
  uint uVar23;
  uint uVar24;
  uint *local_68;
  
  p_Var22 = param_1->verify_callback;
  uVar23 = *(uint *)(p_Var22 + 0x1c);
  if (param_5 == 0xffffffff) {
                    /* try { // try from 00ae0b0c to 00be0c03 has its CatchHandler @ 00ae0798 */
    if (param_2 == (X509 *)0x0) {
      return 0;
    }
    if (param_3 == (EVP_PKEY *)0x0) {
      return 0;
    }
    uVar2 = ssl_cert_type(param_2,param_3);
    uVar21 = (ulong)uVar2;
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    local_68 = (uint *)(*(long *)&param_1->read_ahead + (long)(int)uVar2 * 4 + 0x310);
    uVar2 = 0x50;
    if ((*(uint *)(p_Var22 + 0x1c) & 0x30001) != 0) {
      uVar2 = 0x6f0;
    }
    uVar7 = 1;
    uVar4 = uVar2;
    if ((uVar23 & 0x30000) == 0) goto LAB_00ae0b60;
LAB_00ae0bac:
                    /* catch() { ... } // from try @ 00ae083c with catch @ 00ae0bac
                       catch() { ... } // from try @ 00ae09b0 with catch @ 00ae0bac
                       catch() { ... } // from try @ 00ae0a8c with catch @ 00ae0bac */
                    /* catch() { ... } // from try @ 00ae0908 with catch @ 00ae0bb0 */
    iVar3 = X509_chain_check_suiteb(0,param_2,param_4,uVar23 & 0x30000);
    uVar23 = (uint)(iVar3 == 0) << 0xb;
    uVar2 = 0;
    if (iVar3 != 0 || uVar4 != 0) {
      uVar2 = uVar4 | 0x800;
    }
    if ((uVar4 == 0) && (iVar3 != 0)) {
      uVar23 = 0;
      uVar2 = 0;
      goto LAB_00ae1148;
    }
  }
  else {
    if (param_5 == 0xfffffffe) {
      p_Var13 = *(_func_3151 **)p_Var22;
      param_5 = (int)((ulong)((long)p_Var13 - (long)(p_Var22 + 0x20)) >> 3) * -0x33333333;
    }
    else {
      p_Var13 = p_Var22 + (long)(int)param_5 * 0x28 + 0x20;
    }
    uVar21 = (ulong)param_5;
    param_2 = *(X509 **)p_Var13;
    uVar2 = 0;
    local_68 = (uint *)(*(long *)&param_1->read_ahead + (long)(int)param_5 * 4 + 0x310);
    if ((param_2 == (X509 *)0x0) ||
       (param_3 = *(EVP_PKEY **)(p_Var13 + 8), param_3 == (EVP_PKEY *)0x0)) {
      uVar23 = 0;
      uVar2 = 0;
      goto LAB_00ae1148;
    }
                    /* catch() { ... } // from try @ 00ae0a30 with catch @ 00ae0b9c */
    param_4 = *(undefined8 *)(p_Var13 + 0x10);
    uVar7 = uVar23 & 0x30001;
    uVar4 = 0;
    if ((uVar23 & 0x30000) != 0) goto LAB_00ae0bac;
LAB_00ae0b60:
    uVar23 = 0;
  }
  uVar4 = SSL_version(param_1);
  if ((uVar4 & 0xffffff00) == 0x300) {
    uVar4 = SSL_version(param_1);
    uVar14 = (ulong)uVar4;
    if ((uVar7 != 0) && (0x302 < (int)uVar4)) {
      if (*(long *)(*(long *)&param_1->read_ahead + 0x2c0) == 0) {
        if ((uint)uVar21 < 7) {
          lVar15 = *(long *)(p_Var22 + 0x148);
          uVar17 = -(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2;
          if (lVar15 != 0) {
            uVar16 = *(ulong *)(p_Var22 + 0x150);
            if (uVar16 == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = 0;
              do {
                if ((*(char *)(lVar15 + uVar20) == '\x02') &&
                   (*(uint *)(&DAT_018a54b0 + uVar17) == (uint)*(byte *)(lVar15 + uVar20 + 1)))
                break;
                uVar20 = uVar20 + 2;
              } while (uVar20 < uVar16);
            }
            iVar3 = 2;
            if (uVar2 != 0) {
              iVar3 = 7;
            }
            if (uVar20 == uVar16) goto LAB_00ae1124;
          }
          iVar3 = *(int *)(&DAT_018a5490 + uVar17);
          iVar6 = X509_get_signature_nid(param_2);
          if (iVar6 != iVar3) goto LAB_00ae0c78;
LAB_00ae1010:
          bVar1 = false;
        }
        else {
          bVar1 = true;
          iVar3 = -1;
                    /* try { // try from 00ae0f1c to 00be0f3f has its CatchHandler @ 00ae1634 */
        }
        uVar7 = uVar23 | 0x10;
      }
      else {
        iVar3 = X509_get_signature_nid(param_2);
        if (*(ulong *)(p_Var22 + 0x170) != 0) {
          uVar14 = 0;
          piVar19 = (int *)(*(long *)(p_Var22 + 0x168) + 8);
          do {
            if (iVar3 == *piVar19) {
              iVar3 = 0;
              goto LAB_00ae1010;
            }
            uVar14 = uVar14 + 1;
            piVar19 = piVar19 + 4;
          } while (uVar14 < *(ulong *)(p_Var22 + 0x170));
        }
        iVar3 = 0;
LAB_00ae0c78:
        if (uVar2 == 0) goto LAB_00ae1148;
        bVar1 = false;
        uVar7 = uVar23;
      }
                    /* try { // try from 00ae1020 to 00be102b has its CatchHandler @ 00ae1610 */
      uVar23 = uVar7 | 0x20;
      iVar6 = OPENSSL_sk_num(param_4);
      if (0 < iVar6) {
        if (!bVar1) {
          if (iVar3 == 0) {
            iVar3 = 0;
            do {
              OPENSSL_sk_value(param_4,iVar3);
              uVar14 = X509_get_signature_nid();
              if (*(ulong *)(p_Var22 + 0x170) == 0) goto LAB_00ae110c;
              uVar17 = 0;
              piVar19 = (int *)(*(long *)(p_Var22 + 0x168) + 8);
              while ((int)uVar14 != *piVar19) {
                uVar17 = uVar17 + 1;
                piVar19 = piVar19 + 4;
                if (*(ulong *)(p_Var22 + 0x170) <= uVar17) goto LAB_00ae110c;
              }
              iVar3 = iVar3 + 1;
              iVar6 = OPENSSL_sk_num(param_4);
            } while (iVar3 < iVar6);
          }
          else {
            iVar6 = 0;
            do {
              OPENSSL_sk_value(param_4,iVar6);
              uVar14 = X509_get_signature_nid();
              if ((int)uVar14 != iVar3) goto LAB_00ae110c;
              iVar6 = iVar6 + 1;
              iVar5 = OPENSSL_sk_num(param_4);
                    /* try { // try from 00ae1098 to 00be10a3 has its CatchHandler @ 00ae160c */
            } while (iVar6 < iVar5);
          }
          bVar1 = true;
          goto LAB_00ae0ca0;
        }
        iVar3 = 0;
        do {
          OPENSSL_sk_value(param_4,iVar3);
          iVar3 = iVar3 + 1;
          iVar6 = OPENSSL_sk_num(param_4);
        } while (iVar3 < iVar6);
      }
      bVar1 = true;
      goto LAB_00ae0ca0;
    }
  }
  bVar1 = uVar7 != 0;
  if (uVar2 != 0) {
    uVar23 = uVar23 | 0x30;
  }
  goto LAB_00ae0ca0;
LAB_00ae110c:
  if (uVar2 != 0) {
    uVar23 = uVar7;
  }
  iVar3 = (uint)(uVar2 == 0) << 1;
LAB_00ae1124:
  bVar1 = true;
  if (iVar3 != 0) {
    if (iVar3 == 2) goto LAB_00ae1148;
    if (iVar3 != 7) {
      return uVar14;
    }
  }
LAB_00ae0ca0:
  uVar12 = 1;
  if (uVar2 == 0) {
    uVar12 = 2;
  }
  iVar3 = FUN_00ae11dc(param_1,param_2,uVar12);
  if (iVar3 == 0) {
    if (uVar2 == 0) goto LAB_00ae1148;
    iVar3 = param_1->server;
    uVar7 = uVar23;
  }
  else {
    uVar7 = uVar23 | 0x40;
    iVar3 = param_1->server;
  }
  if (iVar3 == 0) {
    uVar4 = uVar7 | 0x80;
LAB_00ae0d38:
    if (!(bool)(bVar1 & param_1->server == 0)) goto LAB_00ae0d98;
    iVar3 = EVP_PKEY_id(param_3);
    if (iVar3 == 6) {
      cVar11 = '\x01';
      lVar15 = *(long *)(p_Var22 + 0x138);
      if (lVar15 == 0) goto LAB_00ae0d7c;
LAB_00ae0e38:
      iVar3 = *(int *)(p_Var22 + 0x140);
joined_r0x00ae0e40:
      uVar23 = uVar4;
      if (0 < iVar3) {
        lVar18 = 0;
        do {
          if (cVar11 == *(char *)(lVar15 + lVar18)) {
            uVar23 = uVar4 | 0x400;
            break;
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 < iVar3);
      }
      if ((uVar23 & 0x400) == 0 && uVar2 == 0) goto LAB_00ae1148;
    }
    else {
      if (iVar3 == 0x198) {
        cVar11 = '@';
        lVar15 = *(long *)(p_Var22 + 0x138);
joined_r0x00ae0e70:
        if (lVar15 != 0) goto LAB_00ae0e38;
LAB_00ae0d7c:
        iVar3 = *(int *)(*(long *)&param_1->read_ahead + 0x23c);
        lVar15 = *(long *)&param_1->read_ahead + 0x240;
        goto joined_r0x00ae0e40;
      }
      if (iVar3 == 0x74) {
        cVar11 = '\x02';
        lVar15 = *(long *)(p_Var22 + 0x138);
        goto joined_r0x00ae0e70;
      }
      uVar23 = uVar4 | 0x400;
    }
    uVar8 = *(undefined8 *)(*(long *)&param_1->read_ahead + 0x250);
    iVar3 = OPENSSL_sk_num(uVar8);
    uVar4 = uVar23 | 0x200;
    uVar7 = uVar4;
    if (iVar3 != 0) {
      uVar7 = uVar23;
    }
    uVar24 = uVar7;
    if ((uVar7 >> 9 & 1) == 0) {
      pXVar9 = X509_get_issuer_name(param_2);
      iVar3 = OPENSSL_sk_num(uVar8);
      if (0 < iVar3) {
                    /* try { // try from 00ae0ed0 to 00be0f1b has its CatchHandler @ 00ae0ed0
                       catch() { ... } // from try @ 00ae0ed0 with catch @ 00ae0ed0
                       catch() { ... } // from try @ 00ae15a4 with catch @ 00ae0ed0 */
        iVar3 = 0;
        do {
          pXVar10 = (X509_NAME *)OPENSSL_sk_value(uVar8,iVar3);
          iVar6 = X509_NAME_cmp(pXVar9,pXVar10);
          uVar24 = uVar4;
          if (iVar6 == 0) break;
          iVar3 = iVar3 + 1;
          iVar6 = OPENSSL_sk_num(uVar8);
          uVar24 = uVar7;
        } while (iVar3 < iVar6);
      }
    }
    uVar23 = uVar24;
    if (((uVar24 >> 9 & 1) == 0) && (iVar3 = OPENSSL_sk_num(param_4), 0 < iVar3)) {
      iVar3 = 0;
      do {
        a = (X509 *)OPENSSL_sk_value(param_4,iVar3);
        pXVar9 = X509_get_issuer_name(a);
        iVar6 = OPENSSL_sk_num(uVar8);
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            pXVar10 = (X509_NAME *)OPENSSL_sk_value(uVar8,iVar6);
            iVar5 = X509_NAME_cmp(pXVar9,pXVar10);
            uVar23 = uVar4;
            if (iVar5 == 0) goto LAB_00ae0fbc;
            iVar6 = iVar6 + 1;
            iVar5 = OPENSSL_sk_num(uVar8);
          } while (iVar6 < iVar5);
        }
        iVar3 = iVar3 + 1;
        iVar6 = OPENSSL_sk_num(param_4);
                    /* try { // try from 00ae0fa8 to 00be0fb3 has its CatchHandler @ 00ae1614 */
        uVar23 = uVar24;
      } while (iVar3 < iVar6);
    }
LAB_00ae0fbc:
    uVar7 = (uint)(uVar2 == 0);
    if (((uVar23 >> 9 & 1) == 0) && (uVar7 != 0)) goto LAB_00ae1148;
  }
  else {
    uVar4 = uVar7;
    if (bVar1) {
      uVar23 = uVar7 | 0x80;
      iVar3 = OPENSSL_sk_num(param_4);
      uVar4 = uVar23;
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          uVar8 = OPENSSL_sk_value(param_4,iVar3);
          iVar6 = FUN_00ae11dc(param_1,uVar8,0);
          if (iVar6 == 0) {
            uVar4 = uVar7;
            if (uVar2 == 0) goto LAB_00ae1148;
            break;
          }
          iVar3 = iVar3 + 1;
          iVar6 = OPENSSL_sk_num(param_4);
        } while (iVar3 < iVar6);
      }
      goto LAB_00ae0d38;
    }
LAB_00ae0d98:
    uVar7 = (uint)(uVar2 == 0);
    uVar23 = uVar4 | 0x600;
  }
  uVar23 = uVar23 | (uVar2 & (uVar23 ^ 0xffffffff)) == 0 | uVar7;
LAB_00ae1148:
  uVar7 = SSL_version(param_1);
  if ((((uVar7 & 0xffffff00) == 0x300) && (iVar3 = SSL_version(param_1), 0x302 < iVar3)) &&
     ((*local_68 & 0x100) == 0)) {
                    /* try { // try from 00ae117c to 00be1187 has its CatchHandler @ 00ae1604 */
    if (*(long *)(*(long *)&param_1->read_ahead + (long)(int)uVar21 * 8 + 0x2d8) != 0) {
      uVar23 = uVar23 | 2;
    }
  }
  else {
    uVar23 = uVar23 | 0x102;
  }
  uVar21 = (ulong)uVar23;
  if (uVar2 == 0) {
    if ((uVar23 & 1) == 0) {
      uVar21 = 0;
      *local_68 = *local_68 & 0x100;
    }
    else {
      *local_68 = uVar23;
    }
  }
  return uVar21;
}

