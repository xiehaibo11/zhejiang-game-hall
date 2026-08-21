
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_peek_last_error(void)

{
  ERR_STATE *pEVar1;
  
  pEVar1 = ERR_get_state();
  if (pEVar1->err_line[0xd] == pEVar1->err_line[0xc]) {
    return 0;
  }
  return pEVar1->err_buffer[(long)pEVar1->err_line[0xc] + -2];
}

