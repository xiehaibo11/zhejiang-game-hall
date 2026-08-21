
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_peek_error(void)

{
  uint uVar1;
  int iVar2;
  ERR_STATE *pEVar3;
  
  pEVar3 = ERR_get_state();
  iVar2 = pEVar3->err_line[0xd];
  if (iVar2 == pEVar3->err_line[0xc]) {
    return 0;
  }
  uVar1 = iVar2 + 0x10;
  if (-1 < iVar2 + 1) {
    uVar1 = iVar2 + 1;
  }
  return pEVar3->err_buffer[(long)(int)((iVar2 + 1) - (uVar1 & 0xfffffff0)) + -2];
}

