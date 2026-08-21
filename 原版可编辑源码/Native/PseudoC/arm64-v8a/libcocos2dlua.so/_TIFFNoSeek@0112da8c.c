
undefined8 _TIFFNoSeek(undefined8 *param_1)

{
  TIFFErrorExt(param_1[0x77],*param_1,"Compression algorithm does not support random access");
  return 0;
}

