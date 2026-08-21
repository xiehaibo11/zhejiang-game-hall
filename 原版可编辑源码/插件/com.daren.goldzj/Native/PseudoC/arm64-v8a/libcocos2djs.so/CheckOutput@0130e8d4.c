
/* v8::internal::compiler::Verifier::Visitor::CheckOutput(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int, char const*) */

void __thiscall
v8::internal::compiler::Verifier::Visitor::CheckOutput
          (Visitor *this,Node *param_1,Node *param_2,int param_3,char *param_4)

{
  ulong uVar1;
  long lVar2;
  basic_ostream *pbVar3;
  size_t sVar4;
  byte local_168 [16];
  ulong local_158;
  undefined **local_150;
  undefined **local_148;
  locale alStack_140 [8];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined **local_e0 [17];
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 < 1) {
    local_150 = (undefined **)0x1c6c8a8;
    local_e0[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_e0,&local_148);
    local_50 = 0xffffffff;
    local_150 = &PTR__basic_ostringstream_01c6c858;
    local_e0[0] = &PTR__basic_ostringstream_01c6c880;
    local_148 = &PTR__basic_streambuf_01c671a8;
    local_58 = 0;
    std::__ndk1::locale::locale(alStack_140);
    local_148 = &PTR__basic_stringbuf_01c67100;
    uStack_110 = 0;
    local_118 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    local_e8 = 0x10;
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_150,"GraphError: node #",0x12);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(uint *)(param_1 + 0x14) & 0xffffff);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,":",1);
    pbVar3 = (basic_ostream *)compiler::operator<<(pbVar3,*(Operator **)param_1);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," does not produce ",0x12);
    sVar4 = strlen(param_4);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,param_4,sVar4);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," output used by node #",0x16);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(uint *)(param_2 + 0x14) & 0xffffff);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,":",1);
    compiler::operator<<(pbVar3,*(Operator **)param_2);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    uVar1 = (ulong)local_168 | 1;
    if ((local_168[0] & 1) != 0) {
      uVar1 = local_158;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("%s",uVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

