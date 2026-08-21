
/* v8::internal::TransitionsAccessor::PrintTransitionTree(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, int,
   v8::internal::PerThreadAssertScopeDebugOnly<(v8::internal::PerThreadAssertType)0, false>*) */

void __thiscall
v8::internal::TransitionsAccessor::PrintTransitionTree
          (TransitionsAccessor *this,basic_ostream *param_1,int param_2,
          PerThreadAssertScopeDebugOnly *param_3)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  basic_ostream *pbVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  char *local_1b0;
  ulong local_1a8;
  char *local_1a0;
  char *local_198;
  int local_190;
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
  lVar8 = *(long *)this;
  uVar4 = NumberOfTransitions(this);
  if (0 < (int)uVar4) {
    uVar11 = 0;
    iVar10 = 0xc;
    do {
      if (*(int *)(this + 0x20) == 3) {
        pcVar14 = (char *)(*(ulong *)(this + 0x18) & 0xfffffffffffffffd);
        uVar9 = *(ulong *)(this + 0x18) & 0xffffffff00000000;
        pcVar13 = (char *)(uVar9 | *(uint *)((uVar9 | *(uint *)(pcVar14 + 0x17)) +
                                             ((long)(int)((*(uint *)(pcVar14 + 0xb) >> 10 & 0x3ff) -
                                                         1) * 0xc00000000 + 0x1000000000 >> 0x20) +
                                            -1));
      }
      else {
        if (*(int *)(this + 0x20) != 4) goto LAB_00f3fcd4;
        uVar9 = *(ulong *)(this + 0x18);
        pcVar13 = (char *)(uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + (long)(iVar10 + 3))
                          );
        pcVar14 = (char *)(uVar9 & 0xffffffff00000000 |
                          (ulong)*(uint *)(uVar9 + (long)iVar10 + 7) & 0xfffffffd);
      }
      std::__ndk1::ios_base::getloc();
      plVar5 = (long *)std::__ndk1::locale::use_facet
                                 ((locale *)&local_188,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
      std::__ndk1::locale::~locale((locale *)&local_188);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"  ",2);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,param_2);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"/",1);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,(int)uVar11);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,":",1);
      *(long *)(pbVar6 + *(long *)(*(long *)pbVar6 + -0x18) + 0x18) = (long)(param_2 * 2 + 2);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6," ",1);
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
      local_1b0 = pcVar14;
      internal::operator<<((basic_ostream *)&local_178,(Brief *)&local_1b0);
      *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) =
           *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) & 0xffffff4f | 0x20;
      *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0x32;
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pcVar1 = (char *)((ulong)&local_1b0 | 1);
      uVar9 = (ulong)local_1b0 >> 1 & 0x7f;
      if (((ulong)local_1b0 & 1) != 0) {
        pcVar1 = local_1a0;
        uVar9 = local_1a8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar1,uVar9);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,": ",2);
      if (((ulong)local_1b0 & 1) != 0) {
        operator_delete(local_1a0);
      }
      iVar12 = (int)pcVar13;
      if (iVar12 == *(int *)(lVar8 + 0xb98)) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"to non-extensible",0x11);
      }
      else if (iVar12 == *(int *)(lVar8 + 0xbe0)) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"to sealed ",10);
      }
      else if (iVar12 == *(int *)(lVar8 + 0xb68)) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"to frozen",9);
      }
      else if (iVar12 == *(int *)(lVar8 + 0xb48)) {
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"to ",3);
        pcVar13 = (char *)ElementsKindToString((byte)pcVar14[10] >> 3);
        sVar7 = strlen(pcVar13);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar6,pcVar13,sVar7);
      }
      else if (iVar12 == *(int *)(lVar8 + 0xbf0)) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"to strict function",0x12);
      }
      else {
        local_1b0 = pcVar13;
        if (*(ushort *)(((ulong)pcVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(pcVar13 + -1))
            < 0x40) {
          String::StringPrint((String *)&local_1b0,param_1);
        }
        else {
          internal::operator<<(param_1,(Brief *)&local_1b0);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"to ",3);
        local_1b0 = (char *)((ulong)pcVar14 & 0xffffffff00000000 | (ulong)*(uint *)(pcVar14 + 0x17))
        ;
        DescriptorArray::PrintDescriptorDetails
                  ((DescriptorArray *)&local_1b0,param_1,
                   (long)(int)((*(uint *)(pcVar14 + 0xb) >> 10 & 0x3ff) - 1),1);
      }
      local_1b0 = *(char **)this;
      local_1a8 = 0;
      local_198 = local_1b0 + *(uint *)(pcVar14 + 0x23);
      iVar12 = 1;
      local_1a0 = pcVar14;
      if ((((ulong)local_198 & 1) != 0) && ((int)local_198 != 3)) {
        uVar9 = (ulong)local_198 & 3;
        iVar12 = (int)uVar9;
        if (uVar9 != 3) {
          if (uVar9 != 1) {
LAB_00f3fcd4:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar9 = (ulong)local_198 & 0xffffffff00000000 | 7;
          if (*(short *)(uVar9 + *(uint *)(local_198 + -1)) == 0x98) {
            iVar12 = 4;
          }
          else {
            iVar12 = (uint)(*(short *)(uVar9 + *(uint *)(local_198 + -1)) != 100) << 1;
          }
        }
      }
      local_190 = iVar12;
      PrintTransitionTree((TransitionsAccessor *)&local_1b0,param_1,param_2 + 1,param_3);
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
      uVar11 = uVar11 + 1;
      iVar10 = iVar10 + 8;
    } while (uVar4 != uVar11);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

