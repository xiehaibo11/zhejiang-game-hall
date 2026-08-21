
bool FUN_00b2797c(EVP_MD_CTX *param_1,undefined8 *param_2,EVP_MD *param_3,ENGINE *param_4,
                 EVP_PKEY *param_5,int param_6)

{
  int iVar1;
  EVP_PKEY_CTX *pEVar2;
  char *name;
  long lVar3;
  undefined4 uVar4;
  int local_44;
  
  pEVar2 = param_1->pctx;
  if (pEVar2 == (EVP_PKEY_CTX *)0x0) {
    pEVar2 = EVP_PKEY_CTX_new(param_5,param_4);
    param_1->pctx = pEVar2;
    if (pEVar2 == (EVP_PKEY_CTX *)0x0) {
      return false;
    }
  }
  lVar3 = *(long *)pEVar2;
  if ((param_3 == (EVP_MD *)0x0) && ((*(uint *)(lVar3 + 4) >> 2 & 1) == 0)) {
    iVar1 = EVP_PKEY_get_default_digest_nid(param_5,&local_44);
    if (iVar1 < 1) {
LAB_00b27a30:
      ERR_put_error(6,0xa1,0x9e,"crypto/evp/m_sigver.c",0x24);
      return false;
    }
    name = OBJ_nid2sn(local_44);
    param_3 = EVP_get_digestbyname(name);
    if (param_3 == (EVP_MD *)0x0) goto LAB_00b27a30;
    pEVar2 = param_1->pctx;
    lVar3 = *(long *)pEVar2;
  }
  if (param_6 == 0) {
    if (*(code **)(lVar3 + 0x70) != (code *)0x0) {
      iVar1 = (**(code **)(lVar3 + 0x70))(pEVar2,param_1);
      if (iVar1 < 1) {
        return false;
      }
      pEVar2 = param_1->pctx;
      uVar4 = 0x40;
      goto LAB_00b27a70;
    }
    iVar1 = EVP_PKEY_sign_init(pEVar2);
  }
  else {
    if (*(code **)(lVar3 + 0x80) != (code *)0x0) {
      iVar1 = (**(code **)(lVar3 + 0x80))(pEVar2,param_1);
      if (iVar1 < 1) {
        return false;
      }
      pEVar2 = param_1->pctx;
      uVar4 = 0x80;
LAB_00b27a70:
      *(undefined4 *)(pEVar2 + 0x20) = uVar4;
      goto LAB_00b27a94;
    }
    iVar1 = EVP_PKEY_verify_init(pEVar2);
  }
  if (iVar1 < 1) {
    return false;
  }
LAB_00b27a94:
  iVar1 = EVP_PKEY_CTX_ctrl(param_1->pctx,-1,0xf8,1,0,param_3);
  if (iVar1 < 1) {
    return false;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1->pctx;
  }
  if ((*(byte *)(*(long *)param_1->pctx + 4) >> 2 & 1) != 0) {
    return true;
  }
  iVar1 = EVP_DigestInit_ex(param_1,param_3,param_4);
  return iVar1 != 0;
}

