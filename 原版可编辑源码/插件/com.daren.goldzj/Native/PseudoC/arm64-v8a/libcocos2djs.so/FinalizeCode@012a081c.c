
/* v8::internal::compiler::PipelineImpl::FinalizeCode(bool) */

long * __thiscall
v8::internal::compiler::PipelineImpl::FinalizeCode(PipelineImpl *this,bool param_1)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  basic_ostream *pbVar10;
  size_t sVar11;
  long *plVar12;
  __sFILE *p_Var13;
  char *pcVar14;
  ushort uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  Isolate *pIVar19;
  long lVar20;
  undefined **ppuVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  int iVar26;
  long lVar27;
  ulong *puVar28;
  long lVar29;
  char *local_308;
  ulong local_300;
  byte *local_2f8;
  ulong local_2f0;
  ulong local_2e8;
  undefined **local_2e0;
  undefined **ppuStack_2d8;
  undefined **local_2d0;
  undefined **ppuStack_2c8;
  undefined **local_2c0;
  long local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined **ppuStack_290;
  ulong local_288;
  undefined8 uStack_280;
  void *local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined **local_260 [17];
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined **local_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulong local_178;
  undefined **ppuStack_170;
  void *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined **local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  int local_b8;
  char local_a8;
  ushort *local_a0;
  ushort *local_98;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar27 = *(long *)this;
  if (*(PipelineStatistics **)(lVar27 + 0x38) != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhaseKind(*(PipelineStatistics **)(lVar27 + 0x38),"V8.TFFinalizeCode");
  }
  if ((*(JSHeapBroker **)(lVar27 + 0x140) != (JSHeapBroker *)0x0) && (param_1)) {
    JSHeapBroker::Retire(*(JSHeapBroker **)(lVar27 + 0x140));
  }
  Run<v8::internal::compiler::FinalizeCodePhase>(this);
  plVar25 = *(long **)(lVar27 + 0x60);
  if (plVar25 == (long *)0x0) goto LAB_012a18ac;
  if (*(long *)(lVar27 + 0x178) != 0) {
    local_1c0 = (undefined **)0x1c6c8a8;
    local_150 = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)&local_150,&ppuStack_1b8);
    local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
    local_c8 = 0;
    local_1c0 = &PTR__basic_ostringstream_01c6c858;
    ppuStack_1b8 = &PTR__basic_streambuf_01c671a8;
    local_150 = &PTR__basic_ostringstream_01c6c880;
    std::__ndk1::locale::locale((locale *)&uStack_1b0);
    uStack_180 = 0;
    local_188 = 0;
    uStack_190 = 0;
    local_198 = 0;
    uStack_1a0 = 0;
    local_1a8 = 0;
    ppuStack_170 = (undefined **)0x0;
    local_178 = 0;
    uStack_160 = 0;
    local_168 = (void *)0x0;
    local_158 = CONCAT44(local_158._4_4_,0x10);
    local_2e0 = (undefined **)*plVar25;
    ppuStack_1b8 = &PTR__basic_stringbuf_01c67100;
    Code::Disassemble((Code *)&local_2e0,(char *)0x0,(basic_ostream *)&local_1c0,
                      (Isolate *)**(undefined8 **)this,0);
    BasicBlockProfiler::Data::SetCode(*(basic_ostringstream **)(lVar27 + 0x178));
    local_1c0 = &PTR__basic_ostringstream_01c6c858;
    local_150 = &PTR__basic_ostringstream_01c6c880;
    if ((local_178 & 1) != 0) {
      ppuStack_1b8 = &PTR__basic_stringbuf_01c67100;
      operator_delete(local_168);
    }
    ppuStack_1b8 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale((locale *)&uStack_1b0);
    std::__ndk1::ios_base::~ios_base((ios_base *)&local_150);
  }
  *(long **)(*(long *)(*(long *)this + 0x18) + 0x28) = plVar25;
  pIVar19 = (Isolate *)**(undefined8 **)this;
  lVar24 = (*(undefined8 **)this)[3];
  if ((FLAG_print_opt_source != '\0') && (*(int *)(lVar24 + 8) == 0)) {
    ppuStack_2c8 = (undefined **)0x0;
    local_2d0 = (undefined **)0x0;
    local_2b8 = 0;
    local_2c0 = (undefined **)0x0;
    ppuStack_2d8 = (undefined **)0x0;
    local_2e0 = (undefined **)0x0;
    lVar20 = *(long *)(lVar24 + 0x60) - *(long *)(lVar24 + 0x58);
    if (lVar20 != 0) {
      uVar22 = lVar20 >> 5;
      if (uVar22 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_2e0 = operator_new(lVar20 >> 2);
      local_2d0 = local_2e0 + uVar22;
      ppuStack_2d8 = local_2e0;
      local_2c0 = operator_new(lVar20 >> 3);
      local_2b8 = (long)local_2c0 + uVar22 * 4;
    }
    ppuVar21 = local_2c0;
    ppuStack_2c8 = local_2c0;
    FUN_012abf5c(lVar24,pIVar19,0xffffffff,*(undefined8 *)(lVar24 + 0x18));
    lVar20 = *(long *)(lVar24 + 0x58);
    if (*(long *)(lVar24 + 0x60) != lVar20) {
      uVar22 = 0;
      uVar17 = 1;
      do {
        lVar29 = uVar22 * 0x20;
        iVar6 = SourceIdAssigner::GetIdFor
                          ((SourceIdAssigner *)&local_2e0,*(undefined8 *)(lVar20 + lVar29));
        FUN_012abf5c(lVar24,pIVar19,iVar6,*(undefined8 *)(*(long *)(lVar24 + 0x58) + lVar29));
        lVar20 = *(long *)(lVar24 + 0x58);
        puVar9 = (undefined8 *)Isolate::GetCodeTracer();
        p_Var13 = (__sFILE *)puVar9[0x12];
        if (FLAG_redirect_code_traces != '\0') {
          if (p_Var13 == (__sFILE *)0x0) {
            p_Var13 = (__sFILE *)base::OS::FOpen((char *)*puVar9,"ab");
            puVar9[0x12] = p_Var13;
          }
          *(int *)(puVar9 + 0x13) = *(int *)(puVar9 + 0x13) + 1;
        }
        OFStream::OFStream((OFStream *)&local_1c0,p_Var13);
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_1c0,"INLINE (",8);
        local_2f0 = **(ulong **)(lVar20 + lVar29);
        local_2e8 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_2f0);
        String::ToCString(&local_308,&local_2e8,1,1,0);
        pcVar14 = local_308;
        sVar11 = strlen(local_308);
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar10,pcVar14,sVar11);
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar10,") id{",5);
        pbVar10 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                             *(int *)(lVar24 + 0x70));
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar10,",",1);
        pbVar10 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,iVar6);
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar10,"} AS ",5);
        pbVar10 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                             (int)uVar17 + -1);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10," AT ",4)
        ;
        pcVar14 = local_308;
        local_308 = (char *)0x0;
        if (pcVar14 != (char *)0x0) {
          operator_delete__(pcVar14);
        }
        uVar22 = *(ulong *)(lVar20 + uVar22 * 0x20 + 0x10);
        pbVar10 = (basic_ostream *)&local_1c0;
        if ((uVar22 & 0x7fffffffffff) == 0) {
          uVar22 = 3;
          pcVar14 = "<?>";
        }
        else {
          pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar10,"<",1);
          pbVar10 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                               ((uint)(uVar22 >> 0x1f) & 0xffff) - 1);
          pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar10,":",1);
          pbVar10 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                               ((uint)uVar22 >> 1 & 0x3fffffff) - 1);
          uVar22 = 1;
          pcVar14 = ">";
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar10,pcVar14,uVar22);
        std::__ndk1::ios_base::getloc();
        plVar12 = (long *)std::__ndk1::locale::use_facet
                                    ((locale *)&local_308,(id *)&std::__ndk1::ctype<char>::id);
        cVar5 = (**(code **)(*plVar12 + 0x38))(plVar12,10);
        std::__ndk1::locale::~locale((locale *)&local_308);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1c0,cVar5);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1c0);
        local_1c0 = &PTR__OFStream_01ca1000;
        ppuStack_170 = &PTR__OFStream_01ca1028;
        ppuStack_1b8 = &PTR__basic_streambuf_01c671a8;
        std::__ndk1::locale::~locale((locale *)&uStack_1b0);
        std::__ndk1::ios_base::~ios_base((ios_base *)&ppuStack_170);
        if ((FLAG_redirect_code_traces != '\0') &&
           (iVar6 = *(int *)(puVar9 + 0x13), *(int *)(puVar9 + 0x13) = iVar6 + -1, iVar6 + -1 == 0))
        {
          fclose((FILE *)puVar9[0x12]);
          puVar9[0x12] = 0;
        }
        lVar20 = *(long *)(lVar24 + 0x58);
        bVar4 = uVar17 < (ulong)(*(long *)(lVar24 + 0x60) - lVar20 >> 5);
        ppuVar21 = ppuStack_2c8;
        uVar22 = uVar17;
        uVar17 = (ulong)((int)uVar17 + 1);
      } while (bVar4);
    }
    if (ppuVar21 != (undefined **)0x0) {
      local_2c0 = ppuVar21;
      operator_delete(ppuVar21);
    }
    if (local_2e0 != (undefined **)0x0) {
      ppuStack_2d8 = local_2e0;
      operator_delete(local_2e0);
    }
  }
  if (FLAG_print_code != '\0') {
LAB_012a0d58:
    OptimizedCompilationInfo::GetDebugName();
    puVar9 = (undefined8 *)Isolate::GetCodeTracer();
    p_Var13 = (__sFILE *)puVar9[0x12];
    if (FLAG_redirect_code_traces != '\0') {
      if (p_Var13 == (__sFILE *)0x0) {
        p_Var13 = (__sFILE *)base::OS::FOpen((char *)*puVar9,"ab");
        puVar9[0x12] = p_Var13;
      }
      *(int *)(puVar9 + 0x13) = *(int *)(puVar9 + 0x13) + 1;
    }
    OFStream::OFStream((OFStream *)&local_2e0,p_Var13);
    uVar16 = *(uint *)(*plVar25 + 0x17);
    if ((uVar16 & 0x3e) == 0) {
      puVar28 = *(ulong **)(lVar24 + 0x18);
      uVar18 = *puVar28 & 0xffffffff00000000;
      uVar17 = uVar18 | *(uint *)(*puVar28 + 0xf);
      uVar22 = uVar17;
      if (*(short *)((uVar18 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x5b) {
        uVar22 = uVar18 | *(uint *)(uVar17 + 0xb);
      }
      if (*(short *)((uVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar22 - 1)) == 0x65) {
        if (*(short *)((uVar18 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x5b) {
          uVar17 = uVar18 | *(uint *)(uVar17 + 0xb);
        }
        if (((*(uint *)(uVar17 + 3) & 1) == 0) ||
           (*(uint *)(uVar17 + 3) != *(uint *)(pIVar19 + 0xa0))) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_2e0,"--- Raw source ---\n",0x13);
          local_2e8 = *puVar28;
          uVar17 = local_2e8 & 0xffffffff00000000;
          uVar22 = uVar17 | *(uint *)(local_2e8 + 0xf);
          if (*(short *)((uVar17 | 7) + (ulong)*(uint *)(uVar22 - 1)) == 0x5b) {
            uVar22 = uVar17 | *(uint *)(uVar22 + 0xb);
          }
          uVar22 = uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 + 3);
          iVar7 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_2e8);
          local_c0 = 0;
          local_2f0 = CONCAT44(local_2f0._4_4_,iVar7);
          ppuStack_1b8 = (undefined **)0x0;
          local_1c0 = (undefined **)0x0;
          local_1a8 = 0;
          uStack_1b0 = 0;
          local_198 = 0;
          uStack_1a0 = 0;
          local_188 = 0;
          uStack_190 = 0;
          local_178 = 0;
          uStack_180 = 0;
          local_168 = (void *)0x0;
          ppuStack_170 = (undefined **)0x0;
          local_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          local_150 = (undefined **)0x0;
          uStack_138 = 0;
          local_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          local_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          local_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          local_e0 = 0;
          local_c8 = 0;
          uStack_d0 = 0;
          local_a8 = '\0';
          local_98 = (ushort *)0x0;
          local_a0 = (ushort *)0x0;
          iVar8 = *(int *)(uVar22 + 7);
          iVar6 = iVar7;
LAB_012a0f48:
          switch(*(ushort *)((uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 - 1)) + 7) & 0xf
                ) {
          case 0:
            goto switchD_012a0f70_caseD_0;
          case 1:
          case 9:
            local_b8 = 0;
            if ((int)uVar22 == 0) goto switchD_012a0ffc_caseD_1;
            ConsStringIterator::Initialize((ConsStringIterator *)&local_1c0,uVar22,iVar7);
            local_2f0 = local_2f0 & 0xffffffff00000000;
            if ((local_b8 == 0) ||
               (uVar22 = ConsStringIterator::Continue
                                   ((ConsStringIterator *)&local_1c0,(int *)&local_2f0),
               (int)uVar22 == 0)) goto switchD_012a0ffc_caseD_1;
            iVar7 = (int)local_2f0;
            iVar8 = *(int *)(uVar22 + 7);
            iVar6 = (int)local_2f0;
            goto LAB_012a0fd4;
          case 2:
            lVar20 = (**(code **)(**(long **)(uVar22 + 0xb) + 0x30))();
            local_a0 = (ushort *)(lVar20 + (long)iVar6 * 2);
            goto LAB_012a103c;
          case 3:
          case 0xb:
            iVar6 = iVar6 + (*(int *)(uVar22 + 0xf) >> 1);
            goto switchD_012a0f70_caseD_5;
          default:
            goto switchD_012a0f70_caseD_4;
          case 5:
          case 0xd:
            goto switchD_012a0f70_caseD_5;
          case 8:
            local_a0 = (ushort *)(uVar22 + (long)iVar6 + 0xb);
            break;
          case 10:
            lVar20 = (**(code **)(**(long **)(uVar22 + 0xb) + 0x30))();
            local_a0 = (ushort *)(lVar20 + iVar6);
          }
          local_a8 = '\x01';
          local_98 = (ushort *)((long)local_a0 + ((long)iVar8 - (long)iVar7));
          goto LAB_012a1080;
        }
      }
    }
    goto LAB_012a1328;
  }
  if ((*(int *)(lVar24 + 8) == 0) && (FLAG_print_opt_code != '\0')) {
    local_1c0 = (undefined **)**(undefined8 **)(lVar24 + 0x18);
    uVar22 = SharedFunctionInfo::PassesFilter
                       ((SharedFunctionInfo *)&local_1c0,FLAG_print_opt_code_filter);
    if ((uVar22 & 1) != 0) goto LAB_012a0d58;
  }
  goto LAB_012a1480;
