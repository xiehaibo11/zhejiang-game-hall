
bool FUN_00aadd94(int param_1,X509_STORE_CTX *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  SSL *pSVar4;
  void *pvVar5;
  char *pcVar6;
  
  if ((param_1 != 0) || (uVar2 = X509_STORE_CTX_get_error(param_2), uVar2 == 0)) {
LAB_00aaddb0:
    iVar1 = SSL_get_ex_data_X509_STORE_CTX_idx();
    pSVar4 = X509_STORE_CTX_get_ex_data(param_2,iVar1);
    pvVar5 = SSL_get_ex_data(pSVar4,DAT_01d54498);
    iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)((long)pvVar5 + 0x220) + 0x830) + 0x188) + 8))
                      (pvVar5,0x3a,param_2,pSVar4,(long)param_1);
    if (param_1 == 0) {
      iVar3 = X509_STORE_CTX_get_error(param_2);
      if (iVar3 != 0) {
        iVar1 = X509_STORE_CTX_get_error_depth(param_2);
        pcVar6 = X509_verify_cert_error_string((long)iVar3);
        _lws_log(1,"SSL error: %s (preverify_ok=%d;err=%d;depth=%d)\n",pcVar6,0,iVar3,iVar1);
        return false;
      }
    }
    return iVar1 == 0;
  }
  iVar1 = SSL_get_ex_data_X509_STORE_CTX_idx();
  pSVar4 = X509_STORE_CTX_get_ex_data(param_2,iVar1);
  pvVar5 = SSL_get_ex_data(pSVar4,DAT_01d54498);
  if (((uVar2 | 1) == 0x13) && ((*(byte *)((long)pvVar5 + 0x2f8) >> 1 & 1) != 0)) {
    pcVar6 = "accepting self-signed certificate (verify_callback)\n";
  }
  else {
    if ((1 < uVar2 - 9) || ((*(byte *)((long)pvVar5 + 0x2f8) >> 3 & 1) == 0)) goto LAB_00aaddb0;
    if (uVar2 == 10) {
      pcVar6 = "accepting expired certificate (verify_callback)\n";
    }
    else {
      if (uVar2 != 9) goto LAB_00aadf00;
      pcVar6 = "accepting not yet valid certificate (verify_callback)\n";
    }
  }
  _lws_log(4,pcVar6);
LAB_00aadf00:
  X509_STORE_CTX_set_error(param_2,0);
  return true;
}

