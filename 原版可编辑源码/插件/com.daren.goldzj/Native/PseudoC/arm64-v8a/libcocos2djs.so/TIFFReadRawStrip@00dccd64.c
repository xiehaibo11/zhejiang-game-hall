
undefined8 TIFFReadRawStrip(undefined8 *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(int *)((long)param_1 + 0xc) == 1) {
    uVar4 = param_1[0x77];
    pcVar1 = (char *)*param_1;
    pcVar2 = "File not open for reading";
  }
  else {
    if ((*(uint *)(param_1 + 2) >> 10 & 1) == 0) {
      uVar3 = *(uint *)((long)param_1 + 0xe4);
      if (param_2 < uVar3) {
        if ((*(uint *)(param_1 + 2) >> 0x11 & 1) != 0) {
          uVar4 = param_1[0x77];
          pcVar1 = "TIFFReadRawStrip";
          pcVar2 = "Compression scheme does not support access to raw uncompressed data";
          goto LAB_00dccde4;
        }
        if (*(long *)(param_1[0x1e] + (ulong)param_2 * 8) != 0) {
          uVar4 = FUN_00dcce4c();
          return uVar4;
        }
        uVar4 = param_1[0x77];
        pcVar1 = "%llu: Invalid strip byte count, strip %lu";
        uVar3 = param_2;
        param_2 = 0;
      }
      else {
        uVar4 = param_1[0x77];
        pcVar1 = "%lu: Strip out of range, max %lu";
      }
      TIFFErrorExt(uVar4,"TIFFReadRawStrip",pcVar1,param_2,uVar3);
      return 0xffffffffffffffff;
    }
    uVar4 = param_1[0x77];
    pcVar1 = (char *)*param_1;
    pcVar2 = "Can not read scanlines from a tiled image";
  }
LAB_00dccde4:
  TIFFErrorExt(uVar4,pcVar1,pcVar2);
  return 0xffffffffffffffff;
}

