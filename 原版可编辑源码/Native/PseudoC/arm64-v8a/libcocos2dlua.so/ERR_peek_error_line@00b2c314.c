
ulong ERR_peek_error_line(char **file,int *line)

{
  uint uVar1;
  ERR_STATE *pEVar2;
  ulong uVar3;
  int iVar4;
  
  pEVar2 = ERR_get_state();
  iVar4 = pEVar2->err_line[0xd];
  if (iVar4 == pEVar2->err_line[0xc]) {
    uVar3 = 0;
  }
  else {
    uVar1 = iVar4 + 0x10;
    if (-1 < iVar4 + 1) {
      uVar1 = iVar4 + 1;
    }
    iVar4 = (iVar4 + 1) - (uVar1 & 0xfffffff0);
    uVar3 = pEVar2->err_buffer[(long)iVar4 + -2];
    if ((file != (char **)0x0) && (line != (int *)0x0)) {
      if (pEVar2->err_file[(long)iVar4 + -2] == (char *)0x0) {
        iVar4 = 0;
        *file = "NA";
      }
      else {
        *file = pEVar2->err_file[(long)iVar4 + -2];
        iVar4 = pEVar2->err_line[(long)iVar4 + -4];
      }
      *line = iVar4;
    }
  }
  return uVar3;
}