switchD_012a0f70_caseD_5:
  uVar22 = uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 + 0xb);
  goto LAB_012a0f48;
LAB_012a0fd4:
  switch(*(ushort *)((uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_012a0ffc_caseD_0;
  case 1:
  case 9:
    goto switchD_012a0ffc_caseD_1;
  case 2:
    lVar20 = (**(code **)(**(long **)(uVar22 + 0xb) + 0x30))();
    local_a0 = (ushort *)(lVar20 + (long)iVar6 * 2);
    goto LAB_012a1908;
  case 3:
  case 0xb:
    iVar6 = iVar6 + (*(int *)(uVar22 + 0xf) >> 1);
    goto switchD_012a0ffc_caseD_5;
  default:
    goto switchD_012a0f70_caseD_4;
  case 5:
  case 0xd:
    goto switchD_012a0ffc_caseD_5;
  case 8:
    local_a0 = (ushort *)(uVar22 + (long)iVar6 + 0xb);
    break;
  case 10:
    lVar20 = (**(code **)(**(long **)(uVar22 + 0xb) + 0x30))();
    local_a0 = (ushort *)(lVar20 + iVar6);
  }
  local_a8 = '\x01';
  local_98 = (ushort *)((long)local_a0 + (long)(iVar8 - iVar7));
  goto switchD_012a0ffc_caseD_1;
switchD_012a0ffc_caseD_5:
  uVar22 = uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 + 0xb);
  goto LAB_012a0fd4;
switchD_012a0f70_caseD_0:
  local_a0 = (ushort *)(uVar22 + (long)iVar6 * 2 + 0xb);
LAB_012a103c:
  local_a8 = '\0';
  local_98 = local_a0 + (iVar8 - iVar7);
LAB_012a1080:
  local_b8 = 0;
  goto switchD_012a0ffc_caseD_1;
switchD_012a11e4_caseD_0:
  local_a0 = (ushort *)(uVar22 + (long)iVar26 * 2 + 0xb);
LAB_012a121c:
  local_a8 = '\0';
  local_98 = local_a0 + iVar1;
switchD_012a11e4_caseD_1:
  if (local_a0 != local_98) goto LAB_012a12f0;
LAB_012a1114:
  local_2e8 = local_2e8 & 0xffffffff00000000;
  if ((local_b8 != 0) &&
     (uVar22 = ConsStringIterator::Continue((ConsStringIterator *)&local_1c0,(int *)&local_2e8),
     (int)uVar22 != 0)) {
    iVar1 = *(int *)(uVar22 + 7);
    iVar26 = 0;
    do {
      switch(*(ushort *)((uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 - 1)) + 7) & 0xf) {
      case 0:
        goto switchD_012a1170_caseD_0;
      case 1:
      case 9:
        goto switchD_012a1170_caseD_1;
      case 2:
        lVar20 = (**(code **)(**(long **)(uVar22 + 0xb) + 0x30))();
        local_a0 = (ushort *)(lVar20 + (long)iVar26 * 2);
        goto LAB_012a12a0;
      case 3:
      case 0xb:
        iVar26 = iVar26 + (*(int *)(uVar22 + 0xf) >> 1);
      case 5:
      case 0xd:
        uVar22 = uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 + 0xb);
        break;
      default:
        goto switchD_012a0f70_caseD_4;
      case 8:
        local_a0 = (ushort *)(uVar22 + (long)iVar26 + 0xb);
        goto LAB_012a12d4;
      case 10:
        lVar20 = (**(code **)(**(long **)(uVar22 + 0xb) + 0x30))();
        local_a0 = (ushort *)(lVar20 + iVar26);
LAB_012a12d4:
        local_a8 = '\x01';
        local_98 = (ushort *)((long)local_a0 + (long)iVar1);
        goto switchD_012a1170_caseD_1;
      }
    } while( true );
  }
  goto switchD_012a1170_caseD_1;
