
undefined8 FUN_01131b60(long param_1,void *param_2,size_t param_3)

{
  size_t __n;
  int iVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  while( true ) {
    if ((long)param_3 < 1) {
      return 1;
    }
    lVar2 = *(long *)(param_1 + 0x390);
    lVar3 = *(long *)(param_1 + 0x370);
    __n = lVar3 - lVar2;
    if ((long)(lVar2 + param_3) <= lVar3) {
      __n = param_3;
    }
    pvVar4 = param_2;
    if (*(void **)(param_1 + 0x388) != param_2) {
      _TIFFmemcpy(*(void **)(param_1 + 0x388),param_2,__n);
      lVar2 = *(long *)(param_1 + 0x390);
      lVar3 = *(long *)(param_1 + 0x370);
      pvVar4 = *(void **)(param_1 + 0x388);
    }
    *(size_t *)(param_1 + 0x388) = (long)pvVar4 + __n;
    *(size_t *)(param_1 + 0x390) = lVar2 + __n;
    if ((lVar3 <= (long)(lVar2 + __n)) && (iVar1 = TIFFFlushData1(param_1), iVar1 == 0)) break;
    param_3 = param_3 - __n;
    param_2 = (void *)((long)param_2 + __n);
  }
  return 0xffffffff;
}

