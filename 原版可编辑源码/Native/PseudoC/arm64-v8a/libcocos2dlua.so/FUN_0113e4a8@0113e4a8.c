
undefined4 FUN_0113e4a8(long param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *__dest;
  long lVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  
  lVar4 = *(long *)(param_1 + 0x350);
  __dest = _TIFFmalloc(param_3);
  if (__dest == (void *)0x0) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"PredictorEncodeTile",
                 "Out of memory allocating %ld byte temp buffer.",param_3);
    uVar1 = 0;
  }
  else {
    memcpy(__dest,param_2,param_3);
    if (0 < (long)param_3) {
      lVar2 = *(long *)(lVar4 + 0x10);
      pvVar3 = __dest;
      sVar5 = param_3;
      do {
        (**(code **)(lVar4 + 0x30))(param_1,pvVar3,lVar2);
        sVar5 = sVar5 - lVar2;
        pvVar3 = (void *)((long)pvVar3 + lVar2);
      } while (0 < (long)sVar5);
    }
    uVar1 = (**(code **)(lVar4 + 0x28))(param_1,__dest,param_3,param_4);
    _TIFFfree(__dest);
  }
  return uVar1;
}

