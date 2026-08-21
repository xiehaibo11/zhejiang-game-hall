
/* v8::internal::EhFrameWriter::Finish(int) */

void __thiscall v8::internal::EhFrameWriter::Finish(EhFrameWriter *this,int param_1)

{
  int iVar1;
  int iVar2;
  vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *pvVar3;
  
  pvVar3 = (vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)(this + 0x20);
  iVar1 = (*(int *)(this + 0x28) - *(int *)pvVar3) - *(int *)this;
  if ((DAT_01d46b58 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_01d46b58);
    if (iVar2 != 0) {
      DAT_01d46b50 = 0;
      __cxa_guard_release(&DAT_01d46b58);
    }
  }
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            (pvVar3,*(undefined8 *)(this + 0x28),&DAT_01d46b50,
             (long)&DAT_01d46b50 + (long)(int)(((iVar1 + 3U & 0xfffffff8) - iVar1) + 4));
  *(int *)(*(long *)(this + 0x20) + (long)*(int *)this) =
       ((*(int *)(this + 0x28) - (int)*(long *)(this + 0x20)) - *(int *)this) + -4;
  *(uint *)(*(long *)(this + 0x20) + (long)*(int *)this + 8) =
       -((param_1 + 7U & 0xfffffff8) + (int)((long)*(int *)this + 8));
  *(int *)((long)*(int *)this + *(long *)(this + 0x20) + 0xc) = param_1;
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>(pvVar3,*(undefined8 *)(this + 0x28),&DAT_01a48978,"| pc_offset=");
  WriteEhFrameHdr(this,param_1);
  *(undefined4 *)(this + 8) = 2;
  return;
}

