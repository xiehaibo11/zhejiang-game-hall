
/* v8::internal::ScopeInfo::ScopeInfoPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::ScopeInfo::ScopeInfoPrint(ScopeInfo *this,basic_ostream *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  basic_ostream *pbVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  ulong local_68;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"ScopeInfo");
  uVar10 = *(uint *)(*(long *)this + 3);
  if (uVar10 < 2) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - length = 0\n",0xf);
    return;
  }
  if ((int)uVar10 < 2) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(int *)(*(long *)this + 7) >> 1;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - parameters: ",0x10);
  if (*(int *)(*(long *)this + 3) < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(long *)this + 0xb) >> 1;
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar4);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - context locals : ",0x15);
  if (*(int *)(*(long *)this + 3) < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(long *)this + 0xf) >> 1;
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar4);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - scope type: ",0x10);
  uVar3 = scope_type(this);
  internal::operator<<(pbVar5,uVar3);
  uVar6 = SloppyEvalCanExtendVars(this);
  if ((uVar6 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - sloppy eval",0xf);
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - language mode: ",0x13);
  uVar6 = language_mode(this);
  pcVar11 = "strict";
  if ((uVar6 & 1) == 0) {
    pcVar11 = "sloppy";
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar11,6);
  uVar6 = is_declaration_scope(this);
  if ((uVar6 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - declaration scope",0x15);
  }
  uVar6 = HasReceiver(this);
  if ((uVar6 & 1) != 0) {
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - receiver: ",0xe);
    internal::operator<<(pbVar5,uVar10 >> 7 & 3);
  }
  uVar6 = HasClassBrand(this);
  if ((uVar6 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - has class brand",0x13);
  }
  uVar6 = HasSavedClassVariableIndex(this);
  if ((uVar6 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - has saved class variable index",0x22);
  }
  uVar6 = HasNewTarget(this);
  if ((uVar6 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - needs new target",0x14);
  }
  uVar6 = HasFunctionName(this);
  if ((uVar6 & 1) != 0) {
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - function name(",0x12);
    pbVar5 = (basic_ostream *)internal::operator<<(pbVar5,uVar10 >> 0xc & 3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"): ",3);
    local_68 = FunctionName(this);
    Object::ShortPrint((Object *)&local_68,param_1);
  }
  lVar8 = *(long *)this;
  if (1 < *(int *)(lVar8 + 3)) {
    if ((*(uint *)(lVar8 + 7) >> 0x10 & 1) != 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"\n - asm module",0xe);
      lVar8 = *(long *)this;
    }
    if ((1 < *(int *)(lVar8 + 3)) && ((*(uint *)(lVar8 + 7) >> 0x11 & 1) != 0)) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"\n - simple parameters",0x15);
    }
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - function kind: ",0x13);
  bVar2 = function_kind(this);
  if (bVar2 < 0x13) {
    pcVar11 = (&PTR_s_NormalFunction_01ca4d58)[(char)bVar2];
    sVar7 = strlen(pcVar11);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar11,sVar7)
    ;
    uVar6 = HasOuterScopeInfo(this);
    if ((uVar6 & 1) != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - outer scope info: ",0x16);
      local_68 = OuterScopeInfo(this);
      internal::operator<<(pbVar5,(Brief *)&local_68);
    }
    uVar6 = HasFunctionName(this);
    if ((uVar6 & 1) != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - function name: ",0x13);
      local_68 = FunctionName(this);
      internal::operator<<(pbVar5,(Brief *)&local_68);
    }
    uVar6 = HasInferredFunctionName(this);
    if ((uVar6 & 1) != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - inferred function name: ",0x1c);
      local_68 = InferredFunctionName(this);
      internal::operator<<(pbVar5,(Brief *)&local_68);
    }
    uVar6 = HasContextExtensionSlot(this);
    if ((uVar6 & 1) != 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"\n - has context extension slot",0x1e);
    }
    uVar6 = HasPositionInfo(this);
    if ((uVar6 & 1) != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - start position: ",0x14);
      iVar4 = StartPosition(this);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar4);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - end position: ",0x12);
      iVar4 = EndPosition(this);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar4);
    }
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - length: ",0xc);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
               *(int *)(*(long *)this + 3) >> 1);
    uVar6 = *(ulong *)this;
    if (1 < *(int *)(uVar6 + 3)) {
      iVar4 = ContextLocalNamesIndex();
      if ((1 < *(int *)(*(long *)this + 3)) &&
         (uVar10 = *(uint *)(*(long *)this + 0xf), 1 < (int)uVar10)) {
        iVar1 = iVar4 + (uVar10 >> 1);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\n - ",4);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar5,"context slots",0xd);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1," ",1);
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar4);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,"-",1);
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar1);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar5," [internal slots]",0x11);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," {\n",3)
        ;
        lVar8 = 0;
        iVar9 = iVar4 << 2;
        do {
          pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"    - ",6);
          pbVar5 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                              (int)lVar8 + 2);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,": ",2);
          local_68 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 7 + (long)iVar9);
          Object::ShortPrint((Object *)&local_68,param_1);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1)
          ;
          lVar8 = lVar8 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar4 + lVar8 < (long)iVar1);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"  }",3);
      }
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

