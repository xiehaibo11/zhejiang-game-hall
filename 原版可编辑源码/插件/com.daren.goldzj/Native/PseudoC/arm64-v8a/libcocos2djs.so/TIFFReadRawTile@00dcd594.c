
undefined8 TIFFReadRawTile(undefined8 *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (*(int *)((long)param_1 + 0xc) == 1) {
    uVar3 = param_1[0x77];
    pcVar1 = (char *)*param_1;
    pcVar2 = "File not open for reading";
  }
  else if ((*(uint *)(param_1 + 2) >> 10 & 1) == 0) {
    uVar3 = param_1[0x77];
    pcVar1 = (char *)*param_1;
    pcVar2 = "Can not read tiles from a stripped image";
  }
  else {
    if (*(uint *)((long)param_1 + 0xe4) <= param_2) {
      TIFFErrorExt(param_1[0x77],"TIFFReadRawTile","%lu: Tile out of range, max %lu",param_2);
      return 0xffffffffffffffff;
    }
    if ((*(uint *)(param_1 + 2) >> 0x11 & 1) == 0) {
      uVar3 = FUN_00dcd65c();
      return uVar3;
    }
    uVar3 = param_1[0x77];
    pcVar1 = "TIFFReadRawTile";
    pcVar2 = "Compression scheme does not support access to raw uncompressed data";
  }
  TIFFErrorExt(uVar3,pcVar1,pcVar2);
  return 0xffffffffffffffff;
}

