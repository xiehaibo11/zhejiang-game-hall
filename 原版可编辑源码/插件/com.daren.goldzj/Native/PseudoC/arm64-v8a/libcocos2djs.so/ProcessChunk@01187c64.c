
/* v8::internal::ChunkedStream<unsigned short>::ProcessChunk(unsigned char const*, unsigned long,
   unsigned long) */

void __thiscall
v8::internal::ChunkedStream<unsigned_short>::ProcessChunk
          (ChunkedStream<unsigned_short> *this,uchar *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong local_28;
  ushort *puStack_20;
  ulong local_18;
  
  local_28 = param_3 >> 1;
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar1 < *(undefined8 **)(this + 0x20)) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = local_28;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x18;
  }
  else {
    puStack_20 = (ushort *)param_1;
    local_18 = param_2;
    std::__ndk1::
    vector<v8::internal::ChunkedStream<unsigned_short>::Chunk,std::__ndk1::allocator<v8::internal::ChunkedStream<unsigned_short>::Chunk>>
    ::__emplace_back_slow_path<unsigned_short_const*,unsigned_long&,unsigned_long>
              ((vector<v8::internal::ChunkedStream<unsigned_short>::Chunk,std::__ndk1::allocator<v8::internal::ChunkedStream<unsigned_short>::Chunk>>
                *)(this + 0x10),&puStack_20,&local_18,&local_28);
  }
  return;
}

