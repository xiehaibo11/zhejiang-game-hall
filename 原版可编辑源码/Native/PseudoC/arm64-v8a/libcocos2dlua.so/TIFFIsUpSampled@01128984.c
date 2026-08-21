
uint TIFFIsUpSampled(long param_1)

{
  return *(uint *)(param_1 + 0x10) >> 0xe & 1;
}

