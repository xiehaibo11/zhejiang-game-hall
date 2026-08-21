
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_get_error(void)

{
  uint uVar1;
  int iVar2;
  ERR_STATE *pEVar3;
  ulong uVar4;
  
  pEVar3 = ERR_get_state();
  iVar2 = pEVar3->err_line[0xd];
  if (iVar2 == pEVar3->err_line[0xc]) {
    uVar4 = 0;
  }
  else {
    uVar1 = iVar2 + 0x10;
    if (-1 < iVar2 + 1) {
      uVar1 = iVar2 + 1;
    }
    iVar2 = (iVar2 + 1) - (uVar1 & 0xfffffff0);
    uVar4 = pEVar3->err_buffer[(long)iVar2 + -2];
    pEVar3->err_line[0xd] = iVar2;
    pEVar3->err_buffer[(long)iVar2 + -2] = 0;
    if ((pEVar3->err_data_flags[(long)iVar2 + -4] & 1) != 0) {
      CRYPTO_free((void *)pEVar3->err_buffer[(long)iVar2 + 0xe]);
      pEVar3->err_buffer[(long)iVar2 + 0xe] = 0;
    }
    pEVar3->err_data_flags[(long)iVar2 + -4] = 0;
  }
  return uVar4;
}

