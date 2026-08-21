
ulong FUN_00dd4b40(long param_1,int *param_2,long param_3,undefined4 param_4,uint param_5,
                  long param_6)

{
  void *__ptr;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_5;
  if (param_3 == 0) {
    uVar3 = 1;
    *param_2 = *param_2 + 1;
  }
  else {
    if ((*(uint *)(param_1 + 0x10) >> 0x13 & 1) != 0) {
      if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
        TIFFSwabArrayOfLong8(param_6,uVar3);
      }
      uVar3 = FUN_00dd5308(param_1,param_2,param_3,param_4,0x10,uVar3,param_5 << 3,param_6);
      return uVar3;
    }
    __ptr = _TIFFmalloc(uVar3 << 2);
    if (__ptr == (void *)0x0) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteDirectoryTagLongLong8Array",
                   "Out of memory");
LAB_00dd4c98:
      uVar3 = 0;
    }
    else {
      if (param_5 != 0) {
        lVar1 = 0;
        do {
          uVar2 = *(ulong *)(param_6 + lVar1 * 8);
          if (uVar2 >> 0x20 != 0) {
            TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteDirectoryTagLongLong8Array",
                         "Attempt to write value larger than 0xFFFFFFFF in Classic TIFF file.");
            _TIFFfree(__ptr);
            goto LAB_00dd4c98;
          }
          *(int *)((long)__ptr + lVar1 * 4) = (int)uVar2;
          lVar1 = lVar1 + 1;
        } while ((uint)lVar1 < param_5);
      }
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabArrayOfLong(__ptr,uVar3);
      }
      uVar3 = FUN_00dd5308(param_1,param_2,param_3,param_4,4,uVar3,param_5 << 2,__ptr);
      uVar3 = uVar3 & 0xffffffff;
      _TIFFfree(__ptr);
    }
  }
  return uVar3;
}

