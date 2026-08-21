
long ssl3_ctrl(long param_1,undefined4 param_2,ulong param_3,dh_st *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  EVP_PKEY *pkey;
  EC_GROUP *group;
  void *__dest;
  EVP_MD *md;
  size_t sVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  int local_34;
  
  iVar6 = 0;
  iVar14 = (int)param_3;
  switch(param_2) {
  case 3:
    if (param_4 == (dh_st *)0x0) {
      iVar6 = 0x43;
      iVar14 = 0xb5d;
    }
    else {
      pkey = EVP_PKEY_new();
      iVar6 = EVP_PKEY_set1_DH(pkey,param_4);
      if (iVar6 < 1) {
        EVP_PKEY_free(pkey);
      }
      else if (pkey != (EVP_PKEY *)0x0) {
        uVar4 = EVP_PKEY_security_bits(pkey);
        iVar6 = ssl_security(param_1,0x40007,uVar4,0,pkey);
        if (iVar6 == 0) {
          ERR_put_error(0x14,0xd5,0x18a,"ssl/s3_lib.c",0xb67);
          EVP_PKEY_free(pkey);
          return 0;
        }
        EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_1 + 0x148) + 8));
        *(EVP_PKEY **)(*(long *)(param_1 + 0x148) + 8) = pkey;
        iVar6 = 1;
        break;
      }
      iVar6 = 0x41;
      iVar14 = 0xb62;
    }
    goto LAB_00ace934;
  case 4:
    if (param_4 == (dh_st *)0x0) {
      iVar6 = 0x43;
      iVar14 = 0xb80;
    }
    else {
      group = EC_KEY_get0_group((EC_KEY *)param_4);
      if (group != (EC_GROUP *)0x0) {
        local_34 = EC_GROUP_get_curve_name(group);
        if (local_34 == 0) {
          return 0;
        }
        iVar6 = tls1_set_curves(param_1 + 0x2a0,param_1 + 0x298,&local_34,1);
        goto LAB_00ace8f0;
      }
      iVar6 = 0x7c;
      iVar14 = 0xb85;
    }
    goto LAB_00ace934;
  case 6:
    iVar6 = 0x42;
    iVar14 = 0xb72;
    goto LAB_00ace934;
  case 10:
    iVar6 = *(int *)(*(long *)(param_1 + 0x90) + 0x104);
    break;
  case 0xb:
    iVar6 = *(int *)(*(long *)(param_1 + 0x90) + 0x104);
    *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x104) = 0;
    break;
  case 0xc:
    iVar6 = *(int *)(*(long *)(param_1 + 0x90) + 0x100);
    break;
  case 0xd:
    iVar6 = **(int **)(param_1 + 0x90);
    break;
  case 0x37:
    if (param_3 == 0) {
      CRYPTO_free(*(void **)(param_1 + 0x228));
      *(undefined8 *)(param_1 + 0x228) = 0;
      if (param_4 != (dh_st *)0x0) {
        sVar7 = strlen((char *)param_4);
        if (0xfe < sVar7 - 1) {
          iVar6 = 0x13f;
          iVar14 = 0xb9d;
          goto LAB_00ace934;
        }
        pcVar8 = CRYPTO_strdup((char *)param_4,"ssl/s3_lib.c",0xba0);
        *(char **)(param_1 + 0x228) = pcVar8;
        if (pcVar8 == (char *)0x0) {
          iVar6 = 0x44;
          iVar14 = 0xba1;
          goto LAB_00ace934;
        }
      }
      iVar6 = 1;
      break;
    }
    iVar6 = 0x140;
    iVar14 = 0xba5;
LAB_00ace934:
    ERR_put_error(0x14,0xd5,iVar6,"ssl/s3_lib.c",iVar14);
    return 0;
  case 0x39:
    *(dh_st **)(param_1 + 0x220) = param_4;
    iVar6 = 1;
    break;
  case 0x41:
    *(int *)(param_1 + 0x234) = iVar14;
    iVar6 = 1;
    break;
  case 0x42:
    uVar12 = *(undefined8 *)(param_1 + 0x270);
    goto LAB_00ace4f8;
  case 0x43:
    *(dh_st **)(param_1 + 0x270) = param_4;
    iVar6 = 1;
    break;
  case 0x44:
    uVar12 = *(undefined8 *)(param_1 + 0x268);
