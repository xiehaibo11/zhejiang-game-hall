
/* v8::internal::compiler::Verifier::Visitor::CheckValueInputIs(v8::internal::compiler::Node*, int,
   v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::Verifier::Visitor::CheckValueInputIs
          (Visitor *this,Node *param_1,int param_2,long param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  char *__s;
  byte local_178 [16];
  ulong local_168;
  undefined **local_160;
  undefined **local_158;
  locale alStack_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined **local_f0 [17];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)NodeProperties::GetValueInput(param_1,param_2);
  if (*(int *)(this + 8) == 0) {
    local_160 = (undefined **)plVar2[1];
    if ((local_160 != (undefined **)param_4) &&
       (uVar3 = Type::SlowIs((Type *)&local_160,param_4), (uVar3 & 1) == 0)) {
      local_160 = (undefined **)0x1c6c8a8;
      local_f0[0] = (undefined **)0x1c6c8d0;
      std::__ndk1::ios_base::init((ios_base *)local_f0,&local_158);
      local_60 = 0xffffffff;
      local_160 = &PTR__basic_ostringstream_01c6c858;
      local_f0[0] = &PTR__basic_ostringstream_01c6c880;
      local_158 = &PTR__basic_streambuf_01c671a8;
      local_68 = 0;
      std::__ndk1::locale::locale(alStack_150);
      local_158 = &PTR__basic_stringbuf_01c67100;
      uStack_120 = 0;
      local_128 = 0;
      uStack_130 = 0;
      local_138 = 0;
      uStack_140 = 0;
      local_148 = 0;
      uStack_110 = 0;
      local_118 = 0;
      uStack_100 = 0;
      local_108 = 0;
      local_f8 = 0x10;
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_160,"TypeError: node #",0x11);
      pbVar4 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                          *(uint *)(param_1 + 0x14) & 0xffffff);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,":",1);
      pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,*(Operator **)param_1);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,"(input @",8);
      pbVar4 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,param_2);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4," = ",3);
      pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,*(undefined2 *)(*plVar2 + 0x10));
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,":",1);
      __s = *(char **)(*plVar2 + 8);
      sVar5 = strlen(__s);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,__s,sVar5);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,") type ",7);
      pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,plVar2[1]);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4," is not ",8);
      compiler::operator<<(pbVar4,param_4);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      uVar3 = (ulong)local_178 | 1;
      if ((local_178[0] & 1) != 0) {
        uVar3 = local_168;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("%s",uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

