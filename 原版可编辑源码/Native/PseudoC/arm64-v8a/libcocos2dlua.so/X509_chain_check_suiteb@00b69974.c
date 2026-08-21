
/* WARNING: Type propagation algorithm not settling */

int X509_chain_check_suiteb(int *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  EVP_PKEY *pkey;
  long lVar4;
  EC_KEY *pEVar5;
  EC_GROUP *pEVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  if ((param_4 & 0x30000) == 0) {
    return 0;
  }
  uVar8 = (uint)param_4;
  if (param_2 == 0) {
    param_2 = OPENSSL_sk_value(param_3,0);
    iVar2 = 1;
    if (param_2 != 0) goto LAB_00b699c8;
    pkey = (EVP_PKEY *)0x0;
  }
  else {
    iVar2 = 0;
LAB_00b699c8:
    pkey = (EVP_PKEY *)X509_PUBKEY_get0(*(undefined8 *)(param_2 + 0x50));
  }
  if (param_3 == 0) {
    if ((pkey == (EVP_PKEY *)0x0) || (iVar2 = EVP_PKEY_id(pkey), iVar2 != 0x198)) {
      return 0x39;
    }
    pEVar5 = (EC_KEY *)EVP_PKEY_get0_EC_KEY(pkey);
    pEVar6 = EC_KEY_get0_group(pEVar5);
    if (pEVar6 == (EC_GROUP *)0x0) {
      return 0x39;
    }
    iVar2 = EC_GROUP_get_curve_name(pEVar6);
    if (iVar2 == 0x19f) {
      uVar8 = uVar8 >> 0x10;
    }
    else {
      if (iVar2 != 0x2cb) {
        return 0x3a;
      }
      uVar8 = uVar8 >> 0x11;
    }
    if ((uVar8 & 1) != 0) {
      return 0;
    }
    return 0x3c;
  }
  lVar4 = X509_get_version(param_2);
  uVar9 = param_4;
  if (lVar4 == 2) {
    if ((pkey != (EVP_PKEY *)0x0) && (iVar1 = EVP_PKEY_id(pkey), iVar1 == 0x198)) {
      pEVar5 = (EC_KEY *)EVP_PKEY_get0_EC_KEY(pkey);
      pEVar6 = EC_KEY_get0_group(pEVar5);
      if (pEVar6 != (EC_GROUP *)0x0) {
        iVar1 = EC_GROUP_get_curve_name(pEVar6);
        if (iVar1 == 0x19f) {
          if ((uVar8 >> 0x10 & 1) == 0) {
LAB_00b69ae8:
            iVar1 = 0x3c;
            goto LAB_00b69a40;
          }
        }
        else {
          if (iVar1 != 0x2cb) {
            iVar1 = 0x3a;
            goto LAB_00b69a40;
          }
          if ((uVar8 >> 0x11 & 1) == 0) goto LAB_00b69ae8;
          uVar9 = param_4 & 0xfffffffffffeffff;
        }
        iVar1 = OPENSSL_sk_num(param_3);
        iVar3 = X509_get_signature_nid(param_2);
        if (iVar2 < iVar1) {
          do {
            lVar4 = OPENSSL_sk_value(param_3,iVar2);
            lVar7 = X509_get_version();
            if (lVar7 != 2) {
              iVar1 = 0x38;
              goto LAB_00b69a44;
            }
            if (((lVar4 == 0) ||
                (pkey = (EVP_PKEY *)X509_PUBKEY_get0(*(undefined8 *)(lVar4 + 0x50)),
                pkey == (EVP_PKEY *)0x0)) || (iVar1 = EVP_PKEY_id(pkey), iVar1 != 0x198))
            goto LAB_00b69c3c;
            pEVar5 = (EC_KEY *)EVP_PKEY_get0_EC_KEY(pkey);
            pEVar6 = EC_KEY_get0_group(pEVar5);
            if (pEVar6 == (EC_GROUP *)0x0) goto LAB_00b69c3c;
            iVar1 = EC_GROUP_get_curve_name(pEVar6);
            if (iVar1 == 0x19f) {
              if ((iVar3 != 0x31a) && (iVar3 != -1)) goto LAB_00b69c70;
              if (((uint)uVar9 >> 0x10 & 1) == 0) goto LAB_00b69c68;
            }
            else {
              if (iVar1 != 0x2cb) goto LAB_00b69c44;
              if ((iVar3 != 0x31b) && (iVar3 != -1)) goto LAB_00b69c70;
              if (((uint)uVar9 >> 0x11 & 1) == 0) goto LAB_00b69c68;
              uVar9 = uVar9 & 0xfffffffffffeffff;
            }
            iVar2 = iVar2 + 1;
            iVar1 = OPENSSL_sk_num(param_3);
            iVar3 = X509_get_signature_nid(lVar4);
          } while (iVar2 < iVar1);
        }
        iVar1 = EVP_PKEY_id(pkey);
        if (iVar1 == 0x198) {
          pEVar5 = (EC_KEY *)EVP_PKEY_get0_EC_KEY(pkey);
          pEVar6 = EC_KEY_get0_group(pEVar5);
          if (pEVar6 != (EC_GROUP *)0x0) {
            iVar1 = EC_GROUP_get_curve_name(pEVar6);
            if (iVar1 == 0x19f) {
              if ((iVar3 == 0x31a) || (iVar3 == -1)) {
                uVar8 = (uint)uVar9 >> 0x10;
joined_r0x00b69c64:
                if ((uVar8 & 1) != 0) {
                  return 0;
                }
LAB_00b69c68:
                iVar1 = 0x3c;
                goto LAB_00b69a44;
              }
            }
            else {
              if (iVar1 != 0x2cb) {
LAB_00b69c44:
                iVar1 = 0x3a;
                goto LAB_00b69a44;
              }
              if ((iVar3 == 0x31b) || (iVar3 == -1)) {
                uVar8 = (uint)uVar9 >> 0x11;
                goto joined_r0x00b69c64;
              }
            }
LAB_00b69c70:
            iVar1 = 0x3b;
            goto LAB_00b69a44;
          }
        }
LAB_00b69c3c:
        iVar1 = 0x39;
        goto LAB_00b69a44;
      }
    }
    iVar1 = 0x39;
  }
  else {
    iVar1 = 0x38;
  }
LAB_00b69a40:
  iVar2 = 0;
LAB_00b69a44:
  iVar3 = iVar1;
  if (iVar1 == 0x3c && uVar9 != param_4) {
    iVar3 = 0x3d;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2 - (uint)(iVar1 - 0x3bU < 2 && iVar2 != 0);
  }
  return iVar3;
}

