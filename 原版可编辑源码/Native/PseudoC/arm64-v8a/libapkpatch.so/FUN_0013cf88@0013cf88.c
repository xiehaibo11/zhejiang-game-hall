
bool FUN_0013cf88(long param_1,uint param_2,int param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  *(uint *)(param_1 + 0xa0) = param_2;
  pvVar2 = malloc((ulong)(param_3 + param_2) + (long)param_3 * 8 + (long)(param_3 + 1) * 4);
  *(void **)(param_1 + 0x98) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    FUN_0013fb24(&DAT_0016ba80,"self->_cache_fvce!=0",DAT_0016ba88);
  }
  else {
    lVar3 = (long)param_3;
    *(ulong *)(param_1 + 0x68) = (long)pvVar2 + (ulong)param_2;
    uVar4 = (long)pvVar2 + (ulong)param_2 + lVar3 + 3 & 0xfffffffffffffffc;
    *(ulong *)(param_1 + 0x78) = uVar4;
    lVar1 = uVar4 + lVar3 * 4;
    *(long *)(param_1 + 0x58) = lVar1;
    *(long *)(param_1 + 0x60) = lVar1 + lVar3 * 4;
  }
  return pvVar2 != (void *)0x0;
}

