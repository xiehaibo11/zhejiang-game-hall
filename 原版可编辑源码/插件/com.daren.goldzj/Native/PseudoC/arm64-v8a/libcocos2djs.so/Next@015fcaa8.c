
/* WARNING: Removing unreachable block (ram,0x015fcc98) */
/* v8::internal::wasm::StreamingDecoder::DecodeVarInt32::Next(v8::internal::wasm::StreamingDecoder*)
    */

void v8::internal::wasm::StreamingDecoder::DecodeVarInt32::Next(StreamingDecoder *param_1)

{
  long lVar1;
  basic_ostream *pbVar2;
  long *plVar3;
  long *in_x1;
  undefined8 *in_x8;
  byte local_1c0;
  void *local_1b0;
  int local_1a8 [2];
  byte local_1a0;
  void *local_190;
  undefined **local_188;
  undefined **local_180;
  locale alStack_178 [8];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined **local_118 [17];
  undefined8 local_90;
  undefined4 local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*in_x1 == 0) {
    *in_x8 = 0;
  }
  else if (*(ulong *)(param_1 + 0x18) < *(ulong *)(param_1 + 0x28)) {
    local_188 = (undefined **)0x1c6c8a8;
    local_118[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
    local_88 = 0xffffffff;
    local_188 = &PTR__basic_ostringstream_01c6c858;
    local_118[0] = &PTR__basic_ostringstream_01c6c880;
    local_180 = &PTR__basic_streambuf_01c671a8;
    local_90 = 0;
    std::__ndk1::locale::locale(alStack_178);
    local_180 = &PTR__basic_stringbuf_01c67100;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (void *)0x0;
    local_120 = 0x10;
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_188,"function size > maximum function size: ",0x27);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(ulong *)(param_1 + 0x28));
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2," < ",3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
               *(ulong *)(param_1 + 0x18));
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    local_190 = local_1b0;
    local_1a0 = local_1c0;
    local_1a8[0] = *(int *)((long)in_x1 + 0x2c) + -1;
    uStack_78 = 0;
    local_80 = 0;
    uStack_79 = 0;
    plVar3 = (long *)*in_x1;
    if (plVar3 == (long *)0x0) {
      *in_x1 = 0;
    }
    else {
      (**(code **)(*plVar3 + 0x40))(plVar3,local_1a8);
      plVar3 = (long *)*in_x1;
      *in_x1 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    *in_x8 = 0;
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190);
    }
    local_188 = &PTR__basic_ostringstream_01c6c858;
    local_118[0] = &PTR__basic_ostringstream_01c6c880;
    local_180 = &PTR__basic_stringbuf_01c67100;
    if ((local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    local_180 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_178);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x30))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

