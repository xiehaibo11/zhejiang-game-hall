
/* v8::internal::compiler::RepresentationChanger::TypeError(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type,
   v8::internal::MachineRepresentation) */

long * __thiscall
v8::internal::compiler::RepresentationChanger::TypeError
          (RepresentationChanger *this,long *param_1,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  basic_ostream *pbVar5;
  undefined8 uVar6;
  byte local_2b8 [16];
  ulong local_2a8;
  byte local_2a0 [16];
  ulong local_290;
  undefined8 local_288;
  undefined **local_280;
  undefined **local_278;
  locale alStack_270 [8];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined **local_210 [17];
  undefined8 local_188;
  undefined4 local_180;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  this[0x19] = (RepresentationChanger)0x1;
  local_288 = param_4;
  if (this[0x18] == (RepresentationChanger)0x0) {
    local_178 = (undefined **)0x1c6c8a8;
    local_108[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
    local_78 = 0xffffffff;
    local_80 = 0;
    local_178 = &PTR__basic_ostringstream_01c6c858;
    local_170 = &PTR__basic_streambuf_01c671a8;
    local_108[0] = &PTR__basic_ostringstream_01c6c880;
    std::__ndk1::locale::locale(alStack_168);
    uStack_138 = 0;
    local_140 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    local_110 = 0x10;
    local_170 = &PTR__basic_stringbuf_01c67100;
    pbVar5 = (basic_ostream *)internal::operator<<(&local_178,param_3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," (",2);
    Type::PrintTo((Type *)&local_288,(basic_ostream *)&local_178);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_178,")",1);
    local_280 = (undefined **)0x1c6c8a8;
    local_210[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_210,&local_278);
    local_180 = 0xffffffff;
    local_188 = 0;
    local_280 = &PTR__basic_ostringstream_01c6c858;
    local_278 = &PTR__basic_streambuf_01c671a8;
    local_210[0] = &PTR__basic_ostringstream_01c6c880;
    std::__ndk1::locale::locale(alStack_270);
    uStack_240 = 0;
    local_248 = 0;
    uStack_250 = 0;
    local_258 = 0;
    uStack_260 = 0;
    local_268 = 0;
    uStack_230 = 0;
    local_238 = 0;
    uStack_220 = 0;
    local_228 = 0;
    local_218 = 0x10;
    local_278 = &PTR__basic_stringbuf_01c67100;
    internal::operator<<(&local_280,param_5);
    uVar3 = *(uint *)((long)param_1 + 0x14);
    uVar6 = *(undefined8 *)(*param_1 + 8);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    uVar1 = (ulong)local_2a0 | 1;
    if ((local_2a0[0] & 1) != 0) {
      uVar1 = local_290;
    }
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    uVar2 = (ulong)local_2b8 | 1;
    if ((local_2b8[0] & 1) != 0) {
      uVar2 = local_2a8;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("RepresentationChangerError: node #%d:%s of %s cannot be changed to %s",
             (ulong)(uVar3 & 0xffffff),uVar6,uVar1,uVar2);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

