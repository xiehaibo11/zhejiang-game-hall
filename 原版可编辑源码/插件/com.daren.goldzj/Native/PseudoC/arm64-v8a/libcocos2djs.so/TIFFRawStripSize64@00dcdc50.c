
long TIFFRawStripSize64(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xf0) + (ulong)param_2 * 8);
  if (lVar1 != 0) {
    return lVar1;
  }
  TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFRawStripSize64",
               "%llu: Invalid strip byte count, strip %lu",0,param_2);
  return -1;
}

