
void ERR_add_error_vdata(int num,va_list args)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  size_t sVar5;
  ERR_STATE *pEVar6;
  undefined8 *puVar7;
  undefined1 *addr;
  char *__s;
  int iVar8;
  ulong uVar9;
  int iVar10;
  
  puVar4 = CRYPTO_malloc(0x51,"crypto/err/err.c",0x2c9);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
    if (0 < num) {
      iVar8 = 0;
      uVar9 = 0;
      iVar10 = 0x50;
      addr = puVar4;
      do {
        iVar3 = *(int *)((long)args + 0x18);
        if ((iVar3 < 0) && (*(int *)((long)args + 0x18) = iVar3 + 8, iVar3 + 8 < 1)) {
          __s = *(char **)(*(long *)((long)args + 8) + (long)iVar3);
        }
        else {
          puVar7 = *(undefined8 **)args;
          *(undefined8 **)args = puVar7 + 1;
          __s = (char *)*puVar7;
        }
        puVar4 = addr;
        if (__s != (char *)0x0) {
          sVar5 = strlen(__s);
          uVar9 = sVar5 + (uVar9 & 0xffffffff);
          if (iVar10 < (int)uVar9) {
            puVar4 = CRYPTO_realloc(addr,(int)((uVar9 << 0x20) + 0x1500000000 >> 0x20),
                                    "crypto/err/err.c",0x2d6);
            if (puVar4 == (undefined1 *)0x0) {
              CRYPTO_free(addr);
              return;
            }
            iVar10 = (int)uVar9 + 0x14;
          }
          OPENSSL_strlcat(puVar4,__s,(long)iVar10 + 1);
        }
        iVar8 = iVar8 + 1;
        addr = puVar4;
      } while (iVar8 < num);
    }
    pEVar6 = ERR_get_state();
    lVar2 = 0xf;
    if (pEVar6->err_line[0xc] != 0) {
      lVar2 = (long)pEVar6->err_line[0xc];
    }
    puVar1 = pEVar6->err_buffer + lVar2 + 0xe;
    if ((pEVar6->err_data_flags[lVar2 + -4] & 1) != 0) {
      CRYPTO_free((void *)*puVar1);
      *puVar1 = 0;
    }
    *puVar1 = (ulong)puVar4;
    pEVar6->err_data_flags[lVar2 + -4] = 3;
  }
  return;
}

