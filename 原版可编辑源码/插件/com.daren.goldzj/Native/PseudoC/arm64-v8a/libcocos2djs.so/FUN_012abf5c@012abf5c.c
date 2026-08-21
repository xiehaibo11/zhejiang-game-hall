
ulong * FUN_012abf5c(ulong *param_1,Isolate *param_2,int param_3,ulong *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  size_t sVar7;
  basic_ostream *pbVar8;
  long lVar9;
  long lVar10;
  __sFILE *p_Var11;
  ushort uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  ulong *puVar16;
  ushort *puVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined1 auVar20 [16];
  ulong local_160;
  ulong local_158;
  undefined **local_150;
  undefined **ppuStack_148;
  locale alStack_140 [64];
  undefined **local_100 [19];
  char *local_68;
  
  uVar13 = *param_4 & 0xffffffff00000000;
  uVar18 = uVar13 | *(uint *)(*param_4 + 0xf);
  uVar14 = uVar18;
  if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x5b) {
    uVar14 = (ulong)*(uint *)(uVar18 + 0xb);
  }
  puVar5 = param_1;
  if ((int)uVar14 != *(int *)(param_2 + 0xa0)) {
    if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x5b) {
      uVar18 = uVar13 | *(uint *)(uVar18 + 0xb);
    }
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar16 = *(ulong **)(param_2 + 0x95a0);
      puVar5 = (ulong *)0x0;
      if (puVar16 == *(ulong **)(param_2 + 0x95a8)) {
        puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_2);
        puVar16 = puVar5;
      }
      *(ulong **)(param_2 + 0x95a0) = puVar16 + 1;
      *puVar16 = uVar18;
      uVar4 = *(uint *)(uVar18 + 3);
    }
    else {
      puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar18);
      uVar4 = *(uint *)(*puVar5 + 3);
      puVar16 = puVar5;
    }
    if (((uVar4 & 1) == 0) || (uVar4 != *(uint *)(param_2 + 0xa0))) {
      puVar6 = (undefined8 *)v8::internal::Isolate::GetCodeTracer();
      p_Var11 = (__sFILE *)puVar6[0x12];
      if (v8::internal::FLAG_redirect_code_traces != '\0') {
        if (p_Var11 == (__sFILE *)0x0) {
          p_Var11 = (__sFILE *)v8::base::OS::FOpen((char *)*puVar6,"ab");
          puVar6[0x12] = p_Var11;
        }
        *(int *)(puVar6 + 0x13) = *(int *)(puVar6 + 0x13) + 1;
      }
      uVar14 = *puVar16;
      uVar4 = *(uint *)(uVar14 + 7);
      v8::internal::OFStream::OFStream((OFStream *)&local_150,p_Var11);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_150,"--- FUNCTION SOURCE (",0x15);
      if (((uVar4 & 1) != 0) &&
         (uVar14 = uVar14 & 0xffffffff00000000, uVar13 = uVar14 | uVar4,
         *(ushort *)((uVar14 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0x40)) {
        local_158 = uVar13;
        v8::internal::String::ToCString(&local_68,&local_158,1,1,0);
        pcVar15 = local_68;
        sVar7 = strlen(local_68);
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_150,pcVar15,sVar7);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,":",1);
        pcVar15 = local_68;
        local_68 = (char *)0x0;
        if (pcVar15 != (char *)0x0) {
          operator_delete__(pcVar15);
        }
      }
      local_160 = *param_4;
      local_158 = v8::internal::SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_160);
      v8::internal::String::ToCString(&local_68,&local_158,1,1,0);
      pcVar15 = local_68;
      sVar7 = strlen(local_68);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_150,pcVar15,sVar7);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,") id{",5);
      pcVar15 = local_68;
      local_68 = (char *)0x0;
      if (pcVar15 != (char *)0x0) {
        operator_delete__(pcVar15);
      }
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150,
                          (int)param_1[0xe]);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,",",1);
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,param_3);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar8,"} start{",8);
      local_68 = (char *)*param_4;
      iVar2 = v8::internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_68);
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150,iVar2);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"} ---\n",6)
      ;
      local_68 = (char *)*param_4;
      iVar3 = v8::internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_68);
      local_68 = (char *)*param_4;
      iVar2 = v8::internal::SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_68);
      iVar2 = iVar2 - iVar3;
      pcVar15 = (char *)(*puVar16 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar16 + 3));
      if (iVar2 == -1) {
        iVar2 = *(int *)(pcVar15 + 7);
      }
      local_68 = pcVar15;
      auVar20 = v8::internal::String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
      lVar9 = auVar20._0_8_;
      local_68 = pcVar15;
      lVar10 = v8::internal::String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
      if ((lVar9 != lVar10) || (iVar2 != 0)) {
        pbVar19 = (byte *)(lVar9 + iVar3);
        puVar17 = (ushort *)(lVar9 + (long)iVar3 * 2);
        iVar2 = iVar2 + -1;
        do {
          if ((auVar20._8_8_ & 0xffffffff00000000) == 0x100000000) {
            uVar12 = (ushort)*pbVar19;
          }
          else {
            uVar12 = *puVar17;
          }
          local_68 = (char *)CONCAT62(local_68._2_6_,uVar12);
          v8::internal::operator<<((basic_ostream *)&local_150,(AsReversiblyEscapedUC16 *)&local_68)
          ;
          bVar1 = iVar2 != 0;
          iVar2 = iVar2 + -1;
          pbVar19 = pbVar19 + 1;
          puVar17 = puVar17 + 1;
        } while ((lVar9 != lVar10) || (bVar1));
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_150,"\n--- END ---\n",0xd);
      local_150 = &PTR__OFStream_01ca1000;
      local_100[0] = &PTR__OFStream_01ca1028;
      ppuStack_148 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_140);
      puVar5 = (ulong *)std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
      if ((v8::internal::FLAG_redirect_code_traces != '\0') &&
         (iVar2 = *(int *)(puVar6 + 0x13), *(int *)(puVar6 + 0x13) = iVar2 + -1, iVar2 + -1 == 0)) {
        uVar4 = fclose((FILE *)puVar6[0x12]);
        puVar5 = (ulong *)(ulong)uVar4;
        puVar6[0x12] = 0;
      }
    }
  }
  return puVar5;
}

