
/* v8::base::debug::StackTrace::ToString() const */

void __thiscall v8::base::debug::StackTrace::ToString(StackTrace *this)

{
  long lVar1;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_108[0] = (undefined **)0x1c670c8;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
  local_78 = 0xffffffff;
  local_80 = 0;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  local_170 = &PTR__basic_streambuf_01c671a8;
  local_108[0] = &PTR__basic_stringstream_01c66fd8;
  std::__ndk1::locale::locale(alStack_168);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x18;
  local_170 = &PTR__basic_stringbuf_01c67100;
  OutputToStream(this,(basic_ostream *)&local_178);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_178 = &PTR__basic_stringstream_01c66fb0;
  local_108[0] = &PTR__basic_stringstream_01c66fd8;
  if ((local_130 & 1) != 0) {
    local_170 = &PTR__basic_stringbuf_01c67100;
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

