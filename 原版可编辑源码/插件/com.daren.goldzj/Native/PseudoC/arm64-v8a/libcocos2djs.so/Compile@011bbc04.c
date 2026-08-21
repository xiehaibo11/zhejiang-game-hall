
/* v8::internal::RegExpImpl::Compile(v8::internal::Isolate*, v8::internal::Zone*,
   v8::internal::RegExpCompileData*, v8::base::Flags<v8::internal::JSRegExp::Flag, int>,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>, bool,
   unsigned int) */

bool v8::internal::RegExpImpl::Compile
               (Isolate *param_1,Zone *param_2,undefined8 *param_3,uint param_4,ulong *param_5,
               undefined8 param_6,byte param_7,undefined4 param_8)

{
  Isolate *pIVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  RegExpNode *pRVar12;
  RegExpNode *pRVar13;
  long *plVar14;
  RegExpMacroAssemblerARM64 *this;
  ulong *puVar15;
  RegExpTree *pRVar16;
  RegExpNode *pRVar17;
  long *plVar18;
  TextNode *this_00;
  RegExpCharacterClass *pRVar19;
  __sFILE *p_Var20;
  RegExpMacroAssemblerARM64 RVar21;
  undefined4 uVar22;
  undefined **ppuVar23;
  ulong local_5d0;
  char *local_5c8;
  undefined **local_5c0;
  undefined **ppuStack_5b8;
  locale alStack_5b0 [64];
  undefined **local_570 [19];
  RegExpNode *local_4d8;
  undefined8 uStack_4d0;
  byte local_4a5;
  int aiStack_49c [256];
  int local_9c;
  int local_88;
  undefined4 uStack_84;
  ulong local_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if ((int)(*(int *)(param_3 + 6) << 1 | 1U) < 0x10000) {
    pIVar1 = param_1 + 0x95a0;
    RegExpCompiler::RegExpCompiler
              ((RegExpCompiler *)&local_4d8,param_1,param_2,*(int *)(param_3 + 6),
               (bool)(param_7 & 1));
    if (local_4a5 != 0) {
      if (*(int *)(*param_5 + 7) < 0x5001) {
        if (*(ulong *)(param_1 + 0xc760) < 0x100001) {
          bVar5 = false;
        }
        else {
          uVar11 = Heap::CommittedMemoryExecutable((Heap *)(param_1 + 0x8850));
          bVar5 = 0x1000000 < uVar11;
        }
      }
      else {
        bVar5 = true;
      }
      local_4a5 = bVar5 ^ 1;
    }
    puVar10 = (undefined8 *)String::Flatten(param_1,param_6,0);
    ppuVar23 = (undefined **)*puVar10;
    iVar2 = *(int *)((long)ppuVar23 + 7);
    iVar8 = iVar2 + -0x7f;
    if (-1 < iVar2 + -0x80) {
      iVar8 = iVar2 + -0x80;
    }
    uVar6 = iVar8 >> 1 & (iVar8 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar6 < iVar2) {
      uVar7 = 1;
      do {
        iVar8 = uVar6 + uVar7;
        local_88 = iVar8 + -1;
        local_5c8 = (char *)CONCAT44(local_5c8._4_4_,
                                     (uint)*(ushort *)
                                            (((ulong)ppuVar23 & 0xffffffff00000000 |
                                             (ulong)*(uint *)((long)ppuVar23 + -1)) + 7));
        local_5c0 = ppuVar23;
        uVar11 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                           (&local_5c8,&local_5c0,&local_88);
        aiStack_49c[(uVar11 & 0x7f) * 2] = aiStack_49c[(uVar11 & 0x7f) * 2] + 1;
        local_9c = local_9c + 1;
        if (0x7f < uVar7) break;
        ppuVar23 = (undefined **)*puVar10;
        uVar7 = uVar7 + 1;
      } while (iVar8 < *(int *)((long)ppuVar23 + 7));
    }
    pRVar12 = (RegExpNode *)
              RegExpCapture::ToNode((RegExpTree *)*param_3,0,(RegExpCompiler *)&local_4d8,local_4d8)
    ;
    uVar6 = (**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3);
    uVar7 = (**(code **)(*(long *)*param_3 + 0x28))((long *)*param_3);
    iVar8 = (**(code **)(*(long *)*param_3 + 0x40))((long *)*param_3);
    pRVar17 = pRVar12;
    if (((param_4 >> 3 & 1) == 0) && ((uVar7 & 1) == 0)) {
      pRVar16 = *(RegExpTree **)(param_2 + 0x10);
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)pRVar16) < 0x20) {
        pRVar16 = (RegExpTree *)Zone::NewExpand(param_2,0x20);
      }
      else {
        *(RegExpTree **)(param_2 + 0x10) = pRVar16 + 0x20;
      }
      *(undefined2 *)(pRVar16 + 0x10) = 0x2a;
      *(undefined8 *)(pRVar16 + 0x18) = 0;
      *(undefined ***)pRVar16 = &PTR__RegExpTree_01cc7550;
      *(undefined8 *)(pRVar16 + 8) = 0;
      pRVar13 = (RegExpNode *)
                RegExpQuantifier::ToNode
                          (0,0x7fffffff,false,pRVar16,(RegExpCompiler *)&local_4d8,pRVar12,
                           *(bool *)((long)param_3 + 0x19));
      if (*(char *)((long)param_3 + 0x19) != '\0') {
        pRVar17 = *(RegExpNode **)(param_2 + 0x10);
        if ((ulong)(*(long *)(param_2 + 0x18) - (long)pRVar17) < 0x48) {
          pRVar17 = (RegExpNode *)Zone::NewExpand(param_2,0x48);
        }
        else {
          *(RegExpNode **)(param_2 + 0x10) = pRVar17 + 0x48;
        }
        *(undefined8 *)(pRVar17 + 0x10) = 0;
        *(undefined8 *)(pRVar17 + 0x18) = 0;
        *(undefined8 *)(pRVar17 + 0x28) = 0;
        *(Zone **)(pRVar17 + 0x30) = param_2;
        *(undefined8 *)(pRVar17 + 0x20) = 0;
        *(undefined ***)pRVar17 = &PTR__RegExpNode_01cc8800;
        *(undefined8 *)(pRVar17 + 8) = 0;
        plVar14 = *(long **)(param_2 + 0x10);
        lVar9 = *(long *)(param_2 + 0x18);
        if ((ulong)(lVar9 - (long)plVar14) < 0x10) {
          plVar14 = (long *)Zone::NewExpand(param_2,0x10);
          plVar18 = *(long **)(param_2 + 0x10);
          lVar9 = *(long *)(param_2 + 0x18);
        }
        else {
          plVar18 = plVar14 + 2;
          *(long **)(param_2 + 0x10) = plVar18;
        }
        if ((ulong)(lVar9 - (long)plVar18) < 0x20) {
          plVar18 = (long *)Zone::NewExpand(param_2,0x20);
        }
        else {
          *(long **)(param_2 + 0x10) = plVar18 + 4;
        }
        *plVar14 = (long)plVar18;
        plVar14[1] = 2;
        *(long **)(pRVar17 + 0x38) = plVar14;
        *(undefined2 *)(pRVar17 + 0x40) = 0;
        ChoiceNode::AddAlternative(pRVar17,pRVar12,0);
        this_00 = *(TextNode **)(param_2 + 0x10);
        lVar9 = *(long *)(param_2 + 0x18);
        if ((ulong)(lVar9 - (long)this_00) < 0x50) {
          this_00 = (TextNode *)Zone::NewExpand(param_2,0x50);
          pRVar19 = *(RegExpCharacterClass **)(param_2 + 0x10);
          lVar9 = *(long *)(param_2 + 0x18);
        }
        else {
          pRVar19 = (RegExpCharacterClass *)(this_00 + 0x50);
          *(RegExpCharacterClass **)(param_2 + 0x10) = pRVar19;
        }
        if ((ulong)(lVar9 - (long)pRVar19) < 0x20) {
          pRVar19 = (RegExpCharacterClass *)Zone::NewExpand(param_2,0x20);
        }
        else {
          *(RegExpCharacterClass **)(param_2 + 0x10) = pRVar19 + 0x20;
        }
        *(undefined ***)pRVar19 = &PTR__RegExpTree_01cc7550;
        *(undefined8 *)(pRVar19 + 8) = 0;
        *(undefined2 *)(pRVar19 + 0x10) = 0x2a;
        *(undefined8 *)(pRVar19 + 0x18) = 0;
        TextNode::TextNode(this_00,pRVar19,false,pRVar13);
        ChoiceNode::AddAlternative(pRVar17,this_00,0);
        goto LAB_011bbf88;
      }
      if ((param_7 & 1) == 0) goto LAB_011bbfcc;
