
void FUN_01777d08(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  basic_ostream *pbVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
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
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar5 = param_2 + 4;
  if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
    plVar5 = (long *)(*plVar5 + 0x10);
  }
  puVar7 = (undefined8 *)plVar5[param_3];
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  uVar6 = (ulong)*(uint *)((long)puVar7 + 0x14) & 0xffffff;
  if ((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x18) - lVar1) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  cVar2 = *(char *)(lVar1 + uVar6);
  if (cVar2 != '\x05') {
    if (cVar2 == '\0') {
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
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_150,"TypeError: node #",0x11);
      pbVar4 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                          *(uint *)((long)puVar7 + 0x14) & 0xffffff);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,":",1);
      pbVar4 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar4,(Operator *)*puVar7);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar4," is untyped.",0xc);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
    }
    else {
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
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_150,"TypeError: node #",0x11);
      pbVar4 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                          *(uint *)((long)param_2 + 0x14) & 0xffffff);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,":",1);
      pbVar4 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar4,(Operator *)*param_2);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4," uses node #",0xc);
      pbVar4 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                          *(uint *)((long)puVar7 + 0x14) & 0xffffff);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,":",1);
      pbVar4 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar4,(Operator *)*puVar7);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,":",1);
      pbVar4 = (basic_ostream *)v8::internal::operator<<(pbVar4,cVar2);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar4," which doesn\'t have a kWord64 representation.",0x2d);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
    }
    uVar6 = (ulong)local_168 | 1;
    if ((local_168[0] & 1) != 0) {
      uVar6 = local_158;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("%s",uVar6);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

