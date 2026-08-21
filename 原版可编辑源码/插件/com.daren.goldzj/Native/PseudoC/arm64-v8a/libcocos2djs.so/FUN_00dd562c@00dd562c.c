
undefined8 FUN_00dd562c(long param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x390);
  if (lVar2 < (long)param_3) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"DumpModeDecode",
                 "Not enough data for scanline %lu, expected a request for at most %lld bytes, got a request for %lld bytes"
                 ,*(undefined4 *)(param_1 + 0x27c),lVar2,param_3);
    uVar1 = 0;
  }
  else {
    if (*(void **)(param_1 + 0x388) != param_2) {
      _TIFFmemcpy(param_2,*(void **)(param_1 + 0x388),param_3);
      param_2 = *(void **)(param_1 + 0x388);
      lVar2 = *(long *)(param_1 + 0x390);
    }
    uVar1 = 1;
    *(size_t *)(param_1 + 0x388) = (long)param_2 + param_3;
    *(size_t *)(param_1 + 0x390) = lVar2 - param_3;
  }
  return uVar1;
}

