
int ssl_cipher_ptr_id_cmp(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = -(uint)(*(uint *)(*param_1 + 0x10) < *(uint *)(*param_2 + 0x10));
  if (*(uint *)(*param_2 + 0x10) < *(uint *)(*param_1 + 0x10)) {
    iVar1 = 1;
  }
  return iVar1;
}