LAB_00ace4f8:
    param_4->pad = (int)uVar12;
    param_4->version = (int)((ulong)uVar12 >> 0x20);
    iVar6 = 1;
    break;
  case 0x45:
    *(dh_st **)(param_1 + 0x268) = param_4;
    iVar6 = 1;
    break;
  case 0x46:
    uVar12 = *(undefined8 *)(param_1 + 0x278);
    param_4->pad = (int)uVar12;
    param_4->version = (int)((ulong)uVar12 >> 0x20);
    return (long)*(int *)(param_1 + 0x280);
  case 0x47:
    CRYPTO_free(*(void **)(param_1 + 0x278));
    *(dh_st **)(param_1 + 0x278) = param_4;
    *(int *)(param_1 + 0x280) = iVar14;
    iVar6 = 1;
    break;
  case 0x58:
    if (param_3 == 0) {
      iVar6 = ssl_cert_set0_chain(param_1,0,param_4);
    }
    else {
      iVar6 = ssl_cert_set1_chain(param_1,0,param_4);
    }
    goto LAB_00ace8f0;
  case 0x59:
    if (param_3 == 0) {
      iVar6 = ssl_cert_add0_chain_cert(param_1,0,param_4);
    }
    else {
      iVar6 = ssl_cert_add1_chain_cert(param_1,0,param_4);
    }
    goto LAB_00ace8f0;
  case 0x5a:
    lVar10 = *(long *)(param_1 + 0x178);
    if (lVar10 == 0) {
      return 0;
    }
    uVar15 = *(ulong *)(lVar10 + 0x120) >> 1;
    if ((param_4 != (dh_st *)0x0) && (uVar15 != 0)) {
      puVar16 = *(undefined1 **)(lVar10 + 0x128);
      uVar17 = uVar15;
      do {
        uVar2 = *puVar16;
        uVar3 = puVar16[1];
        uVar5 = tls1_ec_curve_id2nid((uint)CONCAT11(uVar2,uVar3),0);
        uVar1 = CONCAT11(uVar2,uVar3) | 0x1000000;
        if (uVar5 != 0) {
          uVar1 = uVar5;
        }
        uVar17 = uVar17 - 1;
        param_4->pad = uVar1;
        puVar16 = puVar16 + 2;
        param_4 = (dh_st *)&param_4->version;
      } while (uVar17 != 0);
    }
    return (long)(int)uVar15;
  case 0x5b:
    iVar6 = tls1_set_curves(param_1 + 0x2a0,param_1 + 0x298,param_4,param_3);
    goto LAB_00ace8f0;
  case 0x5c:
    iVar6 = tls1_set_curves_list(param_1 + 0x2a0,param_1 + 0x298,param_4);
    goto LAB_00ace8f0;
  case 0x5d:
    iVar6 = tls1_shared_curve(param_1,param_3 & 0xffffffff);
    goto LAB_00ace8f0;
  case 0x61:
    uVar12 = *(undefined8 *)(param_1 + 0x148);
    uVar9 = 0;
    goto LAB_00ace644;
  case 0x62:
    iVar6 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x148),param_4,0);
    goto LAB_00ace8f0;
  case 0x65:
    uVar12 = *(undefined8 *)(param_1 + 0x148);
    uVar9 = 1;
