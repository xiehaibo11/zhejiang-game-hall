
bool EVP_MD_CTX_ctrl(long *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*param_1 == 0) {
    return false;
  }
  pcVar2 = *(code **)(*param_1 + 0x48);
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)();
    return 0 < iVar1;
  }
  return false;
}