switchD_012a1170_caseD_0:
  local_a0 = (ushort *)(uVar22 + (long)iVar26 * 2 + 0xb);
LAB_012a12a0:
  local_a8 = '\0';
  local_98 = local_a0 + iVar1;
switchD_012a1170_caseD_1:
LAB_012a12f0:
  if (local_a8 == '\0') {
    uVar15 = *local_a0;
    local_a0 = local_a0 + 1;
  }
  else {
    uVar15 = (ushort)(byte)*local_a0;
    local_a0 = (ushort *)((long)local_a0 + 1);
  }
  local_2e8 = CONCAT62(local_2e8._2_6_,uVar15);
  internal::operator<<((basic_ostream *)&local_2e0,(AsReversiblyEscapedUC16 *)&local_2e8);
LAB_012a10f0:
  iVar7 = iVar7 + 1;
  if (iVar7 == (iVar6 - iVar8) + 1) goto LAB_012a130c;
  goto LAB_012a10fc;
switchD_012a0f70_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
switchD_012a0ffc_caseD_0:
  local_a0 = (ushort *)(uVar22 + (long)iVar6 * 2 + 0xb);
LAB_012a1908:
  local_a8 = '\0';
  local_98 = local_a0 + (iVar8 - iVar7);
switchD_012a0ffc_caseD_1:
  local_2e8 = *puVar28;
  iVar6 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_2e8);
  local_2f0 = *puVar28;
  iVar8 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_2f0);
  if (iVar8 <= iVar6) {
    iVar7 = 0;
LAB_012a10fc:
    if (local_a0 != local_98) {
      if (local_a0 == local_98) goto LAB_012a1114;
      goto LAB_012a12f0;
    }
    local_2e8 = local_2e8 & 0xffffffff00000000;
    if ((local_b8 != 0) &&
       (uVar22 = ConsStringIterator::Continue((ConsStringIterator *)&local_1c0,(int *)&local_2e8),
       (int)uVar22 != 0)) {
      iVar1 = *(int *)(uVar22 + 7);
      iVar26 = 0;
      do {
        switch(*(ushort *)((uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 - 1)) + 7) & 0xf)
        {
        case 0:
          goto switchD_012a11e4_caseD_0;
        case 1:
        case 9:
          goto switchD_012a11e4_caseD_1;
        case 2:
          lVar20 = (**(code **)(**(long **)(uVar22 + 0xb) + 0x30))();
          local_a0 = (ushort *)(lVar20 + (long)iVar26 * 2);
          goto LAB_012a121c;
        case 3:
        case 0xb:
          iVar26 = iVar26 + (*(int *)(uVar22 + 0xf) >> 1);
        case 5:
        case 0xd:
          uVar22 = uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 + 0xb);
          break;
        default:
          goto switchD_012a0f70_caseD_4;
        case 8:
          local_a0 = (ushort *)(uVar22 + (long)iVar26 + 0xb);
          goto LAB_012a1250;
        case 10:
          lVar20 = (**(code **)(**(long **)(uVar22 + 0xb) + 0x30))();
          local_a0 = (ushort *)(lVar20 + iVar26);
LAB_012a1250:
          local_a8 = '\x01';
          local_98 = (ushort *)((long)local_a0 + (long)iVar1);
          goto switchD_012a11e4_caseD_1;
        }
      } while( true );
    }
    goto LAB_012a10f0;
  }
