
bool ssl3_setup_buffers(long param_1)

{
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  
  pvVar3 = *(void **)(param_1 + 0x3b8);
  if (pvVar3 == (void *)0x0) {
    uVar4 = (ulong)((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) & 8) + 0x4148);
    iVar2 = ssl_allow_compression(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abb2f4 with catch @ 00abb520
                        */
    if (iVar2 != 0) {
      uVar4 = uVar4 | 0x400;
    }
    uVar1 = *(ulong *)(param_1 + 0x3c0);
    if (*(ulong *)(param_1 + 0x3c0) <= uVar4) {
      uVar1 = uVar4;
    }
    pvVar3 = CRYPTO_malloc((int)uVar1,"ssl/record/ssl3_buffer.c",0x3f);
    if (pvVar3 == (void *)0x0) {
      ERR_put_error(0x14,0x9c,0x41,"ssl/record/ssl3_buffer.c",0x49);
      return false;
    }
    *(void **)(param_1 + 0x3b8) = pvVar3;
    *(ulong *)(param_1 + 0x3c8) = uVar1;
  }
  *(void **)(param_1 + 0x10d8) = pvVar3;
  iVar2 = ssl3_setup_write_buffer(param_1,1,0);
  return iVar2 != 0;
}

