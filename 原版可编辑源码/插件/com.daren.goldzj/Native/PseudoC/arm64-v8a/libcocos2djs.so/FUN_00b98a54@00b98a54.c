
/* WARNING: Type propagation algorithm not settling */

int FUN_00b98a54(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  int iVar2;
  BN_GENCB *cb;
  DSA *r;
  DH *pDVar3;
  int iVar4;
  EVP_MD *pEVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x28);
  switch(piVar6[6]) {
  case 0:
    if (*(long *)(param_1 + 0x38) == 0) {
      cb = (BN_GENCB *)0x0;
      iVar2 = piVar6[2];
    }
    else {
      cb = (BN_GENCB *)BN_GENCB_new();
      if (cb == (BN_GENCB *)0x0) {
        return 0;
      }
      evp_pkey_set_cb_translate(cb,param_1);
      iVar2 = piVar6[2];
    }
    if (iVar2 == 0) {
      pDVar3 = DH_new();
      if (pDVar3 != (DH *)0x0) {
        iVar2 = DH_generate_parameters_ex(pDVar3,*piVar6,piVar6[1],cb);
        BN_GENCB_free(cb);
        if (iVar2 != 0) {
          EVP_PKEY_assign(param_2,0x1c,pDVar3);
          return iVar2;
        }
        DH_free(pDVar3);
        return 0;
      }
      goto LAB_00b98bf0;
    }
    if (2 < iVar2) goto LAB_00b98bf0;
    iVar1 = *piVar6;
    iVar2 = piVar6[3];
    pEVar5 = *(EVP_MD **)(piVar6 + 4);
    r = DSA_new();
    if (r == (DSA *)0x0) goto LAB_00b98bf0;
    iVar4 = 0x100;
    if (iVar1 < 0x800) {
      iVar4 = 0xa0;
    }
    if (iVar2 != -1) {
      iVar4 = iVar2;
    }
    if (pEVar5 == (EVP_MD *)0x0) {
      if (iVar1 < 0x800) {
        pEVar5 = EVP_sha1();
      }
      else {
        pEVar5 = EVP_sha256();
      }
    }
    if (piVar6[2] == 2) {
      iVar2 = dsa_builtin_paramgen2(r,(long)iVar1,(long)iVar4,pEVar5,0,0,0xffffffff,0,0,0,cb);
joined_r0x00b98be4:
      if (0 < iVar2) {
        BN_GENCB_free(cb);
        pDVar3 = DSA_dup_DH(r);
        DSA_free(r);
        if (pDVar3 == (DH *)0x0) {
          return 0;
        }
        break;
      }
    }
    else if (piVar6[2] == 1) {
      iVar2 = dsa_builtin_paramgen(r,(long)iVar1,(long)iVar4,pEVar5,0,0,0,0,0,cb);
      goto joined_r0x00b98be4;
    }
    DSA_free(r);
LAB_00b98bf0:
    BN_GENCB_free(cb);
    return 0;
  case 1:
    pDVar3 = (DH *)DH_get_1024_160();
    break;
  case 2:
    pDVar3 = (DH *)DH_get_2048_224();
    break;
  case 3:
    pDVar3 = (DH *)DH_get_2048_256();
    break;
  default:
    return -2;
  }
  EVP_PKEY_assign(param_2,0x398,pDVar3);
  return 1;
}

