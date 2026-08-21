
ulong vorbis_book_decode(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_00ebe798();
  return uVar1 & 0xffffffff;
}

