
int FUN_00ae11dc(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  point_conversion_form_t pVar3;
  EVP_PKEY *pkey;
  EC_KEY *key;
  EC_GROUP *group;
  EC_POINT *pEVar4;
  EVP_MD *pEVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  char local_38;
  char local_37;
  undefined1 local_34 [4];
  
                    /* try { // try from 00ae11f0 to 00be11fb has its CatchHandler @ 00ae1600 */
  pkey = (EVP_PKEY *)X509_get0_pubkey(param_2);
  if (pkey == (EVP_PKEY *)0x0) {
    return 0;
  }
  iVar2 = EVP_PKEY_id(pkey);
  if (iVar2 != 0x198) {
    return 1;
  }
  key = (EC_KEY *)EVP_PKEY_get0_EC_KEY(pkey);
  if (key == (EC_KEY *)0x0) {
    return 0;
  }
  group = EC_KEY_get0_group(key);
  if (group != (EC_GROUP *)0x0) {
    iVar2 = EC_GROUP_get_curve_name(group);
    uVar7 = 0;
    lVar10 = -0x100000000;
    piVar8 = &DAT_018a5170;
    do {
      if (0x1c < uVar7) {
        return 0;
      }
      iVar6 = *piVar8;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0x100000000;
                    /* try { // try from 00ae1260 to 00be126b has its CatchHandler @ 00ae15fc */
      piVar8 = piVar8 + 3;
    } while (iVar6 != iVar2);
    if ((int)uVar7 != 0) {
      local_38 = '\0';
      local_37 = (char)uVar7;
      pEVar4 = EC_KEY_get0_public_key(key);
      if (pEVar4 != (EC_POINT *)0x0) {
        pVar3 = EC_KEY_get_conv_form(key);
        if (pVar3 == POINT_CONVERSION_UNCOMPRESSED) {
          local_34[0] = 0;
        }
        else {
          local_34[0] = 1;
          if (0xd < (lVar10 >> 0x20) - 0xeU) {
            local_34[0] = 2;
          }
        }
        pcVar1 = &local_38;
        if (*(int *)(param_1 + 0x38) == 0) {
          pcVar1 = (char *)0x0;
        }
        iVar2 = FUN_00adbba0(param_1,pcVar1,local_34);
                    /* try { // try from 00ae12d4 to 00be12df has its CatchHandler @ 00ae15f8 */
        if (iVar2 == 0) {
          return 0;
        }
        if (param_3 == 0) {
          return iVar2;
        }
        lVar10 = *(long *)(param_1 + 0x148);
        if ((*(byte *)(lVar10 + 0x1e) & 3) == 0) {
          return iVar2;
        }
        if (local_38 == '\0') {
          if (local_37 == '\x17') {
            iVar6 = 0x31a;
            uVar7 = *(ulong *)(lVar10 + 0x170);
          }
          else {
            if (local_37 != '\x18') {
              return 0;
            }
            iVar6 = 0x31b;
            uVar7 = *(ulong *)(lVar10 + 0x170);
          }
          if (uVar7 != 0) {
                    /* try { // try from 00ae1350 to 00be135b has its CatchHandler @ 00ae15f4 */
            uVar9 = 0;
            piVar8 = (int *)(*(long *)(lVar10 + 0x168) + 8);
            do {
              if (iVar6 == *piVar8) break;
              uVar9 = uVar9 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar9 < uVar7);
            if (uVar9 != uVar7) {
              if (param_3 == 2) {
                if (iVar6 == 0x31a) {
                  pEVar5 = EVP_sha256();
                }
                else {
                  pEVar5 = EVP_sha384();
                }
                *(EVP_MD **)(*(long *)(param_1 + 0x90) + 0x2f0) = pEVar5;
                return iVar2;
              }
              return iVar2;
            }
          }
        }
      }
    }
  }
  return 0;
}

