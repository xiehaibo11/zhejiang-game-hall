
undefined8 TIFFWriteRawTile(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x10) >> 6 & 1) != 0) ||
     (iVar1 = TIFFWriteCheck(param_1,1,"TIFFWriteRawTile"), iVar1 != 0)) {
    if (param_2 < *(uint *)(param_1 + 0xe4)) {
      iVar1 = FUN_00dcf480(param_1,param_2,param_3,param_4);
      if (iVar1 != 0) {
        return param_4;
      }
      return 0xffffffffffffffff;
    }
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteRawTile",
                 "Tile %lu out of range, max %lu",param_2);
  }
  return 0xffffffffffffffff;
}

