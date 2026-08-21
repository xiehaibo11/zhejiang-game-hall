
/* v8::internal::EhFrameWriter::WritePaddingToAlignedSize(int) */

void __thiscall
v8::internal::EhFrameWriter::WritePaddingToAlignedSize(EhFrameWriter *this,int param_1)

{
  int iVar1;
  
  if ((DAT_01d46b58 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_01d46b58);
    if (iVar1 != 0) {
      DAT_01d46b50 = 0;
      __cxa_guard_release(&DAT_01d46b58);
    }
  }
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            ((vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)(this + 0x20),
             *(undefined8 *)(this + 0x28),&DAT_01d46b50,
             (long)&DAT_01d46b50 + (long)(int)((param_1 + 7U & 0xfffffff8) - param_1));
  return;
}