LAB_012a130c:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_2e0,"\n\n",2);
LAB_012a1328:
  if (*(int *)(lVar24 + 8) == 0) {
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_2e0,"--- Optimized code ---\n",0x17);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,"optimization_id = ",0x12);
    pbVar10 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                         *(int *)(lVar24 + 0x70));
    pcVar14 = "\n";
    uVar22 = 1;
  }
  else {
    pcVar14 = "--- Code ---\n";
    pbVar10 = (basic_ostream *)&local_2e0;
    uVar22 = 0xd;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,pcVar14,uVar22)
  ;
  if ((uVar16 & 0x3e) == 0) {
    puVar23 = *(undefined8 **)(lVar24 + 0x18);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_2e0,"source_position = ",0x12);
    local_1c0 = (undefined **)*puVar23;
    iVar6 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_1c0);
    pbVar10 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,iVar6);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,"\n",1);
  }
  local_1c0 = (undefined **)*plVar25;
  Code::Disassemble((Code *)&local_1c0,local_308,(basic_ostream *)&local_2e0,pIVar19,0);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_2e0,"--- End code ---\n",0x11);
  local_2e0 = &PTR__OFStream_01ca1000;
  ppuStack_2d8 = &PTR__basic_streambuf_01c671a8;
  ppuStack_290 = &PTR__OFStream_01ca1028;
  std::__ndk1::locale::~locale((locale *)&local_2d0);
  std::__ndk1::ios_base::~ios_base((ios_base *)&ppuStack_290);
  if ((FLAG_redirect_code_traces != '\0') &&
     (iVar6 = *(int *)(puVar9 + 0x13), *(int *)(puVar9 + 0x13) = iVar6 + -1, iVar6 + -1 == 0)) {
    fclose((FILE *)puVar9[0x12]);
    puVar9[0x12] = 0;
  }
  pcVar14 = local_308;
  local_308 = (char *)0x0;
  if (pcVar14 != (char *)0x0) {
    operator_delete__(pcVar14);
  }
