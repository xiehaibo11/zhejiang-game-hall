
/* v8::internal::Serializer::ObjectSerializer::VisitInternalReference(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::Serializer::ObjectSerializer::VisitInternalReference
          (ObjectSerializer *this,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  long lVar2;
  uchar local_24 [4];
  
  lVar1 = *(long *)(this + 0x10);
  this_00 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  lVar2 = *(long *)*param_3;
  local_24[0] = '\"';
  if (*(undefined1 **)(this_00 + 8) == *(undefined1 **)(this_00 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(this_00,local_24);
  }
  else {
    **(undefined1 **)(this_00 + 8) = 0x22;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
  }
  SnapshotByteSink::PutInt(*(ulong *)(this + 0x18),(char *)((lVar2 - lVar1) + -0x3f));
  return;
}

