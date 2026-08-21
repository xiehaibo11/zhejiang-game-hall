
ulong ERR_peek_error_line_data(char **file,int *line,char **data,int *flags)

{
  uint uVar1;
  int iVar2;
  ERR_STATE *pEVar3;
  ulong uVar4;
  int iVar5;
  
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
    if ((file != (char **)0x0) && (line != (int *)0x0)) {
      if (pEVar3->err_file[(long)iVar2 + -2] == (char *)0x0) {
        *file = "NA";
        iVar5 = 0;
      }
      else {
        *file = pEVar3->err_file[(long)iVar2 + -2];
        iVar5 = pEVar3->err_line[(long)iVar2 + -4];
      }
      *line = iVar5;
    }
    if (data != (char **)0x0) {
      if ((char *)pEVar3->err_buffer[(long)iVar2 + 0xe] == (char *)0x0) {
        *data = "";
        if (flags != (int *)0x0) {
          *flags = 0;
        }
      }
      else {
        *data = (char *)pEVar3->err_buffer[(long)iVar2 + 0xe];
        if (flags != (int *)0x0) {
          *flags = pEVar3->err_data_flags[(long)iVar2 + -4];
        }
      }
    }
  }
  return uVar4;
}

