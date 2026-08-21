
void FUN_00f3df44(basic_ostream *param_1,ulong param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  basic_ostream *pbVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong local_1b0;
  ulong local_1a8;
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
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_1b0 = param_2;
  v8::internal::HeapObject::PrintHeader((HeapObject *)&local_1b0,param_1,param_3);
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - length: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,*(int *)(param_2 + 3) >> 1
            );
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - scope_info: ",0x10);
  local_188 = (undefined **)v8::internal::Context::scope_info((Context *)&local_1b0);
  v8::internal::operator<<(pbVar6,(Brief *)&local_188);
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - previous: ",0xe);
  local_188 = (undefined **)(local_1b0 & 0xffffffff00000000 | (ulong)*(uint *)(local_1b0 + 0xb));
  v8::internal::operator<<(pbVar6,(Brief *)&local_188);
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - native_context: ",0x14);
  local_188 = (undefined **)
              (local_1b0 & 0xffffffff00000000 |
              (ulong)*(uint *)((local_1b0 & 0xffffffff00000000 | (ulong)*(uint *)(local_1b0 - 1)) +
                              0x13));
  v8::internal::operator<<(pbVar6,(Brief *)&local_188);
  uVar5 = local_1b0;
  uVar7 = *(uint *)(local_1b0 + 3);
  if (1 < (int)uVar7) {
    lVar1 = local_1b0 + 7;
    uVar9 = local_1b0 & 0xffffffff00000000;
    uVar10 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar8 = uVar7 >> 1;
    iVar12 = 4;
    uVar13 = uVar9 | *(uint *)(local_1b0 + 7);
    do {
      if ((long)(uVar10 + 1) < (long)(int)uVar8) {
        uVar11 = uVar9 | *(uint *)(lVar1 + iVar12);
      }
      if ((uVar10 + 1 == (ulong)uVar8) || ((int)uVar13 != (int)uVar11)) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
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
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,uVar14);
        if (uVar10 != uVar14) {
          local_1a0[0] = 0x2d;
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_178,(char *)local_1a0,1);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,(int)uVar10);
        }
        *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        pcVar2 = (char *)((ulong)local_1a0 | 1);
        uVar4 = (ulong)(local_1a0[0] >> 1);
        if ((local_1a0[0] & 1) != 0) {
          pcVar2 = local_190;
          uVar4 = local_198;
        }
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,pcVar2,uVar4);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,": ",2);
        local_1a8 = uVar13;
        v8::internal::operator<<(pbVar6,(Brief *)&local_1a8);
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
        uVar14 = (int)uVar10 + 1;
        uVar7 = *(uint *)(uVar5 + 3);
        uVar13 = uVar11;
      }
      uVar8 = (int)uVar7 >> 1;
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + 4;
    } while ((long)uVar10 < (long)(int)uVar8);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

