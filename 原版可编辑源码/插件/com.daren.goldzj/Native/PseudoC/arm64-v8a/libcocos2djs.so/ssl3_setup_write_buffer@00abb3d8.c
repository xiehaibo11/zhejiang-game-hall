
undefined8 ssl3_setup_write_buffer(long param_1,uint param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  
  *(uint *)(param_1 + 0x3b4) = param_2;
  if (param_3 == 0) {
    iVar2 = *(int *)(param_1 + 0x20c);
    lVar1 = 5;
    if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) & 8) != 0) {
      lVar1 = 0xe;
    }
    iVar3 = ssl_allow_compression(param_1);
    param_3 = 3;
    if (iVar3 != 0) {
      param_3 = 0x403;
    }
    param_3 = lVar1 + (ulong)(iVar2 + 0x50) + param_3;
    if ((*(byte *)(param_1 + 0x1e5) >> 3 & 1) == 0) {
      param_3 = lVar1 + param_3 + 0x53;
    }
  }
  if (param_2 != 0) {
    uVar5 = 0;
    plVar6 = (long *)(param_1 + 0x3d8);
    do {
      if (*plVar6 == 0) {
        pvVar4 = CRYPTO_malloc((int)param_3,"ssl/record/ssl3_buffer.c",0x6d);
        if (pvVar4 == (void *)0x0) {
          *(int *)(param_1 + 0x3b4) = (int)uVar5;
          ERR_put_error(0x14,0x123,0x41,"ssl/record/ssl3_buffer.c",0x79);
          return 0;
        }
        *plVar6 = (long)pvVar4;
        plVar6[2] = param_3;
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 4;
    } while (uVar5 < param_2);
  }
  return 1;
}

