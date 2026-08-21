
ulong ERR_peek_last_error_line(char **file,int *line)

{
  ERR_STATE *pEVar1;
  ulong uVar2;
  int iVar3;
  
  pEVar1 = ERR_get_state();
  iVar3 = pEVar1->err_line[0xc];
  if (pEVar1->err_line[0xd] == iVar3) {
    uVar2 = 0;
  }
  else {
    uVar2 = pEVar1->err_buffer[(long)iVar3 + -2];
    if ((file != (char **)0x0) && (line != (int *)0x0)) {
      if (pEVar1->err_file[(long)iVar3 + -2] == (char *)0x0) {
        iVar3 = 0;
        *file = "NA";
      }
      else {
        *file = pEVar1->err_file[(long)iVar3 + -2];
        iVar3 = pEVar1->err_line[(long)iVar3 + -4];
      }
      *line = iVar3;
    }
  }
  return uVar2;
}