LAB_011bbf8c:
      plVar14 = (long *)(**(code **)(*(long *)pRVar13 + 0x50))(pRVar13,100);
      if (plVar14 != (long *)0x0) {
        pRVar13 = (RegExpNode *)(**(code **)(*plVar14 + 0x50))(plVar14,100);
        goto joined_r0x011bbff4;
      }
LAB_011bbff8:
      pRVar13 = *(RegExpNode **)(param_2 + 0x10);
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)pRVar13) < 0x40) {
        pRVar13 = (RegExpNode *)Zone::NewExpand(param_2,0x40);
      }
      else {
        *(RegExpNode **)(param_2 + 0x10) = pRVar13 + 0x40;
      }
      *(undefined8 *)(pRVar13 + 0x10) = 0;
      *(undefined8 *)(pRVar13 + 0x18) = 0;
      *(undefined8 *)(pRVar13 + 0x28) = 0;
      *(Zone **)(pRVar13 + 0x30) = param_2;
      *(undefined8 *)(pRVar13 + 0x20) = 0;
      *(undefined4 *)(pRVar13 + 0x38) = 1;
      *(undefined ***)pRVar13 = &PTR__RegExpNode_01cc8730;
      *(undefined8 *)(pRVar13 + 8) = 0;
    }
    else {
LAB_011bbf88:
      pRVar13 = pRVar17;
      if ((param_7 & 1) != 0) goto LAB_011bbf8c;
LAB_011bbfcc:
      if (((param_4 >> 4 & 1) != 0) && ((param_4 & 9) != 0)) {
        pRVar13 = (RegExpNode *)
                  RegExpCompiler::OptionallyStepBackToLeadSurrogate(&local_4d8,pRVar13,param_4);
      }
joined_r0x011bbff4:
      if (pRVar13 == (RegExpNode *)0x0) goto LAB_011bbff8;
    }
    param_3[1] = pRVar13;
    ppuVar23 = (undefined **)AnalyzeRegExp(param_1,(bool)(param_7 & 1),pRVar13);
    if (ppuVar23 == (undefined **)0x0) {
      if (*(int *)(param_3 + 7) == 1) {
        uVar22 = 1;
        if ((param_7 & 1) == 0) {
          uVar22 = 2;
        }
        this = operator_new(0x78);
        RegExpMacroAssemblerARM64::RegExpMacroAssemblerARM64
                  (this,param_1,param_2,uVar22,*(int *)(param_3 + 6) * 2 + 2);
      }
      else {
        this = operator_new(0x90);
        RegExpBytecodeGenerator::RegExpBytecodeGenerator
                  ((RegExpBytecodeGenerator *)this,param_1,param_2);
      }
      if (*(int *)(*param_5 + 7) < 0x5001) {
        if (*(ulong *)(param_1 + 0xc760) < 0x100001) {
          RVar21 = (RegExpMacroAssemblerARM64)0x0;
        }
        else {
          uVar11 = Heap::CommittedMemoryExecutable((Heap *)(param_1 + 0x8850));
          RVar21 = (RegExpMacroAssemblerARM64)(0x1000000 < uVar11);
        }
      }
      else {
        RVar21 = (RegExpMacroAssemblerARM64)0x1;
      }
      this[8] = RVar21;
      *(undefined4 *)(this + 0xc) = param_8;
      if (((((uVar7 | uVar6 ^ 0xffffffff) & 1) == 0) && (iVar8 < 0x400)) &&
         ((param_4 >> 3 & 1) == 0)) {
        (**(code **)(*(long *)this + 0x148))(this,iVar8);
      }
      if ((param_4 & 1) != 0) {
        iVar8 = (**(code **)(*(long *)*param_3 + 0x38))();
        uVar22 = 2;
        if ((param_4 & 0x10) != 0) {
          uVar22 = 3;
        }
        if (0 < iVar8) {
          uVar22 = 1;
        }
        *(undefined4 *)(this + 0x10) = uVar22;
      }
      RegExpCompiler::Assemble
                (&local_88,&local_4d8,param_1,this,pRVar13,*(undefined4 *)(param_3 + 6),param_5);
      if ((FLAG_print_regexp_code != '\0') && (*(int *)(param_3 + 7) == 1)) {
        puVar10 = (undefined8 *)Isolate::GetCodeTracer();
        p_Var20 = (__sFILE *)puVar10[0x12];
        if (FLAG_redirect_code_traces != '\0') {
          if (p_Var20 == (__sFILE *)0x0) {
            p_Var20 = (__sFILE *)base::OS::FOpen((char *)*puVar10,"ab");
            puVar10[0x12] = p_Var20;
          }
          *(int *)(puVar10 + 0x13) = *(int *)(puVar10 + 0x13) + 1;
        }
        OFStream::OFStream((OFStream *)&local_5c0,p_Var20);
        uVar11 = local_80;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar15 = *(ulong **)pIVar1;
          if (puVar15 == *(ulong **)(param_1 + 0x95a8)) {
            puVar15 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar15 + 1;
          *puVar15 = uVar11;
        }
        else {
          puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_80);
        }
        local_5d0 = *param_5;
        String::ToCString(&local_5c8,&local_5d0,1,1,0);
        local_5d0 = *puVar15;
        Code::Disassemble((Code *)&local_5d0,local_5c8,(basic_ostream *)&local_5c0,param_1,0);
        pcVar4 = local_5c8;
        local_5c8 = (char *)0x0;
        if (pcVar4 != (char *)0x0) {
          operator_delete__(pcVar4);
        }
        local_5c0 = &PTR__OFStream_01ca1000;
        local_570[0] = &PTR__OFStream_01ca1028;
        ppuStack_5b8 = &PTR__basic_streambuf_01c671a8;
        std::__ndk1::locale::~locale(alStack_5b0);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_570);
        if ((FLAG_redirect_code_traces != '\0') &&
           (iVar8 = *(int *)(puVar10 + 0x13), *(int *)(puVar10 + 0x13) = iVar8 + -1, iVar8 + -1 == 0
           )) {
          fclose((FILE *)puVar10[0x12]);
          puVar10[0x12] = 0;
        }
      }
      uVar11 = local_80;
      if ((FLAG_print_regexp_bytecode != '\0') && (*(int *)(param_3 + 7) == 0)) {
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar15 = *(ulong **)pIVar1;
          if (puVar15 == *(ulong **)(param_1 + 0x95a8)) {
            puVar15 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar15 + 1;
          *puVar15 = uVar11;
        }
        else {
          puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_80);
        }
        local_5c8 = (char *)*param_5;
        String::ToCString(&local_5c0,&local_5c8,1,1,0);
        RegExpBytecodeDisassemble
                  ((uchar *)(*puVar15 + 7),*(int *)(*puVar15 + 3) >> 1,(char *)local_5c0);
        ppuVar23 = local_5c0;
        local_5c0 = (undefined **)0x0;
        if (ppuVar23 != (undefined **)0x0) {
          operator_delete__(ppuVar23);
        }
      }
      ppuVar23 = (undefined **)CONCAT44(uStack_84,local_88);
      if ((FLAG_correctness_fuzzer_suppressions != '\0') &&
         (iVar8 = strncmp((char *)ppuVar23,"Stack overflow",0xf), iVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Aborting on stack overflow");
      }
      if (ppuVar23 == (undefined **)0x0) {
        bVar5 = true;
      }
      else {
        ppuStack_5b8 = (undefined **)strlen((char *)ppuVar23);
        local_5c0 = ppuVar23;
        lVar9 = Factory::NewStringFromOneByte(param_1,&local_5c0,0);
        if (lVar9 == 0) goto LAB_011bc4fc;
        param_3[5] = lVar9;
        bVar5 = CONCAT44(uStack_84,local_88) == 0;
      }
      param_3[2] = local_80;
      *(undefined4 *)((long)param_3 + 0x34) = local_78;
      (**(code **)(*(long *)this + 8))(this);
      goto LAB_011bc07c;
    }
    ppuStack_5b8 = (undefined **)strlen((char *)ppuVar23);
    local_5c0 = ppuVar23;
    lVar9 = Factory::NewStringFromOneByte(param_1,&local_5c0,0);
  }
  else {
    uStack_4d0 = __strlen_chk("RegExp too big",0xf);
    local_4d8 = (RegExpNode *)0x19ddf73;
    lVar9 = Factory::NewStringFromOneByte(param_1,&local_4d8,0);
  }
  if (lVar9 == 0) {
LAB_011bc4fc:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  bVar5 = false;
  param_3[5] = lVar9;
LAB_011bc07c:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

