
void FUN_017787dc(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  basic_ostream *pbVar3;
  char *pcVar4;
  undefined8 *puVar5;
  uint uVar7;
  ulong uVar8;
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
  long *plVar6;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar6 = param_2 + 4;
  if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
    plVar6 = (long *)(*plVar6 + 0x10);
  }
  puVar5 = (undefined8 *)plVar6[param_3];
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  uVar8 = (ulong)*(uint *)((long)puVar5 + 0x14) & 0xffffff;
  if ((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x18) - lVar1) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = (uint)*(byte *)(lVar1 + uVar8);
  if (3 < uVar7 - 1) {
    if (uVar7 == 0) {
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
                          *(uint *)((long)puVar5 + 0x14) & 0xffffff);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,":",1);
      pbVar3 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar3,(Operator *)*puVar5);
      pcVar4 = " is untyped.";
      uVar8 = 0xc;
    }
    else {
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
                          *(uint *)((long)param_2 + 0x14) & 0xffffff);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,":",1);
      pbVar3 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar3,(Operator *)*param_2);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3," uses node #",0xc);
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                          *(uint *)((long)puVar5 + 0x14) & 0xffffff);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,":",1);
      pbVar3 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar3,(Operator *)*puVar5);
      pcVar4 = " which doesn\'t have an int32-compatible representation.";
      uVar8 = 0x37;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar4,uVar8);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    uVar8 = (ulong)local_158 | 1;
    if ((local_158[0] & 1) != 0) {
      uVar8 = local_148;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("%s",uVar8);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

