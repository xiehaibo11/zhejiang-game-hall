
/* v8::internal::compiler::JsonPrintFunctionSource(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, int, std::__ndk1::unique_ptr<char [],
   std::__ndk1::default_delete<char []> >, v8::internal::Handle<v8::internal::Script>,
   v8::internal::Isolate*, v8::internal::Handle<v8::internal::SharedFunctionInfo>, bool) */

void v8::internal::compiler::JsonPrintFunctionSource
               (basic_ostream *param_1,int param_2,undefined8 *param_3,ulong *param_4,long param_5,
               undefined8 *param_6,uint param_7)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  basic_ostream *pbVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  ushort uVar11;
  undefined **ppuVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  ushort *puVar17;
  undefined1 auVar18 [16];
  char *local_198;
  ulong local_190;
  char *local_188;
  ulong local_180;
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
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if ((param_7 & 1) != 0) {
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\"",1);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,param_2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\" : ",4);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"{ ",2);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\"sourceId\": ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,param_2);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,", \"functionName\": \"",0x13);
  pcVar13 = (char *)*param_3;
  sVar8 = strlen(pcVar13);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7,pcVar13,sVar8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\" ",2);
  if (((param_4 == (ulong *)0x0) || (param_6 == (undefined8 *)0x0)) ||
     (uVar14 = *param_4, (int)uVar14 == *(int *)(param_5 + 0xa0))) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,", \"sourceName\": \"\"",0x12);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,", \"sourceText\": \"\"",0x12);
    iVar5 = 0;
    iVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(uVar14 + 7);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,", \"sourceName\": \"",0x11);
    if (((uVar1 & 1) != 0) &&
       (uVar15 = uVar14 & 0xffffffff00000000 | (ulong)uVar1,
       *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) < 0x40)) {
      local_178 = (undefined **)0x1c6c8a8;
      local_108[0] = (undefined **)0x1c6c8d0;
      std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
      local_78 = 0xffffffff;
      local_178 = &PTR__basic_ostringstream_01c6c858;
      local_108[0] = &PTR__basic_ostringstream_01c6c880;
      local_170 = &PTR__basic_streambuf_01c671a8;
      local_80 = 0;
      std::__ndk1::locale::locale(alStack_168);
      local_110 = 0x10;
      local_170 = &PTR__basic_stringbuf_01c67100;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (void *)0x0;
      local_180 = uVar15;
      String::ToCString(&local_198,&local_180,1,1,0);
      pcVar13 = local_198;
      sVar8 = strlen(local_198);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_178,pcVar13,sVar8);
      pcVar13 = local_198;
      local_198 = (char *)0x0;
      if (pcVar13 != (char *)0x0) {
        operator_delete__(pcVar13);
      }
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pcVar13 = (char *)((ulong)&local_198 | 1);
      uVar14 = (ulong)local_198 >> 1 & 0x7f;
      if (((ulong)local_198 & 1) != 0) {
        pcVar13 = local_188;
        uVar14 = local_190;
      }
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        JSONEscaped::PipeCharacter(param_1,*pcVar13);
        pcVar13 = pcVar13 + 1;
      }
      if (((ulong)local_198 & 1) != 0) {
        operator_delete(local_188);
      }
      local_178 = &PTR__basic_ostringstream_01c6c858;
      local_108[0] = &PTR__basic_ostringstream_01c6c880;
      local_170 = &PTR__basic_stringbuf_01c67100;
      if ((local_130 & 1) != 0) {
        operator_delete(local_120);
      }
      local_170 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_168);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\"",1);
    local_178 = (undefined **)*param_6;
    iVar4 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_178);
    local_178 = (undefined **)*param_6;
    iVar5 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_178);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,", \"sourceText\": \"",0x11);
    local_178 = (undefined **)*param_6;
    iVar6 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_178);
    iVar6 = iVar6 - iVar4;
    ppuVar12 = (undefined **)(*param_4 & 0xffffffff00000000 | (ulong)*(uint *)(*param_4 + 3));
    if (iVar6 == -1) {
      iVar6 = *(int *)((long)ppuVar12 + 7);
    }
    local_178 = ppuVar12;
    auVar18 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_178);
    lVar9 = auVar18._0_8_;
    local_178 = ppuVar12;
    lVar10 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_178);
    if ((lVar9 != lVar10) || (iVar6 != 0)) {
      pbVar16 = (byte *)(lVar9 + iVar4);
      puVar17 = (ushort *)(lVar9 + (long)iVar4 * 2);
      iVar6 = iVar6 + -1;
      do {
        if ((auVar18._8_8_ & 0xffffffff00000000) == 0x100000000) {
          uVar11 = (ushort)*pbVar16;
        }
        else {
          uVar11 = *puVar17;
        }
        local_178 = (undefined **)CONCAT62(local_178._2_6_,uVar11);
        internal::operator<<(param_1,(AsEscapedUC16ForJSON *)&local_178);
        bVar3 = iVar6 != 0;
        iVar6 = iVar6 + -1;
        pbVar16 = pbVar16 + 1;
        puVar17 = puVar17 + 1;
      } while ((lVar9 != lVar10) || (bVar3));
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\"",1);
  }
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,", \"startPosition\": ",0x13);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,iVar4);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,", \"endPosition\": ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,iVar5);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

