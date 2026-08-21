
/* v8::internal::Isolate::AddCrashKeysForIsolateAndHeapPointers() */

void __thiscall v8::internal::Isolate::AddCrashKeysForIsolateAndHeapPointers(Isolate *this)

{
  long lVar1;
  basic_ostream *pbVar2;
  code *pcVar3;
  ulong uVar4;
  byte local_1a0 [16];
  void *local_190;
  undefined **local_188;
  undefined8 local_180;
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
  pcVar3 = *(code **)(this + 0xc7f0);
  local_108[0] = (undefined **)0x1c670c8;
  local_188 = (undefined **)0x1c670a0;
  local_180 = 0;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
  local_78 = 0xffffffff;
  local_80 = 0;
  local_188 = &PTR__basic_stringstream_01c66f88;
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
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_178,"0x",2);
  *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) =
       *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) & 0xffffffb5 | 8;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,(ulong)this);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_188 = &PTR__basic_stringstream_01c66f88;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  local_108[0] = &PTR__basic_stringstream_01c66fd8;
  if ((local_130 & 1) != 0) {
    local_170 = &PTR__basic_stringbuf_01c67100;
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  (*pcVar3)(0,local_1a0);
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  pcVar3 = *(code **)(this + 0xc7f0);
  uVar4 = *(ulong *)(*(long *)(this + 0x8970) + 0x20);
  local_180 = 0;
  local_108[0] = (undefined **)0x1c670c8;
  local_188 = (undefined **)0x1c670a0;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
  local_78 = 0xffffffff;
  local_80 = 0;
  local_188 = &PTR__basic_stringstream_01c66f88;
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
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_178,"0x",2);
  *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) =
       *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) & 0xffffffb5 | 8;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,uVar4);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_188 = &PTR__basic_stringstream_01c66f88;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  local_108[0] = &PTR__basic_stringstream_01c66fd8;
  if ((local_130 & 1) != 0) {
    local_170 = &PTR__basic_stringbuf_01c67100;
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  (*pcVar3)(1,local_1a0);
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  pcVar3 = *(code **)(this + 0xc7f0);
  uVar4 = *(ulong *)(*(long *)(this + 0x8950) + 0x20);
  local_180 = 0;
  local_108[0] = (undefined **)0x1c670c8;
  local_188 = (undefined **)0x1c670a0;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
  local_78 = 0xffffffff;
  local_80 = 0;
  local_188 = &PTR__basic_stringstream_01c66f88;
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
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_178,"0x",2);
  *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) =
       *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) & 0xffffffb5 | 8;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,uVar4);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_188 = &PTR__basic_stringstream_01c66f88;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  local_108[0] = &PTR__basic_stringstream_01c66fd8;
  if ((local_130 & 1) != 0) {
    local_170 = &PTR__basic_stringbuf_01c67100;
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  (*pcVar3)(2,local_1a0);
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  pcVar3 = *(code **)(this + 0xc7f0);
  uVar4 = *(ulong *)(*(long *)(this + 0x8948) + 0x20);
  local_180 = 0;
  local_108[0] = (undefined **)0x1c670c8;
  local_188 = (undefined **)0x1c670a0;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
  local_78 = 0xffffffff;
  local_80 = 0;
  local_188 = &PTR__basic_stringstream_01c66f88;
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
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_178,"0x",2);
  *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) =
       *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) & 0xffffffb5 | 8;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,uVar4);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_188 = &PTR__basic_stringstream_01c66f88;
  local_178 = &PTR__basic_stringstream_01c66fb0;
  local_108[0] = &PTR__basic_stringstream_01c66fd8;
  if ((local_130 & 1) != 0) {
    local_170 = &PTR__basic_stringbuf_01c67100;
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  (*pcVar3)(3,local_1a0);
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

