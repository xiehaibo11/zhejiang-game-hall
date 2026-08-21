
void ossl_statem_set_in_handshake(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_2 != 0) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar1;
  return;
}

