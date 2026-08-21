
undefined8 FUN_0113301c(long param_1,void *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x350);
  lVar3 = *(long *)(lVar4 + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01132fb8 with catch @ 01133040
                        */
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = param_3 / lVar3;
  }
  if (param_3 == lVar1 * lVar3) {
    for (; 0 < param_3; param_3 = param_3 - *(long *)(lVar4 + 8)) {
      FUN_011363cc(param_1,param_2,*(undefined8 *)(lVar4 + 0x80),*(undefined4 *)(lVar4 + 0x10));
      _TIFFmemcpy(*(void **)(lVar4 + 0x80),param_2,*(size_t *)(lVar4 + 8));
      param_2 = (void *)((long)param_2 + *(long *)(lVar4 + 8));
    }
    uVar2 = 1;
  }
  else {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"Fax4Encode",
                 "Fractional scanlines cannot be written");
    uVar2 = 0;
  }
  return uVar2;
}

