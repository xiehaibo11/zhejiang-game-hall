
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ERR_clear_error(void)

{
  long lVar1;
  ERR_STATE *pEVar2;
  long lVar3;
  ERR_STATE *pEVar4;
  
  pEVar2 = ERR_get_state();
  lVar3 = 0;
  pEVar4 = pEVar2;
  do {
    *(undefined4 *)&(pEVar4->tid).ptr = 0;
    *(undefined8 *)((long)pEVar2->err_flags + lVar3 + 0x30) = 0;
    if (((ulong)pEVar4->err_data[0xe] & 1) != 0) {
      CRYPTO_free(*(void **)((long)pEVar2->err_buffer + lVar3 + 0x70));
      *(undefined8 *)((long)pEVar2->err_buffer + lVar3 + 0x70) = 0;
    }
    lVar1 = lVar3 + 8;
    *(undefined4 *)(pEVar4->err_data + 0xe) = 0;
    *(undefined8 *)((long)pEVar2->err_data_flags + lVar3 + 0x30) = 0;
    *(undefined4 *)(pEVar4->err_file + 0xe) = 0xffffffff;
    pEVar4 = (ERR_STATE *)((long)&(pEVar4->tid).ptr + 4);
    lVar3 = lVar1;
  } while (lVar1 != 0x80);
  pEVar2->err_line[0xc] = 0;
  pEVar2->err_line[0xd] = 0;
  return;
}

