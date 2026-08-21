
void FUN_00f3d2a8(basic_ostream *param_1,byte *param_2,ulong param_3,uint param_4)

{
  char *pcVar1;
  long lVar2;
  basic_ostream *pbVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  byte local_1a0 [8];
  ulong local_198;
  char *local_190;
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
  byte local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (param_3 != 0) {
    if ((v8::internal::FLAG_mock_arraybuffer_allocator == '\0') || ((param_4 & 1) != 0)) {
      bVar6 = *param_2;
      bVar5 = 0;
      uVar4 = 0;
      uVar7 = 1;
      if (param_3 < 2) goto LAB_00f3d3f4;
      do {
        bVar5 = param_2[uVar7];
LAB_00f3d3f4:
        do {
          if ((param_3 == uVar7) || (bVar6 != bVar5)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_180 = 0;
            local_188 = (undefined **)0x1c670a0;
            local_108[0] = (undefined **)0x1c670c8;
            local_178 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
            local_78 = 0xffffffff;
            local_188 = &PTR__basic_stringstream_01c66f88;
            local_108[0] = &PTR__basic_stringstream_01c66fd8;
            local_80 = 0;
            local_170 = &PTR__basic_streambuf_01c671a8;
            local_178 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_168);
            uStack_148 = 0;
            local_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_158 = 0;
            local_160 = 0;
            local_170 = &PTR__basic_stringbuf_01c67100;
            uStack_128 = 0;
            local_130 = 0;
            uStack_118 = 0;
            local_120 = (void *)0x0;
            local_110 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,uVar4);
            if (uVar7 - 1 != uVar4) {
              local_1a0[0] = 0x2d;
              pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 ((basic_ostream *)&local_178,(char *)local_1a0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar7 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar1 = (char *)((ulong)local_1a0 | 1);
            uVar4 = (ulong)(local_1a0[0] >> 1);
            if ((local_1a0[0] & 1) != 0) {
              pcVar1 = local_190;
              uVar4 = local_198;
            }
            pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (param_1,pcVar1,uVar4);
            pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar3,": ",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,(uint)bVar6);
            if ((local_1a0[0] & 1) != 0) {
              operator_delete(local_190);
            }
            local_188 = &PTR__basic_stringstream_01c66f88;
            local_178 = &PTR__basic_stringstream_01c66fb0;
            local_108[0] = &PTR__basic_stringstream_01c66fd8;
            local_170 = &PTR__basic_stringbuf_01c67100;
            if ((local_130 & 1) != 0) {
              operator_delete(local_120);
            }
            local_170 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_168);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
            uVar4 = uVar7;
            bVar6 = bVar5;
          }
          uVar7 = uVar7 + 1;
          if (param_3 < uVar7) goto LAB_00f3d578;
        } while (param_3 <= uVar7);
      } while( true );
    }
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n    0-",7);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,param_3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3,": <mocked array buffer bytes>",0x1d);
  }
LAB_00f3d578:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

