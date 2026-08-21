
void ERR_set_error_data(char *data,int flags)

{
  ulong *puVar1;
  long lVar2;
  ERR_STATE *pEVar3;
  
  pEVar3 = ERR_get_state();
  lVar2 = 0xf;
  if (pEVar3->err_line[0xc] != 0) {
    lVar2 = (long)pEVar3->err_line[0xc];
  }
  puVar1 = pEVar3->err_buffer + lVar2 + 0xe;
  if ((pEVar3->err_data_flags[lVar2 + -4] & 1) != 0) {
    CRYPTO_free((void *)*puVar1);
    *puVar1 = 0;
  }
  *puVar1 = (ulong)data;
  pEVar3->err_data_flags[lVar2 + -4] = flags;
  return;
}

