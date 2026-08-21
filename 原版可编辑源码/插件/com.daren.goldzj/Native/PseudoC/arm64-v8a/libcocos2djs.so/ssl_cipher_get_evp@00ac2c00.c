
/* WARNING: Removing unreachable block (ram,0x00ac2e00) */

undefined8
ssl_cipher_get_evp(uint *param_1,long *param_2,long *param_3,int *param_4,undefined4 *param_5,
                  undefined8 *param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  EVP_CIPHER *pEVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint local_78 [6];
  
                    /* catch() { ... } // from try @ 00ac2c90 with catch @ 00ac2c10 */
  lVar8 = *(long *)(param_1 + 0x36);
                    /* try { // try from 00ac2c30 to 00bc2c53 has its CatchHandler @ 00ac2ce0 */
  if (lVar8 == 0) {
    return 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    CRYPTO_THREAD_run_once(&DAT_01d38ed0,&LAB_00ac55bc);
    *param_6 = 0;
    local_78[0] = param_1[0x34];
    if (DAT_01d38ed8 != 0) {
      iVar2 = OPENSSL_sk_find(DAT_01d38ed8,local_78);
      if (iVar2 < 0) {
        uVar3 = 0;
      }
      else {
                    /* try { // try from 00ac2c88 to 00bc2c8f has its CatchHandler @ 00ac2ca0 */
        uVar3 = OPENSSL_sk_value(DAT_01d38ed8,iVar2);
                    /* try { // try from 00ac2c90 to 00bc2cf3 has its CatchHandler @ 00ac2c10 */
      }
      *param_6 = uVar3;
    }
                    /* catch() { ... } // from try @ 00ac2c88 with catch @ 00ac2ca0 */
    if ((param_2 == (long *)0x0) && (param_3 == (long *)0x0)) {
      return 1;
    }
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (param_3 == (long *)0x0) {
    return 0;
  }
  iVar2 = *(int *)(lVar8 + 0x1c);
  if (0x3ff < iVar2) {
    if (iVar2 < 0x8000) {
      if (iVar2 < 0x1000) {
        if (iVar2 == 0x400) {
          lVar6 = 10;
                    /* catch() { ... } // from try @ 00ac2d4c with catch @ 00ac2e8c */
        }
        else {
          if (iVar2 != 0x800) goto switchD_00ac2ce4_caseD_3;
          lVar6 = 0xb;
        }
      }
      else if (iVar2 == 0x1000) {
        lVar6 = 0xc;
      }
      else if (iVar2 == 0x2000) {
        lVar6 = 0xd;
      }
      else {
        if (iVar2 != 0x4000) goto switchD_00ac2ce4_caseD_3;
        lVar6 = 0xe;
      }
    }
    else {
                    /* try { // try from 00ac2d30 to 00bc2d37 has its CatchHandler @ 00ac2eb8 */
      if (iVar2 < 0x20000) {
        if (iVar2 == 0x8000) {
          lVar6 = 0xf;
          goto switchD_00ac2ce4_caseD_1;
        }
        if (iVar2 != 0x10000) goto switchD_00ac2ce4_caseD_3;
        lVar6 = 0x10;
      }
      else if (iVar2 == 0x20000) {
        lVar6 = 0x11;
      }
      else if (iVar2 == 0x40000) {
        lVar6 = 0x12;
      }
      else {
        if (iVar2 != 0x80000) goto switchD_00ac2ce4_caseD_3;
                    /* try { // try from 00ac2d4c to 00bc2d53 has its CatchHandler @ 00ac2e8c */
        lVar6 = 0x13;
                    /* try { // try from 00ac2d54 to 00bc2ecf has its CatchHandler @ 00ac2cf4 */
      }
    }
    goto LAB_00ac2e10;
  }
  if (0x7f < iVar2) {
    if (iVar2 == 0x80) {
      lVar6 = 7;
    }
    else if (iVar2 == 0x100) {
      lVar6 = 8;
    }
    else {
      if (iVar2 != 0x200) goto switchD_00ac2ce4_caseD_3;
      lVar6 = 9;
    }
    goto LAB_00ac2e10;
  }
                    /* catch() { ... } // from try @ 00ac2c30 with catch @ 00ac2ce0 */
  lVar6 = 0;
  switch(iVar2) {
  case 1:
switchD_00ac2ce4_caseD_1:
    if (lVar6 == 5) goto LAB_00ac2ea4;
    break;
  case 2:
    lVar6 = 1;
                    /* try { // try from 00ac2cf4 to 00bc2d2f has its CatchHandler @ 00ac2cf4
                       catch() { ... } // from try @ 00ac2cf4 with catch @ 00ac2cf4
                       catch() { ... } // from try @ 00ac2d54 with catch @ 00ac2cf4 */
    break;
  default:
switchD_00ac2ce4_caseD_3:
    *param_2 = 0;
    goto LAB_00ac2eac;
  case 4:
    lVar6 = 2;
    break;
  case 8:
    lVar6 = 3;
    break;
  case 0x10:
    lVar6 = 4;
    break;
  case 0x20:
LAB_00ac2ea4:
    pEVar5 = EVP_enc_null();
    *param_2 = (long)pEVar5;
    goto LAB_00ac2eac;
  case 0x40:
    lVar6 = 6;
  }
LAB_00ac2e10:
  *param_2 = (&DAT_01d38f70)[lVar6];
LAB_00ac2eac:
  iVar2 = *(int *)(lVar8 + 0x20);
  if (0x7f < iVar2) {
    if (iVar2 == 0x80) {
      lVar6 = 6;
    }
    else if (iVar2 == 0x100) {
      lVar6 = 7;
    }
    else {
      if (iVar2 != 0x200) goto switchD_00ac2ed8_caseD_3;
      lVar6 = 8;
    }
    goto switchD_00ac2ed8_caseD_1;
  }
                    /* catch() { ... } // from try @ 00ac2d30 with catch @ 00ac2eb8 */
  lVar6 = 0;
  switch(iVar2) {
  case 0:
    lVar6 = 9;
    break;
  case 1:
    break;
  case 2:
    lVar6 = 1;
    break;
  default:
switchD_00ac2ed8_caseD_3:
    *param_3 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    lVar7 = 0;
    piVar1 = (int *)0x0;
    if (*(int *)(lVar8 + 0x20) != 0x40) {
      piVar1 = param_4;
    }
    pEVar5 = (EVP_CIPHER *)*param_2;
    param_4 = piVar1;
    if (pEVar5 == (EVP_CIPHER *)0x0) {
      return 0;
    }
    goto LAB_00ac2f78;
  case 4:
    lVar6 = 2;
    break;
  case 8:
    lVar6 = 3;
    break;
  case 0x10:
    lVar6 = 4;
    break;
  case 0x20:
    lVar6 = 5;
  }
switchD_00ac2ed8_caseD_1:
  lVar7 = (&DAT_01d38f10)[lVar6];
  *param_3 = lVar7;
  if (param_4 != (int *)0x0) {
    *param_4 = (&DAT_01d1e1b4)[lVar6];
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = (&DAT_01d38ee0)[lVar6];
  }
  pEVar5 = (EVP_CIPHER *)*param_2;
  if (pEVar5 == (EVP_CIPHER *)0x0) {
    return 0;
  }
LAB_00ac2f78:
  if (((lVar7 == 0) && (uVar4 = EVP_CIPHER_flags(pEVar5), ((uint)uVar4 >> 0x15 & 1) == 0)) ||
     ((param_4 != (int *)0x0 && (*param_4 == 0)))) {
    return 0;
  }
  if (param_7 != 0) {
    return 1;
  }
  if ((int)*param_1 < 0x301) {
    return 1;
  }
  if ((*param_1 & 0xffffff00) != 0x300) {
    return 1;
  }
  iVar2 = FIPS_mode();
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = *(int *)(lVar8 + 0x1c);
  if (iVar2 == 4) {
    if (*(int *)(lVar8 + 0x20) != 1) {
      return 1;
    }
    pEVar5 = EVP_get_cipherbyname("RC4-HMAC-MD5");
    if (pEVar5 != (EVP_CIPHER *)0x0) goto LAB_00ac30ac;
    iVar2 = *(int *)(lVar8 + 0x1c);
  }
  if (iVar2 == 0x40) {
    iVar2 = *(int *)(lVar8 + 0x20);
    if (iVar2 == 2) {
      pEVar5 = EVP_get_cipherbyname("AES-128-CBC-HMAC-SHA1");
      if (pEVar5 != (EVP_CIPHER *)0x0) goto LAB_00ac30ac;
      iVar2 = *(int *)(lVar8 + 0x1c);
      goto LAB_00ac3038;
    }
LAB_00ac306c:
    if (iVar2 != 0x10) {
      return 1;
    }
    pEVar5 = EVP_get_cipherbyname("AES-128-CBC-HMAC-SHA256");
    if (pEVar5 != (EVP_CIPHER *)0x0) goto LAB_00ac30ac;
    iVar2 = *(int *)(lVar8 + 0x1c);
LAB_00ac3088:
    if (iVar2 != 0x80) {
      return 1;
    }
    iVar2 = *(int *)(lVar8 + 0x20);
  }
  else {
LAB_00ac3038:
    if (iVar2 != 0x80) {
LAB_00ac3060:
      if (iVar2 == 0x40) {
        iVar2 = *(int *)(lVar8 + 0x20);
        goto LAB_00ac306c;
      }
      goto LAB_00ac3088;
    }
    iVar2 = *(int *)(lVar8 + 0x20);
    if (iVar2 == 2) {
      pEVar5 = EVP_get_cipherbyname("AES-256-CBC-HMAC-SHA1");
      if (pEVar5 != (EVP_CIPHER *)0x0) goto LAB_00ac30ac;
      iVar2 = *(int *)(lVar8 + 0x1c);
      goto LAB_00ac3060;
    }
  }
  if (iVar2 != 0x10) {
    return 1;
  }
  pEVar5 = EVP_get_cipherbyname("AES-256-CBC-HMAC-SHA256");
  if (pEVar5 == (EVP_CIPHER *)0x0) {
    return 1;
  }
LAB_00ac30ac:
  *param_2 = (long)pEVar5;
  *param_3 = 0;
  return 1;
}

