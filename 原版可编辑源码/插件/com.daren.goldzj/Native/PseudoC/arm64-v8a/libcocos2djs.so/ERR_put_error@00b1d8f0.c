
void ERR_put_error(int lib,int func,int reason,char *file,int line)

{
  uint uVar1;
  ERR_STATE *pEVar2;
  int iVar3;
  
  pEVar2 = ERR_get_state();
  iVar3 = pEVar2->err_line[0xc];
  uVar1 = iVar3 + 0x10;
  if (-1 < iVar3 + 1) {
    uVar1 = iVar3 + 1;
  }
  iVar3 = (iVar3 + 1) - (uVar1 & 0xfffffff0);
  pEVar2->err_line[0xc] = iVar3;
  if (iVar3 == pEVar2->err_line[0xd]) {
    uVar1 = iVar3 + 0x10;
    if (-1 < iVar3 + 1) {
      uVar1 = iVar3 + 1;
    }
    pEVar2->err_line[0xd] = (iVar3 + 1) - (uVar1 & 0xfffffff0);
  }
  pEVar2->err_flags[(long)iVar3 + -4] = 0;
  pEVar2->err_buffer[(long)pEVar2->err_line[0xc] + -2] =
       (ulong)(lib << 0x18 | (func & 0xfffU) << 0xc | reason & 0xfffU);
  pEVar2->err_file[(long)pEVar2->err_line[0xc] + -2] = file;
  pEVar2->err_line[(long)pEVar2->err_line[0xc] + -4] = line;
  iVar3 = pEVar2->err_line[0xc];
  if ((pEVar2->err_data_flags[(long)iVar3 + -4] & 1) != 0) {
    CRYPTO_free((void *)pEVar2->err_buffer[(long)iVar3 + 0xe]);
    pEVar2->err_buffer[(long)pEVar2->err_line[0xc] + 0xe] = 0;
    iVar3 = pEVar2->err_line[0xc];
  }
  pEVar2->err_data_flags[(long)iVar3 + -4] = 0;
  return;
}

