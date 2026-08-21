
/* v8::internal::PropertyArray::PropertyArrayPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::PropertyArray::PropertyArrayPrint(PropertyArray *this,basic_ostream *param_1)

{
  char *pcVar1;
  long lVar2;
  basic_ostream *pbVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
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
  HeapObject::PrintHeader((HeapObject *)this,param_1,"PropertyArray");
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - length: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
             *(uint *)(*(long *)this + 3) >> 1 & 0x3ff);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - hash: ",10);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
             *(uint *)(*(long *)this + 3) >> 0xb & 0xfffff);
  uVar9 = *(ulong *)this;
  uVar4 = *(uint *)(uVar9 + 3);
  if ((uVar4 & 0x7fe) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 7);
  }
  uVar11 = uVar4 >> 1 & 0x3ff;
  if (uVar11 != 0) {
    uVar5 = (ulong)uVar11;
    uVar6 = 0;
    uVar11 = 0;
    uVar10 = 0;
    puVar7 = (uint *)(uVar9 + 0xb);
    do {
      if (uVar6 + 1 < uVar5) {
        uVar10 = uVar9 & 0xffffffff00000000 | (ulong)*puVar7;
      }
      if ((uVar6 + 1 == uVar5) || ((int)uVar8 != (int)uVar10)) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
        local_188 = (undefined **)0x1c670a0;
        local_108[0] = (undefined **)0x1c670c8;
        local_180 = 0;
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
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,uVar11);
        if (uVar6 != uVar11) {
          local_1a0[0] = 0x2d;
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_178,(char *)local_1a0,1);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,(int)uVar6);
        }
        *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        pcVar1 = (char *)((ulong)local_1a0 | 1);
        uVar5 = (ulong)(local_1a0[0] >> 1);
        if ((local_1a0[0] & 1) != 0) {
          pcVar1 = local_190;
          uVar5 = local_198;
        }
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,pcVar1,uVar5);
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar3,": ",2);
        local_1a8 = uVar8;
        internal::operator<<(pbVar3,(Brief *)&local_1a8);
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
        uVar4 = *(uint *)(uVar9 + 3);
        uVar11 = (int)uVar6 + 1;
        uVar8 = uVar10;
      }
      uVar5 = (ulong)(uVar4 >> 1 & 0x3ff);
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 < uVar5);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

