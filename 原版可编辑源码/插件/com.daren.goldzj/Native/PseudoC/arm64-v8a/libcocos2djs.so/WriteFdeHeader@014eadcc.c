
/* v8::internal::EhFrameWriter::WriteFdeHeader() */

void __thiscall v8::internal::EhFrameWriter::WriteFdeHeader(EhFrameWriter *this)

{
  vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *pvVar1;
  int local_34;
  
  local_34 = -0x21523f22;
  pvVar1 = (vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)(this + 0x20);
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar1,*(undefined8 *)(this + 0x28),&local_34,&stack0xffffffffffffffd0);
  local_34 = *(int *)this + 4;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar1,*(undefined8 *)(this + 0x28),&local_34,&stack0xffffffffffffffd0);
  local_34 = -0x21523f22;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar1,*(undefined8 *)(this + 0x28),&local_34,&stack0xffffffffffffffd0);
  local_34 = -0x21523f22;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar1,*(undefined8 *)(this + 0x28),&local_34,&stack0xffffffffffffffd0);
  WriteByte(this,'\0');
  return;
}

