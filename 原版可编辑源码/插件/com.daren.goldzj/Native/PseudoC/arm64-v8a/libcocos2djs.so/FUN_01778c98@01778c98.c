
void FUN_01778c98(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  basic_ostream *pbVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
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
  plVar4 = param_2 + 4;
  if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
    plVar4 = (long *)(*plVar4 + 0x10);
  }
  puVar6 = (undefined8 *)plVar4[param_3];
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  uVar5 = (ulong)*(uint *)((long)puVar6 + 0x14) & 0xffffff;
  if ((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x18) - lVar1) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(lVar1 + uVar5) != '\v') {
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
                       ((basic_ostream *)&local_150,"TypeError: node #",0x11);
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
                        *(uint *)((long)puVar6 + 0x14) & 0xffffff);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,":",1);
    pbVar3 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar3,(Operator *)*puVar6);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3," which doesn\'t have a kFloat32 representation.",0x2e);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    uVar5 = (ulong)local_168 | 1;
    if ((local_168[0] & 1) != 0) {
      uVar5 = local_158;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("%s",uVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

