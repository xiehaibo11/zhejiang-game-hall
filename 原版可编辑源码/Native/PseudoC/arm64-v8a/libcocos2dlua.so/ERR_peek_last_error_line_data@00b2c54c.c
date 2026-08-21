
ulong ERR_peek_last_error_line_data(char **file,int *line,char **data,int *flags)

{
  int iVar1;
  ERR_STATE *pEVar2;
  ulong uVar3;
  int iVar4;
  
  pEVar2 = ERR_get_state();
  iVar1 = pEVar2->err_line[0xc];
  if (pEVar2->err_line[0xd] == iVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = pEVar2->err_buffer[(long)iVar1 + -2];
    if ((file != (char **)0x0) && (line != (int *)0x0)) {
      if (pEVar2->err_file[(long)iVar1 + -2] == (char *)0x0) {
        *file = "NA";
        iVar4 = 0;
      }
      else {
        *file = pEVar2->err_file[(long)iVar1 + -2];
        iVar4 = pEVar2->err_line[(long)iVar1 + -4];
      }
      *line = iVar4;
    }
    if (data != (char **)0x0) {
      if ((char *)pEVar2->err_buffer[(long)iVar1 + 0xe] == (char *)0x0) {
        *data = "";
        if (flags != (int *)0x0) {
          *flags = 0;
        }
      }
      else {
        *data = (char *)pEVar2->err_buffer[(long)iVar1 + 0xe];
        if (flags != (int *)0x0) {
          *flags = pEVar2->err_data_flags[(long)iVar1 + -4];
        }
      }
    }
  }
  return uVar3;
}

