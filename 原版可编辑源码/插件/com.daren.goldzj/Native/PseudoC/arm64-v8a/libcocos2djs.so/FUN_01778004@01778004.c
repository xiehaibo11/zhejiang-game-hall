
void FUN_01778004(long param_1,undefined8 *param_2,int param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  basic_ostream *pbVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte local_198 [16];
  ulong local_188;
  undefined **local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined **local_168;
  locale alStack_160 [8];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar4 = param_2 + 4;
  if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
    plVar4 = (long *)(*plVar4 + 0x10);
  }
  puVar7 = (undefined8 *)plVar4[param_3];
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  uVar5 = (ulong)*(uint *)((long)puVar7 + 0x14) & 0xffffff;
  if ((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x18) - lVar1) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = (uint)*(byte *)(lVar1 + uVar5);
  if (uVar6 != (param_4 & 0xff)) {
    local_180 = (undefined **)0x1c670a0;
    local_100[0] = (undefined **)0x1c670c8;
    local_178 = 0;
    local_170 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::ios_base::init((ios_base *)local_100,&local_168);
    local_180 = &PTR__basic_stringstream_01c66f88;
    local_100[0] = &PTR__basic_stringstream_01c66fd8;
    local_70 = 0xffffffff;
    local_168 = &PTR__basic_streambuf_01c671a8;
    local_78 = 0;
    local_170 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::locale::locale(alStack_160);
    local_168 = &PTR__basic_stringbuf_01c67100;
    uStack_130 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_158 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_110 = 0;
    local_118 = 0;
    local_108 = 0x18;
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_170,"TypeError: node #",0x11);
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
                        *(uint *)((long)puVar7 + 0x14) & 0xffffff);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,":",1);
    pbVar3 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar3,(Operator *)*puVar7);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,":",1);
    pbVar3 = (basic_ostream *)v8::internal::operator<<(pbVar3,uVar6);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," which doesn\'t have a ",0x16);
    pbVar3 = (basic_ostream *)v8::internal::operator<<(pbVar3,param_4);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3," representation.",0x10);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    uVar5 = (ulong)local_198 | 1;
    if ((local_198[0] & 1) != 0) {
      uVar5 = local_188;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("%s",uVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

