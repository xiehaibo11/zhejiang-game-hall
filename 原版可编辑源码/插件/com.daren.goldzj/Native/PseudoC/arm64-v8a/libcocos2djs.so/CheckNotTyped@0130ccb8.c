
/* v8::internal::compiler::Verifier::Visitor::CheckNotTyped(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Verifier::Visitor::CheckNotTyped(Visitor *this,Node *param_1)

{
  ulong uVar1;
  long lVar2;
  basic_ostream *pbVar3;
  byte local_158 [16];
  ulong local_148;
  undefined **local_140;
  undefined **local_138;
  locale alStack_130 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined **local_d0 [17];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    local_140 = (undefined **)0x1c6c8a8;
    local_d0[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_d0,&local_138);
    local_40 = 0xffffffff;
    local_140 = &PTR__basic_ostringstream_01c6c858;
    local_d0[0] = &PTR__basic_ostringstream_01c6c880;
    local_138 = &PTR__basic_streambuf_01c671a8;
    local_48 = 0;
    std::__ndk1::locale::locale(alStack_130);
    local_138 = &PTR__basic_stringbuf_01c67100;
    uStack_100 = 0;
    local_108 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    local_d8 = 0x10;
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_140,"TypeError: node #",0x11);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(uint *)(param_1 + 0x14) & 0xffffff);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,":",1);
    pbVar3 = (basic_ostream *)compiler::operator<<(pbVar3,*(Operator **)param_1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3," should never have a type",0x19);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    uVar1 = (ulong)local_158 | 1;
    if ((local_158[0] & 1) != 0) {
      uVar1 = local_148;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("%s",uVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

