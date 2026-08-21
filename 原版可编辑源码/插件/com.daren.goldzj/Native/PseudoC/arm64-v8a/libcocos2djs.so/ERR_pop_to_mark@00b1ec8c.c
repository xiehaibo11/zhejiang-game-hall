
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ERR_pop_to_mark(void)

{
  uint uVar1;
  ERR_STATE *pEVar2;
  uint uVar3;
  int iVar4;
  
  pEVar2 = ERR_get_state();
  uVar3 = pEVar2->err_line[0xd];
  uVar1 = pEVar2->err_line[0xc];
  if (uVar3 != uVar1) {
    do {
      if ((*(byte *)((long)pEVar2->err_flags +
                    ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) - 0x10)) & 1
          ) != 0) {
        if (uVar3 == uVar1) {
          return 0;
        }
        pEVar2->err_flags[(long)(int)uVar1 + -4] =
             pEVar2->err_flags[(long)(int)uVar1 + -4] & 0xfffffffe;
        return 1;
      }
      pEVar2->err_flags[(long)(int)uVar1 + -4] = 0;
      pEVar2->err_buffer[(long)pEVar2->err_line[0xc] + -2] = 0;
      iVar4 = pEVar2->err_line[0xc];
      if ((pEVar2->err_data_flags[(long)iVar4 + -4] & 1) != 0) {
        CRYPTO_free((void *)pEVar2->err_buffer[(long)iVar4 + 0xe]);
        pEVar2->err_buffer[(long)pEVar2->err_line[0xc] + 0xe] = 0;
        iVar4 = pEVar2->err_line[0xc];
      }
      pEVar2->err_data_flags[(long)iVar4 + -4] = 0;
      pEVar2->err_file[(long)pEVar2->err_line[0xc] + -2] = (char *)0x0;
      pEVar2->err_line[(long)pEVar2->err_line[0xc] + -4] = -1;
      uVar3 = pEVar2->err_line[0xd];
      uVar1 = 0xf;
      if (pEVar2->err_line[0xc] != 0) {
        uVar1 = pEVar2->err_line[0xc] - 1;
      }
      pEVar2->err_line[0xc] = uVar1;
    } while (uVar3 != uVar1);
  }
  return 0;
}

