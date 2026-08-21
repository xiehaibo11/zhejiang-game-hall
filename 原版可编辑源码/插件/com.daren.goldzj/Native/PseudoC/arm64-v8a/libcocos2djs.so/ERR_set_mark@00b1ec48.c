
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ERR_set_mark(void)

{
  int iVar1;
  ERR_STATE *pEVar2;
  
  pEVar2 = ERR_get_state();
  iVar1 = pEVar2->err_line[0xc];
  if (pEVar2->err_line[0xd] == iVar1) {
    return 0;
  }
  pEVar2->err_flags[(long)iVar1 + -4] = pEVar2->err_flags[(long)iVar1 + -4] | 1;
  return 1;
}