LAB_00ace644:
    iVar6 = tls1_set_sigalgs(uVar12,param_4,param_3,uVar9);
    goto LAB_00ace8f0;
  case 0x66:
    iVar6 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x148),param_4,1);
    goto LAB_00ace8f0;
  case 0x67:
    if (*(int *)(param_1 + 0x38) != 0) {
      return 0;
    }
    lVar10 = *(long *)(param_1 + 0x90);
    if (*(int *)(lVar10 + 0x238) == 0) {
      return 0;
    }
    lVar11 = *(long *)(param_1 + 0x148);
    lVar13 = *(long *)(lVar11 + 0x138);
    if (lVar13 == 0) {
      if (param_4 != (dh_st *)0x0) {
        *(long *)param_4 = lVar10 + 0x240;
        lVar10 = *(long *)(param_1 + 0x90);
      }
      return (long)*(int *)(lVar10 + 0x23c);
    }
    if (param_4 != (dh_st *)0x0) {
      param_4->pad = (int)lVar13;
      param_4->version = (int)((ulong)lVar13 >> 0x20);
      lVar11 = *(long *)(param_1 + 0x148);
    }
    return (long)*(int *)(lVar11 + 0x140);
  case 0x68:
    if (*(int *)(param_1 + 0x38) == 0) {
      return 0;
    }
    lVar10 = *(long *)(param_1 + 0x148);
    CRYPTO_free(*(void **)(lVar10 + 0x138));
    *(undefined8 *)(lVar10 + 0x138) = 0;
    if (param_3 == 0) {
      return 1;
    }
    if (param_4 == (dh_st *)0x0) {
      return 1;
    }
    if (0xff < param_3) {
      return 0;
    }
    __dest = CRYPTO_malloc(iVar14,"ssl/s3_lib.c",0xeae);
    *(void **)(lVar10 + 0x138) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_4,param_3);
      *(ulong *)(lVar10 + 0x140) = param_3;
      return 1;
    }
    return 0;
  case 0x69:
    iVar6 = ssl_build_cert_chain(param_1,0,param_3 & 0xffffffff);
    goto LAB_00ace8f0;
  case 0x6a:
    uVar12 = *(undefined8 *)(param_1 + 0x148);
    uVar9 = 0;
    goto LAB_00ace730;
  case 0x6b:
    uVar12 = *(undefined8 *)(param_1 + 0x148);
    uVar9 = 1;
LAB_00ace730:
    iVar6 = ssl_cert_set_cert_store(uVar12,param_4,uVar9,param_3 & 0xffffffff);
    goto LAB_00ace8f0;
  case 0x6c:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 1 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x178) == 0) {
      return 0;
    }
    md = *(EVP_MD **)(*(long *)(param_1 + 0x90) + 0x2d0);
    if (md != (EVP_MD *)0x0) {
      iVar6 = EVP_MD_type(md);
      param_4->pad = iVar6;
      return 1;
    }
    return 0;
  case 0x6d:
    if (*(int *)(param_1 + 0x38) != 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x178) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 0x90) + 0x3f8) != 0) {
      EVP_PKEY_up_ref();
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x3f8);
      param_4->pad = (int)uVar12;
      param_4->version = (int)((ulong)uVar12 >> 0x20);
      return 1;
    }
    return 0;
  case 0x6f:
    lVar10 = *(long *)(param_1 + 0x178);
    if (lVar10 == 0) {
      return 0;
    }
    lVar11 = *(long *)(lVar10 + 0x118);
    if (lVar11 == 0) {
      return 0;
    }
    param_4->pad = (int)lVar11;
    param_4->version = (int)((ulong)lVar11 >> 0x20);
    return (long)*(int *)(lVar10 + 0x110);
  case 0x73:
    iVar6 = 0;
    uVar12 = *(undefined8 *)(**(long **)(param_1 + 0x148) + 0x10);
    param_4->pad = (int)uVar12;
    param_4->version = (int)((ulong)uVar12 >> 0x20);
    break;
  case 0x74:
    iVar6 = ssl_cert_select_current(*(undefined8 *)(param_1 + 0x148),param_4);
    goto LAB_00ace8f0;
  case 0x75:
    if (param_3 == 3) {
      if ((*(int *)(param_1 + 0x38) == 0) ||
         (lVar10 = *(long *)(*(long *)(param_1 + 0x90) + 0x228), lVar10 == 0)) {
        return 0;
      }
      if ((*(byte *)(lVar10 + 0x18) & 0x44) != 0) {
        return 2;
      }
      lVar10 = ssl_get_server_send_pkey(param_1);
      if (lVar10 != 0) {
        **(long **)(param_1 + 0x148) = lVar10;
        return 1;
      }
      return 0;
    }
    iVar6 = ssl_cert_set_current(0,*(undefined8 *)(param_1 + 0x148),param_3);
LAB_00ace8f0:
    return (long)iVar6;
  case 0x76:
    *(int *)(*(long *)(param_1 + 0x148) + 0x18) = iVar14;
    return 1;
  case 0x7f:
    iVar6 = *(int *)(param_1 + 0x234);
  }
  return (long)iVar6;
}

