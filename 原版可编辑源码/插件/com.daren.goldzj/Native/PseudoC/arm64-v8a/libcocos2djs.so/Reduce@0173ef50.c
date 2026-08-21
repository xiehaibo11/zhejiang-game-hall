
/* v8::internal::compiler::JSInliningHeuristic::Reduce(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSInliningHeuristic::Reduce(JSInliningHeuristic *this,Node *param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  size_t sVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  Operator *pOVar14;
  undefined8 uVar15;
  JSInliningHeuristic *pJVar16;
  JSInliningHeuristic *pJVar17;
  JSInliningHeuristic *pJVar18;
  char *pcVar19;
  long lVar20;
  char *__s;
  bool bVar21;
  char *pcVar22;
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 local_280 [16];
  undefined **local_270;
  undefined **ppuStack_268;
  locale alStack_260 [8];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined **local_210 [17];
  undefined8 local_188;
  undefined4 local_180;
  locale alStack_170 [8];
  uint local_168 [24];
  char local_108 [8];
  char local_100 [96];
  char local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  float local_78;
  int local_74;
  long local_70;
  
  auVar5._8_8_ = local_280._8_8_;
  auVar5._0_8_ = local_280._0_8_;
  auVar4._8_8_ = local_280._8_8_;
  auVar4._0_8_ = local_280._0_8_;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (((*(short *)(*(long *)param_1 + 0x10) == 0x301) ||
      (*(short *)(*(long *)param_1 + 0x10) == 0x2fc)) &&
     (local_280 = auVar4, *(int *)(this + 0xa0) < FLAG_max_inlined_bytecode_size_absolute)) {
    pJVar16 = this + 0x70;
    pJVar17 = *(JSInliningHeuristic **)pJVar16;
    uVar1 = *(uint *)(param_1 + 0x14) & 0xffffff;
    pJVar18 = pJVar16;
    if (pJVar17 != (JSInliningHeuristic *)0x0) {
      do {
        if (*(uint *)(pJVar17 + 0x1c) >= uVar1) {
          pJVar18 = pJVar17;
        }
        pJVar17 = *(JSInliningHeuristic **)
                   (pJVar17 + (ulong)(*(uint *)(pJVar17 + 0x1c) < uVar1) * 8);
      } while (pJVar17 != (JSInliningHeuristic *)0x0);
      if ((pJVar18 != pJVar16) && (local_280 = auVar5, *(uint *)(pJVar18 + 0x1c) <= uVar1))
      goto LAB_0173f6b8;
    }
    local_168[0] = uVar1;
    std::__ndk1::
    __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
    __emplace_unique_key_args<unsigned_int,unsigned_int>
              ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
                *)(this + 0x68),local_168,local_168);
    CollectFunctions((Node *)this,(int)param_1);
    auVar6._8_8_ = local_280._8_8_;
    auVar6._0_8_ = local_280._0_8_;
    if (local_88 != 0) {
      if ((local_88 < 2) || (FLAG_polymorphic_inlining != '\0')) {
        local_74 = 0;
        puVar11 = (undefined8 *)NodeProperties::GetFrameStateInput(param_1);
        lVar12 = FrameStateInfoOf((Operator *)*puVar11);
        if (0 < local_88) {
          bVar3 = false;
          lVar23 = 0;
          bVar21 = true;
          pcVar19 = local_100;
          if (local_100[0] != '\0') goto LAB_0173f274;
          do {
            local_108[lVar23] = '\0';
            while( true ) {
              lVar23 = lVar23 + 1;
              pcVar19 = pcVar19 + 0x18;
              if (local_88 <= lVar23) {
                if (!bVar3) goto LAB_0173f6b8;
                pOVar14 = *(Operator **)param_1;
                if (*(short *)(pOVar14 + 0x10) == 0x2fc) {
                  lVar12 = CallParametersOf(pOVar14);
                }
                else {
                  lVar12 = ConstructParametersOf(pOVar14);
                }
                local_78 = *(float *)(lVar12 + 4);
                if ((!NAN(local_78)) && ((double)local_78 < FLAG_min_inlining_frequency))
                goto LAB_0173f6b8;
                if (!bVar21) {
                  std::__ndk1::
                  __tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
                  ::
                  __emplace_unique_key_args<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::Candidate_const&>
                            ((__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
                              *)(this + 0x48),(Candidate *)local_168,(Candidate *)local_168);
                  goto LAB_0173f6b8;
                }
                if (FLAG_trace_turbo_inlining != '\0') {
                  local_270 = (undefined **)0x1ca1178;
                  local_210[0] = (undefined **)0x1ca11a0;
                  std::__ndk1::ios_base::init
                            ((ios_base *)local_210,(AndroidLogStream *)&ppuStack_268);
                  local_180 = 0xffffffff;
                  local_188 = 0;
                  ppuStack_268 = &PTR__basic_streambuf_01c671a8;
                  local_270 = &PTR__StdoutStream_01ca1128;
                  local_210[0] = &PTR__StdoutStream_01ca1150;
                  std::__ndk1::locale::locale(alStack_260);
                  ppuStack_268 = &PTR__AndroidLogStream_01cbc008;
                  local_228 = 0;
                  uStack_220 = 0;
                  uStack_230 = 0;
                  local_238 = 0;
                  uStack_240 = 0;
                  local_248 = 0;
                  uStack_250 = 0;
                  local_258 = 0;
                  local_218 = 0;
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_270,"Inlining small function(s) at call site #"
                             ,0x29);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_270,
                             *(uint *)(param_1 + 0x14) & 0xffffff);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_270,":",1);
                  pcVar19 = *(char **)(*(long *)param_1 + 8);
                  sVar9 = strlen(pcVar19);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_270,pcVar19,sVar9);
                  std::__ndk1::ios_base::getloc();
                  plVar10 = (long *)std::__ndk1::locale::use_facet
                                              ((locale *)local_280,
                                               (id *)&std::__ndk1::ctype<char>::id);
                  cVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,10);
                  std::__ndk1::locale::~locale((locale *)local_280);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_270,cVar7)
                  ;
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_270);
                  local_270 = &PTR__StdoutStream_01ca1128;
                  local_210[0] = &PTR__StdoutStream_01ca1150;
                  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&ppuStack_268);
                  std::__ndk1::ios_base::~ios_base((ios_base *)local_210);
                }
                uVar15 = InlineCandidate(this,(Candidate *)local_168,true);
                goto LAB_0173f6bc;
              }
              local_100[0] = *pcVar19;
              if (local_100[0] == '\0') break;
LAB_0173f274:
              if (pcVar19[-0x68] == '\0') {
                if (local_a0 != '\x01') goto LAB_0173f6f0;
                pcVar22 = local_108 + lVar23;
                auVar24._8_8_ = uStack_90;
                auVar24._0_8_ = local_98;
                *pcVar22 = local_100[0];
LAB_0173f2c8:
                local_280 = auVar24;
                iVar8 = SharedFunctionInfoRef::GetInlineability((SharedFunctionInfoRef *)local_280);
                if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.",
                           "candidate.can_inline_function[i] implies shared.IsInlineable()");
                }
              }
              else {
                auVar24 = JSFunctionRef::shared((JSFunctionRef *)(pcVar19 + -0x60));
                cVar7 = *pcVar19;
                pcVar22 = local_108 + lVar23;
                *pcVar22 = cVar7;
                local_280 = auVar24;
                if (cVar7 != '\0') {
                  pcVar22 = local_108 + lVar23;
                  goto LAB_0173f2c8;
                }
              }
              if ((*(long *)(lVar12 + 0x10) == 0) ||
                 (lVar20 = *(long *)(*(long *)(lVar12 + 0x10) + 0x10), lVar20 == 0)) {
LAB_0173f478:
                if (*pcVar22 != '\0') {
                  if (*pcVar19 != '\x01') {
LAB_0173f6f0:
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("Check failed: %s.","storage_.is_populated_");
                  }
                  ppuStack_268 = *(undefined ***)(pcVar19 + 0x10);
                  local_270 = *(undefined ***)(pcVar19 + 8);
                  iVar8 = FixedArrayBaseRef::length((FixedArrayBaseRef *)&local_270);
                  local_74 = local_74 + iVar8;
                  if (bVar21) {
                    iVar8 = FixedArrayBaseRef::length((FixedArrayBaseRef *)&local_270);
                    bVar21 = iVar8 <= FLAG_max_inlined_bytecode_size_small;
                  }
                  else {
                    bVar21 = false;
                  }
                  bVar3 = true;
                }
              }
              else {
                lVar13 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)local_280);
                if (lVar20 != lVar13) goto LAB_0173f478;
                if (FLAG_trace_turbo_inlining != '\0') {
                  local_270 = (undefined **)0x1ca1178;
                  local_210[0] = (undefined **)0x1ca11a0;
                  std::__ndk1::ios_base::init
                            ((ios_base *)local_210,(AndroidLogStream *)&ppuStack_268);
                  local_180 = 0xffffffff;
                  local_188 = 0;
                  ppuStack_268 = &PTR__basic_streambuf_01c671a8;
                  local_270 = &PTR__StdoutStream_01ca1128;
                  local_210[0] = &PTR__StdoutStream_01ca1150;
                  std::__ndk1::locale::locale(alStack_260);
                  uStack_240 = 0;
                  local_248 = 0;
                  uStack_230 = 0;
                  local_238 = 0;
                  uStack_250 = 0;
                  local_258 = 0;
                  ppuStack_268 = &PTR__AndroidLogStream_01cbc008;
                  local_228 = 0;
                  uStack_220 = 0;
                  local_218 = 0;
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_270,"Not considering call site #",0x1b);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_270,
                             *(uint *)(param_1 + 0x14) & 0xffffff);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_270,":",1);
                  __s = *(char **)(*(long *)param_1 + 8);
                  sVar9 = strlen(__s);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_270,__s,sVar9);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_270,", because of recursive inlining",0x1f);
                  std::__ndk1::ios_base::getloc();
                  plVar10 = (long *)std::__ndk1::locale::use_facet
                                              (alStack_170,(id *)&std::__ndk1::ctype<char>::id);
                  cVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,10);
                  std::__ndk1::locale::~locale(alStack_170);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_270,cVar7)
                  ;
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_270);
                  local_270 = &PTR__StdoutStream_01ca1128;
                  local_210[0] = &PTR__StdoutStream_01ca1150;
                  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&ppuStack_268);
                  std::__ndk1::ios_base::~ios_base((ios_base *)local_210);
                }
                *pcVar22 = '\0';
              }
            }
          } while( true );
        }
      }
      else {
        local_280 = auVar6;
        if (FLAG_trace_turbo_inlining != '\0') {
          local_270 = (undefined **)0x1ca1178;
          local_210[0] = (undefined **)0x1ca11a0;
          std::__ndk1::ios_base::init((ios_base *)local_210,(AndroidLogStream *)&ppuStack_268);
          local_180 = 0xffffffff;
          ppuStack_268 = &PTR__basic_streambuf_01c671a8;
          local_188 = 0;
          local_270 = &PTR__StdoutStream_01ca1128;
          local_210[0] = &PTR__StdoutStream_01ca1150;
          std::__ndk1::locale::locale(alStack_260);
          ppuStack_268 = &PTR__AndroidLogStream_01cbc008;
          local_228 = 0;
          uStack_220 = 0;
          uStack_230 = 0;
          local_238 = 0;
          uStack_240 = 0;
          local_248 = 0;
          uStack_250 = 0;
          local_258 = 0;
          local_218 = 0;
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_270,"Not considering call site #",0x1b);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_270,
                     *(uint *)(param_1 + 0x14) & 0xffffff);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_270,":",1);
          pcVar19 = *(char **)(*(long *)param_1 + 8);
          sVar9 = strlen(pcVar19);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_270,pcVar19,sVar9);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_270,", because polymorphic inlining is disabled",0x2a);
          std::__ndk1::ios_base::getloc();
          plVar10 = (long *)std::__ndk1::locale::use_facet
                                      ((locale *)local_280,(id *)&std::__ndk1::ctype<char>::id);
          cVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,10);
          std::__ndk1::locale::~locale((locale *)local_280);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_270,cVar7);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_270);
          local_270 = &PTR__StdoutStream_01ca1128;
          local_210[0] = &PTR__StdoutStream_01ca1150;
          AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&ppuStack_268);
          std::__ndk1::ios_base::~ios_base((ios_base *)local_210);
        }
      }
    }
  }
LAB_0173f6b8:
  uVar15 = 0;
LAB_0173f6bc:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar15);
  }
  return;
}

