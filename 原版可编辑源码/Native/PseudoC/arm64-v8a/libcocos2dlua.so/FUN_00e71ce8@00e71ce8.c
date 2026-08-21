
void FUN_00e71ce8(void)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = DAT_0178f3a8;
  if ((ulong)(DAT_0178f3b8 - (long)DAT_0178f3a8 >> 3) < 10) {
    lVar3 = DAT_0178f3b0 - (long)DAT_0178f3a8;
    pvVar1 = operator_new(0x50);
    if (0 < lVar3) {
      __memcpy_chk(pvVar1,pvVar2,lVar3,0x50);
      pvVar2 = DAT_0178f3a8;
    }
    DAT_0178f3a8 = pvVar1;
    DAT_0178f3b0 = (long)pvVar1 + lVar3;
    DAT_0178f3b8 = (long)pvVar1 + 0x50;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}