LAB_012a1480:
  uVar16 = *(uint *)*(OptimizedCompilationInfo **)(*(long *)this + 0x18);
  if ((uVar16 >> 0xd & 1) != 0) {
    TurboJsonFile::TurboJsonFile
              ((TurboJsonFile *)&local_1c0,*(OptimizedCompilationInfo **)(*(long *)this + 0x18),1);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_1c0,
                         "{\"name\":\"disassembly\",\"type\":\"disassembly\"",0x2a);
    local_2e0 = (undefined **)(*(long *)(lVar27 + 0x68) + 0x460);
    pbVar10 = (basic_ostream *)compiler::operator<<(pbVar10,(BlockStartsAsJSON *)&local_2e0);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar10,"\"data\":\"",8);
    local_2e0 = (undefined **)0x1c670a0;
    local_260[0] = (undefined **)0x1c670c8;
    ppuStack_2d8 = (undefined **)0x0;
    local_2d0 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::ios_base::init((ios_base *)local_260,&ppuStack_2c8);
    local_2e0 = &PTR__basic_stringstream_01c66f88;
    local_260[0] = &PTR__basic_stringstream_01c66fd8;
    ppuStack_2c8 = &PTR__basic_streambuf_01c671a8;
    local_1d0 = 0xffffffff;
    local_1d8 = 0;
    local_2d0 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::locale::locale((locale *)&local_2c0);
    ppuStack_2c8 = &PTR__basic_stringbuf_01c67100;
    ppuStack_290 = (undefined **)0x0;
    local_298 = 0;
    uStack_2a0 = 0;
    local_2a8 = 0;
    uStack_2b0 = 0;
    local_2b8 = 0;
    uStack_280 = 0;
    local_288 = 0;
    uStack_270 = 0;
    local_278 = (void *)0x0;
    local_268 = 0x18;
    local_308 = (char *)*plVar25;
    Code::Disassemble((Code *)&local_308,(char *)0x0,(basic_ostream *)&local_2d0,
                      (Isolate *)**(undefined8 **)this,0);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pbVar3 = (byte *)((ulong)&local_308 | 1);
    uVar22 = (ulong)local_308 >> 1 & 0x7f;
    if (((ulong)local_308 & 1) != 0) {
      pbVar3 = local_2f8;
      uVar22 = local_300;
    }
    for (; uVar22 != 0; uVar22 = uVar22 - 1) {
      local_2e8._2_6_ = (undefined6)(local_2e8 >> 0x10);
      local_2e8 = CONCAT62(local_2e8._2_6_,(ushort)*pbVar3);
      internal::operator<<((basic_ostream *)&local_1c0,(AsEscapedUC16ForJSON *)&local_2e8);
      pbVar3 = pbVar3 + 1;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1c0,"\"}\n],\n",6);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1c0,"\"nodePositions\":",0x10);
    uVar22 = (ulong)(*(byte *)(lVar27 + 0x180) >> 1);
    pcVar14 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      uVar22 = *(ulong *)(lVar27 + 0x188);
      pcVar14 = *(char **)(lVar27 + 400);
    }
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_1c0,pcVar14,uVar22);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,",\n",2);
    JsonPrintAllSourceWithPositions
              ((basic_ostream *)&local_1c0,*(OptimizedCompilationInfo **)(lVar27 + 0x18),
               (Isolate *)**(undefined8 **)this);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1c0,"\n}",2);
    if (((ulong)local_308 & 1) != 0) {
      operator_delete(local_2f8);
    }
    local_2e0 = &PTR__basic_stringstream_01c66f88;
    local_2d0 = &PTR__basic_stringstream_01c66fb0;
    local_260[0] = &PTR__basic_stringstream_01c66fd8;
    ppuStack_2c8 = &PTR__basic_stringbuf_01c67100;
    if ((local_288 & 1) != 0) {
      operator_delete(local_278);
    }
    ppuStack_2c8 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale((locale *)&local_2c0);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_260);
    TurboJsonFile::~TurboJsonFile((TurboJsonFile *)&local_1c0);
    uVar16 = **(uint **)(*(long *)this + 0x18);
  }
  if ((uVar16 & 0x6000) != 0) {
    if (*(WasmEngine **)(lVar27 + 8) == (WasmEngine *)0x0) {
      puVar9 = (undefined8 *)Isolate::GetCodeTracer();
    }
    else {
      puVar9 = (undefined8 *)wasm::WasmEngine::GetCodeTracer(*(WasmEngine **)(lVar27 + 8));
    }
    p_Var13 = (__sFILE *)puVar9[0x12];
    if (FLAG_redirect_code_traces != '\0') {
      if (p_Var13 == (__sFILE *)0x0) {
        p_Var13 = (__sFILE *)base::OS::FOpen((char *)*puVar9,"ab");
        puVar9[0x12] = p_Var13;
      }
      *(int *)(puVar9 + 0x13) = *(int *)(puVar9 + 0x13) + 1;
    }
    OFStream::OFStream((OFStream *)&local_1c0,p_Var13);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_1c0,
                         "---------------------------------------------------\n",0x34);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,"Finished compiling method ",0x1a);
    OptimizedCompilationInfo::GetDebugName();
    pcVar14 = local_308;
    sVar11 = strlen(local_308);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,pcVar14,sVar11);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10," using TurboFan",0xf);
    std::__ndk1::ios_base::getloc();
    plVar12 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_2e0,(id *)&std::__ndk1::ctype<char>::id);
    cVar5 = (**(code **)(*plVar12 + 0x38))(plVar12,10);
    std::__ndk1::locale::~locale((locale *)&local_2e0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10);
    pcVar14 = local_308;
    local_308 = (char *)0x0;
    if (pcVar14 != (char *)0x0) {
      operator_delete__(pcVar14);
    }
    local_1c0 = &PTR__OFStream_01ca1000;
    ppuStack_1b8 = &PTR__basic_streambuf_01c671a8;
    ppuStack_170 = &PTR__OFStream_01ca1028;
    std::__ndk1::locale::~locale((locale *)&uStack_1b0);
    std::__ndk1::ios_base::~ios_base((ios_base *)&ppuStack_170);
    if ((FLAG_redirect_code_traces != '\0') &&
       (iVar6 = *(int *)(puVar9 + 0x13), *(int *)(puVar9 + 0x13) = iVar6 + -1, iVar6 + -1 == 0)) {
      fclose((FILE *)puVar9[0x12]);
      puVar9[0x12] = 0;
    }
  }
  if (*(PipelineStatistics **)(lVar27 + 0x38) != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhaseKind(*(PipelineStatistics **)(lVar27 + 0x38));
  }
LAB_012a18ac:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return plVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

