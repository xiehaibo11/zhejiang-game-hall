
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::SnapshotByteSink::PutInt(unsigned long, char const*) */

void v8::internal::SnapshotByteSink::PutInt(ulong param_1,char *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte local_38 [4];
  uchar local_34 [4];
  uchar local_18 [4];
  uchar local_14 [4];
  
  uVar2 = (long)param_2 * 4;
  bVar1 = 2;
  if (((ulong)param_2 >> 0xe & 0xffffffffffff) == 0) {
    bVar1 = 0xff < uVar2;
  }
  local_38[0] = 3;
  if (((ulong)param_2 >> 0x16 & 0xffffffffff) == 0) {
    local_38[0] = bVar1;
  }
  local_38[0] = local_38[0] | (byte)uVar2;
  if (*(byte **)(param_1 + 8) == *(byte **)(param_1 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)param_1,local_38);
  }
  else {
    **(byte **)(param_1 + 8) = local_38[0];
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  if (0xff < uVar2) {
    local_34[0] = (uchar)((ulong)param_2 >> 6);
    if (*(uchar **)(param_1 + 8) == *(uchar **)(param_1 + 0x10)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)param_1,local_34);
    }
    else {
      **(uchar **)(param_1 + 8) = local_34[0];
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    }
  }
  if (0xffff < uVar2) {
    local_18[0] = (uchar)((ulong)param_2 >> 0xe);
    if (*(uchar **)(param_1 + 8) == *(uchar **)(param_1 + 0x10)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)param_1,local_18);
    }
    else {
      **(uchar **)(param_1 + 8) = local_18[0];
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    }
  }
  if (((ulong)param_2 & 0x3fffffffffffffff) >> 0x16 != 0) {
    local_14[0] = (uchar)((ulong)param_2 >> 0x16);
    if (*(uchar **)(param_1 + 8) == *(uchar **)(param_1 + 0x10)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)param_1,local_14);
    }
    else {
      **(uchar **)(param_1 + 8) = local_14[0];
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    }
  }
  return;
}

