
undefined8 tls12_check_peer_sigalg(undefined8 *param_1,long param_2,byte *param_3,EVP_PKEY *param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  point_conversion_form_t pVar4;
  int iVar5;
  EC_KEY *key;
  EC_GROUP *group;
  EC_POINT *pEVar6;
  EVP_MD *md;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 local_38 [4];
  char local_34;
  char local_33;
  
                    /* try { // try from 00aeac78 to 00bead93 has its CatchHandler @ 00aeae20 */
  iVar3 = EVP_PKEY_id(param_4);
  if (iVar3 < 0x32b) {
    if (iVar3 == 6) {
      lVar8 = 0;
    }
    else if (iVar3 == 0x74) {
      lVar8 = 1;
    }
    else {
      if (iVar3 != 0x198) {
        return 0xffffffff;
      }
      lVar8 = 2;
    }
  }
  else if (iVar3 == 0x32b) {
    lVar8 = 3;
  }
  else if (iVar3 == 0x3d3) {
    lVar8 = 4;
  }
  else {
    if (iVar3 != 0x3d4) {
      return 0xffffffff;
    }
    lVar8 = 5;
  }
  if ((&DAT_013d3820)[lVar8 * 2] != (uint)param_3[1]) {
    iVar3 = 0x172;
    iVar5 = 0x329;
    goto LAB_00aeadc0;
  }
  iVar3 = EVP_PKEY_id(param_4);
  if (iVar3 == 0x198) {
    key = (EC_KEY *)EVP_PKEY_get0_EC_KEY(param_4);
    if (key == (EC_KEY *)0x0) {
      return 0;
    }
    group = EC_KEY_get0_group(key);
    if (group == (EC_GROUP *)0x0) {
      return 0;
    }
    iVar3 = EC_GROUP_get_curve_name(group);
    uVar9 = 0;
    lVar8 = -0x100000000;
    piVar10 = &DAT_013d35f0;
    do {
      if (0x1c < uVar9) {
        return 0;
      }
      iVar5 = *piVar10;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x100000000;
      piVar10 = piVar10 + 3;
    } while (iVar5 != iVar3);
    if ((int)uVar9 == 0) {
      return 0;
    }
    local_34 = '\0';
    local_33 = (char)uVar9;
    pEVar6 = EC_KEY_get0_public_key(key);
    if (pEVar6 == (EC_POINT *)0x0) {
      return 0;
    }
                    /* try { // try from 00aead94 to 00beae6b has its CatchHandler @ 00aeab60 */
    pVar4 = EC_KEY_get_conv_form(key);
    if (pVar4 == POINT_CONVERSION_UNCOMPRESSED) {
      local_38[0] = 0;
    }
    else {
      local_38[0] = 1;
      if (0xd < (lVar8 >> 0x20) - 0xeU) {
        local_38[0] = 2;
      }
    }
                    /* catch() { ... } // from try @ 00aeabf4 with catch @ 00aeae18 */
                    /* catch() { ... } // from try @ 00aeac78 with catch @ 00aeae20 */
    if ((*(int *)(param_2 + 0x38) == 0) &&
       (iVar3 = FUN_00aeaa54(param_2,&local_34,local_38), iVar3 == 0)) {
      iVar3 = 0x17a;
      iVar5 = 0x333;
      goto LAB_00aeadc0;
    }
    lVar8 = *(long *)(param_2 + 0x148);
    uVar7 = *(uint *)(lVar8 + 0x1c);
    if ((uVar7 & 0x30000) != 0) {
      if (local_34 != '\0') {
        return 0;
      }
      if (local_33 == '\x18') {
        if (*param_3 != 5) {
          iVar3 = 0x17c;
          iVar5 = 0x343;
          goto LAB_00aeadc0;
        }
      }
      else {
        if (local_33 != '\x17') {
          return 0;
        }
        if (*param_3 != 4) {
          iVar3 = 0x17c;
          iVar5 = 0x33d;
          goto LAB_00aeadc0;
        }
      }
    }
  }
  else {
    lVar8 = *(long *)(param_2 + 0x148);
    uVar7 = *(uint *)(lVar8 + 0x1c);
    if ((uVar7 & 0x30000) != 0) {
      return 0;
    }
  }
  uVar1 = uVar7 & 0x30000;
  puVar11 = &DAT_013d3786;
  if (uVar1 == 0x30000) {
    uVar9 = 4;
    goto LAB_00aeaee0;
  }
  if (uVar1 == 0x20000) {
    puVar11 = &DAT_013d3788;
LAB_00aeaedc:
    uVar9 = 2;
LAB_00aeaee0:
    uVar12 = 0;
    do {
      if ((*param_3 == puVar11[uVar12]) && (param_3[1] == puVar11[uVar12 + 1])) break;
      uVar12 = uVar12 + 2;
    } while (uVar12 < uVar9);
  }
  else {
    if (uVar1 == 0x10000) {
      puVar11 = &DAT_013d3786;
      goto LAB_00aeaedc;
    }
    if ((*(int *)(param_2 + 0x38) == 0) ||
       (puVar11 = *(undefined1 **)(lVar8 + 0x158), puVar11 == (undefined1 *)0x0)) {
      puVar11 = *(undefined1 **)(lVar8 + 0x148);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &DAT_013d378a;
        uVar9 = 0x24;
      }
      else {
        uVar9 = *(ulong *)(lVar8 + 0x150);
        if (uVar9 == 0) goto LAB_00aeb070;
      }
      goto LAB_00aeaee0;
    }
    uVar9 = *(ulong *)(lVar8 + 0x160);
    if (uVar9 != 0) goto LAB_00aeaee0;
LAB_00aeb070:
    uVar12 = 0;
  }
  bVar2 = *param_3;
  if (uVar12 == uVar9) {
    if ((bVar2 != 2) || ((uVar7 & 0x30001) != 0)) {
      iVar3 = 0x172;
      iVar5 = 0x357;
      goto LAB_00aeadc0;
    }
    lVar8 = 1;
    goto switchD_00aeafcc_caseD_2;
  }
  if (0xec < bVar2) {
    if (bVar2 == 0xed) {
      lVar8 = 6;
    }
    else if (bVar2 == 0xee) {
      lVar8 = 7;
    }
    else {
      if (bVar2 != 0xef) goto switchD_00aeafcc_default;
      lVar8 = 8;
    }
    goto switchD_00aeafcc_caseD_2;
  }
  lVar8 = 1;
  switch(bVar2) {
  case 1:
    iVar3 = FIPS_mode();
    if (iVar3 == 0) {
      lVar8 = 0;
      break;
    }
    goto switchD_00aeafcc_default;
  case 2:
    break;
  case 3:
    lVar8 = 2;
    break;
  case 4:
    lVar8 = 3;
    break;
  case 5:
    lVar8 = 4;
    break;
  case 6:
    lVar8 = 5;
    break;
  default:
    goto switchD_00aeafcc_default;
  }
switchD_00aeafcc_caseD_2:
  if (lVar8 == 0xfffffffffec2c78) {
switchD_00aeafcc_default:
    *param_1 = 0;
  }
  else {
    md = (EVP_MD *)ssl_md((&DAT_013d3888)[lVar8 * 4]);
    *param_1 = md;
    if (md != (EVP_MD *)0x0) {
      iVar3 = EVP_MD_size(md);
      iVar5 = EVP_MD_type((EVP_MD *)*param_1);
      iVar3 = ssl_security(param_2,0x5000d,iVar3 << 2,iVar5,param_3);
      if (iVar3 != 0) {
        *(undefined8 *)(*(long *)(param_2 + 0x90) + 0x2d0) = *param_1;
        return 1;
      }
      iVar3 = 0x172;
      iVar5 = 0x362;
      goto LAB_00aeadc0;
    }
  }
  iVar3 = 0x170;
  iVar5 = 0x35c;
LAB_00aeadc0:
  ERR_put_error(0x14,0x14d,iVar3,"ssl/t1_lib.c",iVar5);
  return 0;
}

