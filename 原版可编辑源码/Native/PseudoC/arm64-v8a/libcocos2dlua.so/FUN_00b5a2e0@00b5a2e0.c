
int FUN_00b5a2e0(long param_1,int param_2,int param_3,EVP_MD *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  EVP_MD *pEVar4;
  long lVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x28);
  switch(param_2) {
  case 0x1001:
    if (param_3 - 1U < 6) {
      if (*(EVP_MD **)(piVar6 + 8) == (EVP_MD *)0x0) goto LAB_00b5a6bc;
      iVar3 = EVP_MD_type(*(EVP_MD **)(piVar6 + 8));
      if (param_3 == 5) {
        iVar3 = RSA_X931_hash_id(iVar3);
        if (iVar3 != -1) goto LAB_00b5a6e8;
        goto LAB_00b5a634;
      }
      if (param_3 == 3) goto LAB_00b5a45c;
      if (iVar3 < 0x101) {
        if (((iVar3 - 0x40U < 0x36) &&
            ((1L << ((ulong)(iVar3 - 0x40U) & 0x3f) & 0x24000080000001U) != 0)) || (iVar3 - 3U < 2))
        {
LAB_00b5a6bc:
          if (param_3 == 4) {
            bVar1 = *(byte *)(param_1 + 0x21) & 3;
          }
          else {
            if (param_3 != 6) goto LAB_00b5a6e8;
            bVar1 = *(byte *)(param_1 + 0x20) & 0x18;
          }
          if (bVar1 != 0) {
            if (*(long *)(piVar6 + 8) == 0) {
              pEVar4 = EVP_sha1();
              *(EVP_MD **)(piVar6 + 8) = pEVar4;
            }
LAB_00b5a6e8:
            piVar6[6] = param_3;
            return 1;
          }
          goto LAB_00b5a700;
        }
      }
      else if ((iVar3 - 0x2a0U < 4) || (iVar3 == 0x101)) goto LAB_00b5a6bc;
LAB_00b5a744:
      iVar3 = 0x9d;
      iVar2 = 0x169;
LAB_00b5a64c:
      ERR_put_error(4,0x8c,iVar3,"crypto/rsa/rsa_pmeth.c",iVar2);
      return 0;
    }
LAB_00b5a700:
    iVar3 = 0x90;
    iVar2 = 0x18c;
    break;
  case 0x1002:
  case 0x1007:
    if (piVar6[6] != 6) {
      iVar3 = 0x92;
      iVar2 = 0x196;
      break;
    }
    if (param_2 == 0x1007) {
      iVar3 = piVar6[0xc];
      goto LAB_00b5a4d8;
    }
    if (-3 < param_3) {
      piVar6[0xc] = param_3;
      return 1;
    }
    goto switchD_00b5a364_caseD_6;
  case 0x1003:
    if (0x1ff < param_3) {
      *piVar6 = param_3;
      return 1;
    }
    iVar3 = 0x78;
    iVar2 = 0x1a4;
    break;
  case 0x1004:
    if (((param_4 != (EVP_MD *)0x0) && (iVar3 = BN_is_odd(param_4), iVar3 != 0)) &&
       (iVar3 = BN_is_one(param_4), iVar3 == 0)) {
      BN_free(*(BIGNUM **)(piVar6 + 2));
      *(EVP_MD **)(piVar6 + 2) = param_4;
      return 1;
    }
    iVar3 = 0x65;
    iVar2 = 0x1ac;
    break;
  case 0x1005:
  case 0x1008:
    if ((piVar6[6] | 2U) == 6) {
      if (param_2 != 0x1008) {
        *(EVP_MD **)(piVar6 + 10) = param_4;
        return 1;
      }
      lVar5 = *(long *)(piVar6 + 10);
      if (lVar5 != 0) goto LAB_00b5a40c;
switchD_00b5a364_caseD_d:
      lVar5 = *(long *)(piVar6 + 8);
LAB_00b5a40c:
      param_4->type = (int)lVar5;
      param_4->pkey_type = (int)((ulong)lVar5 >> 0x20);
      return 1;
    }
    iVar3 = 0x9c;
    iVar2 = 0x1cd;
    break;
  case 0x1006:
    iVar3 = piVar6[6];
LAB_00b5a4d8:
    param_4->type = iVar3;
    return 1;
  case 0x1009:
  case 0x100b:
    if (piVar6[6] == 4) {
      if (param_2 != 0x100b) goto LAB_00b5a6a4;
      goto switchD_00b5a364_caseD_d;
    }
    iVar3 = 0x8d;
    iVar2 = 0x1b6;
    break;
  case 0x100a:
    if (piVar6[6] == 4) {
      CRYPTO_free(*(void **)(piVar6 + 0x10));
      if ((param_3 < 1) || (param_4 == (EVP_MD *)0x0)) {
        lVar5 = 0;
        piVar6[0x10] = 0;
        piVar6[0x11] = 0;
      }
      else {
        *(EVP_MD **)(piVar6 + 0x10) = param_4;
        lVar5 = (long)param_3;
      }
      *(long *)(piVar6 + 0x12) = lVar5;
      return 1;
    }
    iVar3 = 0x8d;
    iVar2 = 0x1db;
    break;
  case 0x100c:
    if (piVar6[6] == 4) {
      iVar3 = piVar6[0x11];
      param_4->type = piVar6[0x10];
      param_4->pkey_type = iVar3;
      return piVar6[0x12];
    }
    iVar3 = 0x8d;
    iVar2 = 0x1ea;
    break;
  default:
    iVar3 = 1;
    switch(param_2) {
    case 1:
      if (param_4 == (EVP_MD *)0x0) {
LAB_00b5a6a4:
        *(EVP_MD **)(piVar6 + 8) = param_4;
        return 1;
      }
      iVar3 = piVar6[6];
      iVar2 = EVP_MD_type(param_4);
      if (iVar3 != 5) {
        if (iVar3 != 3) {
          if (iVar2 < 0x101) {
            if (((iVar2 - 0x40U < 0x36) &&
                ((1L << ((ulong)(iVar2 - 0x40U) & 0x3f) & 0x24000080000001U) != 0)) ||
               (iVar2 - 3U < 2)) goto LAB_00b5a6a4;
          }
          else if ((iVar2 - 0x2a0U < 4) || (iVar2 == 0x101)) goto LAB_00b5a6a4;
          goto LAB_00b5a744;
        }
LAB_00b5a45c:
        iVar3 = 0x8d;
        iVar2 = 0x14f;
        goto LAB_00b5a64c;
      }
      iVar3 = RSA_X931_hash_id(iVar2);
      if (iVar3 != -1) goto LAB_00b5a6a4;
LAB_00b5a634:
      iVar3 = 0x8e;
      iVar2 = 0x155;
      goto LAB_00b5a64c;
    case 2:
      iVar3 = 0x94;
      iVar2 = 0x1fd;
      break;
    case 3:
    case 4:
    case 5:
    case 7:
    case 9:
    case 10:
    case 0xb:
      goto switchD_00b5a364_caseD_3;
    default:
      goto switchD_00b5a364_caseD_6;
    case 0xd:
      goto switchD_00b5a364_caseD_d;
    }
  }
  ERR_put_error(4,0x8f,iVar3,"crypto/rsa/rsa_pmeth.c",iVar2);
switchD_00b5a364_caseD_6:
  iVar3 = -2;
switchD_00b5a364_caseD_3:
  return iVar3;
}

