
/* v8::internal::EhFrameWriter::WriteEhFrameHdr(int) */

void __thiscall v8::internal::EhFrameWriter::WriteEhFrameHdr(EhFrameWriter *this,int param_1)

{
  int iVar1;
  vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *pvVar2;
  int local_44;
  
  pvVar2 = (vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)(this + 0x20);
  iVar1 = *(int *)(this + 0x28) - *(int *)pvVar2;
  WriteByte(this,'\x01');
  WriteByte(this,'\x1b');
  WriteByte(this,'\x03');
  WriteByte(this,';');
  local_44 = -4 - iVar1;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar2,*(undefined8 *)(this + 0x28),&local_44,&stack0xffffffffffffffc0);
  local_44 = 1;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar2,*(undefined8 *)(this + 0x28),&local_44,&stack0xffffffffffffffc0);
  local_44 = -((param_1 + 7U & 0xfffffff8) + iVar1);
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar2,*(undefined8 *)(this + 0x28),&local_44,&stack0xffffffffffffffc0);
  local_44 = *(int *)this - iVar1;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar2,*(undefined8 *)(this + 0x28),&local_44,&stack0xffffffffffffffc0);
  return;
}

