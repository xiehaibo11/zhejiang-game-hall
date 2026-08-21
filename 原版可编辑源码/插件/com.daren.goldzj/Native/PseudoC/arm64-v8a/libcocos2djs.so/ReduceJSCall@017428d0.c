
/* WARNING: Removing unreachable block (ram,0x01742ab0) */
/* v8::internal::compiler::JSInliner::ReduceJSCall(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::JSInliner::ReduceJSCall(JSInliner *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  uint uVar3;
  short sVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  Operator *pOVar13;
  long lVar14;
  undefined8 uVar15;
  Node *pNVar16;
  Node *pNVar17;
  Node *pNVar18;
  Node *pNVar19;
  Node *pNVar20;
  Node *pNVar21;
  uint *puVar22;
  Node *pNVar23;
  char *pcVar24;
  int iVar25;
  undefined8 *puVar26;
  long *plVar27;
  ulong uVar28;
  uint uVar29;
  undefined8 uVar30;
  OptimizedCompilationInfo *pOVar31;
  undefined1 auVar32 [8];
  JSGraph *this_00;
  long lVar33;
  Node *pNVar34;
  Use *pUVar35;
  Graph *pGVar36;
  undefined8 *puVar37;
  undefined8 in_stack_fffffffffffffda0;
  undefined4 uVar38;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  Zone *local_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  Node *local_1a8;
  Node *local_1a0;
  ObjectRef aOStack_198 [16];
  char local_188;
  Node *local_180;
  Node *pNStack_178;
  undefined1 local_170 [8];
  Node *local_168;
  Node *local_160;
  Node *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  uVar38 = (undefined4)((ulong)in_stack_fffffffffffffda0 >> 0x20);
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  DetermineCallTarget((Node *)this);
  if (local_188 == '\0') {
LAB_0174311c:
    uVar15 = 0;
    goto LAB_01743928;
  }
  ObjectRef::ObjectRef
            (aOStack_198,*(undefined8 *)(this + 0x28),*(undefined8 *)(*(long *)(this + 0x18) + 0x18)
             ,0);
  uVar10 = ObjectRef::IsSharedFunctionInfo(aOStack_198);
  if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
  sVar4 = *(short *)(*(long *)param_1 + 0x10);
  if (sVar4 == 0x301) {
    bVar6 = SharedFunctionInfoRef::kind((SharedFunctionInfoRef *)&local_180);
    if (bVar6 < 7) {
      sVar4 = *(short *)(*(long *)param_1 + 0x10);
      goto LAB_01742970;
    }
    if (FLAG_trace_turbo_inlining == '\0') goto LAB_0174311c;
    local_170 = (undefined1  [8])
                (std::__ndk1::
                 basic_ostream<char,v8::internal::StdoutStream::char_traits<char>>-in-v8::internal::
                 StdoutStream::construction_vtable + 0x18);
    local_110[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_110,&local_168);
    local_80 = 0xffffffff;
    local_170 = (undefined1  [8])&PTR__StdoutStream_01ca1128;
    local_110[0] = &PTR__StdoutStream_01ca1150;
    local_168 = (Node *)&PTR__basic_streambuf_01c671a8;
    local_88 = 0;
    std::__ndk1::locale::locale((locale *)&local_160);
    local_168 = (Node *)&PTR__AndroidLogStream_01cbc008;
    uStack_130 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_158 = (Node *)0x0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)local_170,"Not inlining ",0xd);
    compiler::operator<<((basic_ostream *)local_170,(ObjectRef *)&local_180);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)local_170," into ",6);
    compiler::operator<<((basic_ostream *)local_170,aOStack_198);
    pcVar24 = " because constructor is not constructable.";
    uVar10 = 0x2a;
LAB_01742e2c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)local_170,pcVar24,uVar10);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)local_170,"\n",1);
  }
  else {
LAB_01742970:
    if (sVar4 == 0x2fc) {
      cVar7 = SharedFunctionInfoRef::kind((SharedFunctionInfoRef *)&local_180);
      if ((byte)(cVar7 - 3U) < 4) {
        if (FLAG_trace_turbo_inlining == '\0') goto LAB_0174311c;
        local_170 = (undefined1  [8])
                    (std::__ndk1::
                     basic_ostream<char,v8::internal::StdoutStream::char_traits<char>>-in-v8::
                     internal::StdoutStream::construction_vtable + 0x18);
        local_110[0] = (undefined **)0x1ca11a0;
        std::__ndk1::ios_base::init((ios_base *)local_110,&local_168);
        local_80 = 0xffffffff;
        local_170 = (undefined1  [8])&PTR__StdoutStream_01ca1128;
        local_110[0] = &PTR__StdoutStream_01ca1150;
        local_168 = (Node *)&PTR__basic_streambuf_01c671a8;
        local_88 = 0;
        std::__ndk1::locale::locale((locale *)&local_160);
        local_168 = (Node *)&PTR__AndroidLogStream_01cbc008;
        uStack_130 = 0;
        local_138 = 0;
        uStack_140 = 0;
        local_148 = 0;
        uStack_150 = 0;
        local_158 = (Node *)0x0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)local_170,"Not inlining ",0xd);
        compiler::operator<<((basic_ostream *)local_170,(ObjectRef *)&local_180);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)local_170," into ",6);
        compiler::operator<<((basic_ostream *)local_170,aOStack_198);
        pcVar24 = " because callee is a class constructor.";
        uVar10 = 0x27;
        goto LAB_01742e2c;
      }
    }
    plVar11 = (long *)NodeProperties::GetFrameStateInput(param_1);
    if (*(short *)(*plVar11 + 0x10) != 0x29) {
LAB_01742af0:
      local_1a0 = (Node *)0x0;
      NodeProperties::IsExceptionalCall(param_1,&local_1a0);
      uVar10 = SharedFunctionInfoRef::is_compiled((SharedFunctionInfoRef *)&local_180);
      if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","shared_info->is_compiled()");
      }
      if ((FLAG_concurrent_inlining == '\0') && ((**(byte **)(this + 0x18) >> 4 & 1) != 0)) {
        uVar30 = *(undefined8 *)(*(long *)(this + 0x20) + 0x168);
        uVar15 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)&local_180);
        SharedFunctionInfo::EnsureSourcePositionsAvailable(uVar30,uVar15);
      }
      if (FLAG_trace_turbo_inlining != '\0') {
        local_170 = (undefined1  [8])
                    (std::__ndk1::
                     basic_ostream<char,v8::internal::StdoutStream::char_traits<char>>-in-v8::
                     internal::StdoutStream::construction_vtable + 0x18);
        local_110[0] = (undefined **)0x1ca11a0;
        std::__ndk1::ios_base::init((ios_base *)local_110,(AndroidLogStream *)&local_168);
        local_80 = 0xffffffff;
        local_168 = (Node *)&PTR__basic_streambuf_01c671a8;
        local_88 = 0;
        local_170 = (undefined1  [8])&PTR__StdoutStream_01ca1128;
        local_110[0] = &PTR__StdoutStream_01ca1150;
        std::__ndk1::locale::locale((locale *)&local_160);
        local_168 = (Node *)&PTR__AndroidLogStream_01cbc008;
        uStack_130 = 0;
        local_138 = 0;
        uStack_140 = 0;
        local_148 = 0;
        uStack_150 = 0;
        local_158 = (Node *)0x0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)local_170,"Inlining ",9);
        compiler::operator<<((basic_ostream *)local_170,(ObjectRef *)&local_180);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)local_170," into ",6);
        compiler::operator<<((basic_ostream *)local_170,aOStack_198);
        pcVar24 = "";
        if (local_1a0 != (Node *)0x0) {
          pcVar24 = " (inside try-block)";
        }
        uVar10 = 0;
        if (local_1a0 != (Node *)0x0) {
          uVar10 = 0x13;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)local_170,pcVar24,uVar10);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)local_170,"\n",1);
        local_170 = (undefined1  [8])&PTR__StdoutStream_01ca1128;
        local_110[0] = &PTR__StdoutStream_01ca1150;
        AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_168);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
      }
      local_1b8 = DetermineCallContext(this,param_1,&local_1a8);
      uVar10 = JSHeapBroker::IsSerializedForCompilation
                         (*(JSHeapBroker **)(this + 0x28),(SharedFunctionInfoRef *)&local_180,
                          (FeedbackVectorRef *)local_1b8);
      if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "broker()->IsSerializedForCompilation(*shared_info, feedback_vector)");
      }
      local_1c8 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)&local_180);
      pOVar31 = *(OptimizedCompilationInfo **)(this + 0x18);
      uVar15 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)&local_180);
      uVar30 = BytecodeArrayRef::object((BytecodeArrayRef *)local_1c8);
      uVar12 = SourcePositionTable::GetSourcePosition
                         (*(SourcePositionTable **)(this + 0x30),param_1);
      uVar8 = OptimizedCompilationInfo::AddInlinedFunction(pOVar31,uVar15,uVar30,uVar12);
      pOVar13 = *(Operator **)param_1;
      lVar33 = **(long **)(this + 0x20);
      uVar3 = **(uint **)(this + 0x18);
      uVar15 = *(undefined8 *)(lVar33 + 8);
      uVar30 = *(undefined8 *)(lVar33 + 0x10);
      uVar29 = 3;
      if ((uVar3 & 0x1000) == 0) {
        uVar29 = 1;
      }
      if (*(short *)(pOVar13 + 0x10) == 0x2fc) {
        lVar14 = CallParametersOf(pOVar13);
      }
      else {
        lVar14 = ConstructParametersOf(pOVar13);
      }
      local_170._0_4_ = *(undefined4 *)(lVar14 + 4);
      BuildGraphFromBytecode
                (*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x10),
                 (SharedFunctionInfoRef *)&local_180,local_1b8,0xffffffff,
                 *(undefined8 *)(this + 0x20),local_170,*(undefined8 *)(this + 0x30),
                 CONCAT44(uVar38,uVar8),uVar29 | uVar3 >> 3 & 4,*(long *)(this + 0x18) + 0x98);
      pNVar1 = *(Node **)(**(long **)(this + 0x20) + 8);
      pNVar2 = *(Node **)(**(long **)(this + 0x20) + 0x10);
      *(undefined8 *)(lVar33 + 8) = uVar15;
      *(undefined8 *)(lVar33 + 0x10) = uVar30;
      local_1d0 = *(Zone **)(this + 0x10);
      local_1e8 = (undefined8 *)0x0;
      local_1e0 = (undefined8 *)0x0;
      local_1d8 = (undefined8 *)0x0;
      if (local_1a0 == (Node *)0x0) {
        puVar37 = (undefined8 *)0x0;
      }
      else {
        AllNodes::AllNodes((AllNodes *)local_170,local_1d0,pNVar2,
                           (Graph *)**(undefined8 **)(this + 0x20),true);
        pNVar16 = local_168;
        if (local_170 == (undefined1  [8])local_168) {
          puVar37 = (undefined8 *)0x0;
        }
        else {
          puVar37 = (undefined8 *)0x0;
          auVar32 = local_170;
          do {
            pNVar34 = *(Node **)auVar32;
            if ((*(byte *)(*(long *)pNVar34 + 0x12) >> 5 & 1) == 0) {
              uVar10 = NodeProperties::IsExceptionalCall(pNVar34,(Node **)0x0);
              if ((uVar10 & 1) == 0) {
                if (puVar37 == local_1d8) {
                  lVar33 = (long)puVar37 - (long)local_1e8 >> 3;
                  uVar10 = lVar33 + 1;
                  if (uVar10 >> 0x1c != 0) goto LAB_01743998;
                  uVar28 = (long)local_1d8 - (long)local_1e8 >> 2;
                  if (uVar10 <= uVar28) {
                    uVar10 = uVar28;
                  }
                  if (0x7fffffe < (ulong)((long)local_1d8 - (long)local_1e8 >> 3)) {
                    uVar10 = 0xfffffff;
                  }
                  if (uVar10 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    uVar28 = uVar10 * 8;
                    lVar14 = *(long *)(local_1d0 + 0x10);
                    if (uVar28 < (ulong)(*(long *)(local_1d0 + 0x18) - lVar14) ||
                        uVar28 - (*(long *)(local_1d0 + 0x18) - lVar14) == 0) {
                      *(ulong *)(local_1d0 + 0x10) = lVar14 + uVar28;
                    }
                    else {
                      lVar14 = Zone::NewExpand(local_1d0,uVar28);
                    }
                  }
                  puVar37 = (undefined8 *)(lVar14 + lVar33 * 8);
                  *puVar37 = pNVar34;
                  local_1d8 = (undefined8 *)(lVar14 + uVar10 * 8);
                  puVar26 = puVar37;
                  while (local_1e0 != local_1e8) {
                    local_1e0 = local_1e0 + -1;
                    puVar26 = puVar26 + -1;
                    *puVar26 = *local_1e0;
                  }
                }
                else {
                  *puVar37 = pNVar34;
                  puVar26 = local_1e8;
                }
                local_1e8 = puVar26;
                puVar37 = puVar37 + 1;
                local_1e0 = puVar37;
              }
            }
            auVar32 = (undefined1  [8])((long)auVar32 + 8);
          } while (auVar32 != (undefined1  [8])pNVar16);
        }
        if (local_170 != (undefined1  [8])0x0) {
          local_168 = (Node *)local_170;
        }
      }
      pNVar16 = (Node *)NodeProperties::GetFrameStateInput(param_1);
      pNVar34 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x20));
      sVar4 = *(short *)(*(long *)param_1 + 0x10);
      if (sVar4 == 0x301) {
        pNVar23 = param_1 + 0x20;
        lVar33 = (long)*(int *)(*(long *)param_1 + 0x14) + -1;
        pNVar34 = pNVar23;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar34 = (Node *)(*(long *)pNVar23 + 0x10);
        }
        pNVar34 = *(Node **)(pNVar34 + lVar33 * 8);
        Node::RemoveInput(param_1,(int)lVar33);
        Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x20),1,pNVar34);
        pNVar17 = (Node *)JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x20));
        pNVar18 = (Node *)NodeProperties::GetContextInput(param_1);
        local_170 = (undefined1  [8])local_180;
        local_168 = pNStack_178;
        uVar10 = SharedFunctionInfoRef::construct_as_builtin((SharedFunctionInfoRef *)local_170);
        if ((uVar10 & 1) == 0) {
          cVar7 = SharedFunctionInfoRef::kind((SharedFunctionInfoRef *)local_170);
          if ((byte)(cVar7 - 5U) < 2) goto LAB_017432e8;
          uVar15 = NodeProperties::GetEffectInput(param_1,0);
          uVar30 = NodeProperties::GetControlInput(param_1,0);
          pNVar19 = (Node *)CreateArtificialFrameState
                                      (this,param_1,pNVar16,*(int *)(*(long *)param_1 + 0x14) + -2,1
                                       ,2,local_180,pNStack_178,pNVar18);
          pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
          pOVar13 = (Operator *)
                    JSOperatorBuilder::Create
                              ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x20))[0x2e]);
          pNVar17 = pNVar23;
          if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
            pNVar17 = (Node *)(*(long *)pNVar23 + 0x10);
          }
          local_170 = *(undefined1 (*) [8])pNVar17;
          local_168 = pNVar34;
          local_160 = pNVar18;
          local_158 = pNVar19;
          uStack_150 = uVar15;
          local_148 = uVar30;
          pNVar17 = (Node *)Graph::NewNode(pGVar36,pOVar13,6,(Node **)local_170,false);
          if (puVar37 == local_1d8) {
            lVar33 = (long)puVar37 - (long)local_1e8 >> 3;
            uVar10 = lVar33 + 1;
            if (uVar10 >> 0x1c != 0) goto LAB_01743998;
            uVar28 = (long)local_1d8 - (long)local_1e8 >> 2;
            if (uVar10 <= uVar28) {
              uVar10 = uVar28;
            }
            if (0x7fffffe < (ulong)((long)local_1d8 - (long)local_1e8 >> 3)) {
              uVar10 = 0xfffffff;
            }
            if (uVar10 == 0) {
              lVar14 = 0;
            }
            else {
              uVar28 = uVar10 * 8;
              lVar14 = *(long *)(local_1d0 + 0x10);
              if (uVar28 < (ulong)(*(long *)(local_1d0 + 0x18) - lVar14) ||
                  uVar28 - (*(long *)(local_1d0 + 0x18) - lVar14) == 0) {
                *(ulong *)(local_1d0 + 0x10) = lVar14 + uVar28;
              }
              else {
                lVar14 = Zone::NewExpand(local_1d0,uVar28);
              }
            }
            puVar37 = (undefined8 *)(lVar14 + lVar33 * 8);
            *puVar37 = pNVar17;
            local_1d8 = (undefined8 *)(lVar14 + uVar10 * 8);
            puVar26 = puVar37;
            while (local_1e0 != local_1e8) {
              local_1e0 = local_1e0 + -1;
              puVar26 = puVar26 + -1;
              *puVar26 = *local_1e0;
            }
          }
          else {
            *puVar37 = pNVar17;
            puVar26 = local_1e8;
          }
          local_1e8 = puVar26;
          local_1e0 = puVar37 + 1;
          NodeProperties::ReplaceControlInput(param_1,pNVar17,0);
          NodeProperties::ReplaceEffectInput(param_1,pNVar17,0);
          pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
          pOVar13 = (Operator *)
                    CommonOperatorBuilder::Dead
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1]);
          local_170 = (undefined1  [8])0x0;
          pNVar19 = (Node *)Graph::NewNode(pGVar36,pOVar13,0,(Node **)local_170,false);
          NodeProperties::ReplaceUses(param_1,pNVar19,param_1,param_1,param_1);
          pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
          pOVar13 = (Operator *)
                    SimplifiedOperatorBuilder::ObjectIsReceiver
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x20))[0x2f]);
          local_170 = (undefined1  [8])param_1;
          pNVar21 = (Node *)Graph::NewNode(pGVar36,pOVar13,1,(Node **)local_170,false);
          pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
          pOVar13 = (Operator *)
                    CommonOperatorBuilder::Select
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1],8,0);
          local_170 = (undefined1  [8])pNVar21;
          local_168 = param_1;
          local_160 = pNVar17;
          uVar15 = Graph::NewNode(pGVar36,pOVar13,3,(Node **)local_170,false);
          (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),pNVar19,uVar15,0,0);
        }
        else {
LAB_017432e8:
          cVar7 = SharedFunctionInfoRef::kind((SharedFunctionInfoRef *)&local_180);
          if ((byte)(cVar7 - 5U) < 2) {
            pNVar19 = (Node *)NodeProperties::FindSuccessfulControlProjection(param_1);
            pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
            pOVar13 = (Operator *)
                      SimplifiedOperatorBuilder::ObjectIsReceiver
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x20))[0x2f])
            ;
            local_170 = (undefined1  [8])param_1;
            pNVar21 = (Node *)Graph::NewNode(pGVar36,pOVar13,1,(Node **)local_170,false);
            pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
            pOVar13 = (Operator *)
                      CommonOperatorBuilder::Branch
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1],0,1);
            local_170 = (undefined1  [8])pNVar21;
            local_168 = pNVar19;
            pNVar21 = (Node *)Graph::NewNode(pGVar36,pOVar13,2,(Node **)local_170,false);
            pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
            pOVar13 = (Operator *)
                      CommonOperatorBuilder::IfTrue
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1]);
            local_170 = (undefined1  [8])pNVar21;
            uVar15 = Graph::NewNode(pGVar36,pOVar13,1,(Node **)local_170,false);
            pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
            pOVar13 = (Operator *)
                      CommonOperatorBuilder::IfFalse
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1]);
            local_170 = (undefined1  [8])pNVar21;
            pNVar20 = (Node *)Graph::NewNode(pGVar36,pOVar13,1,(Node **)local_170,false);
            pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
            pOVar13 = (Operator *)
                      JSOperatorBuilder::CallRuntime
                                ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x20))[0x2e],0xa8);
            local_168 = (Node *)NodeProperties::GetFrameStateInput(param_1);
            local_170 = (undefined1  [8])pNVar18;
            local_160 = param_1;
            local_158 = pNVar20;
            pNVar20 = (Node *)Graph::NewNode(pGVar36,pOVar13,4,(Node **)local_170,false);
            if (puVar37 == local_1d8) {
              lVar33 = (long)puVar37 - (long)local_1e8 >> 3;
              uVar10 = lVar33 + 1;
              if (uVar10 >> 0x1c != 0) {
LAB_01743998:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar28 = (long)local_1d8 - (long)local_1e8 >> 2;
              if (uVar10 <= uVar28) {
                uVar10 = uVar28;
              }
              if (0x7fffffe < (ulong)((long)local_1d8 - (long)local_1e8 >> 3)) {
                uVar10 = 0xfffffff;
              }
              if (uVar10 == 0) {
                lVar14 = 0;
              }
              else {
                uVar28 = uVar10 * 8;
                lVar14 = *(long *)(local_1d0 + 0x10);
                if (uVar28 < (ulong)(*(long *)(local_1d0 + 0x18) - lVar14) ||
                    uVar28 - (*(long *)(local_1d0 + 0x18) - lVar14) == 0) {
                  *(ulong *)(local_1d0 + 0x10) = lVar14 + uVar28;
                }
                else {
                  lVar14 = Zone::NewExpand(local_1d0,uVar28);
                }
              }
              puVar37 = (undefined8 *)(lVar14 + lVar33 * 8);
              *puVar37 = pNVar20;
              local_1d8 = (undefined8 *)(lVar14 + uVar10 * 8);
              puVar26 = puVar37;
              while (local_1e0 != local_1e8) {
                local_1e0 = local_1e0 + -1;
                puVar26 = puVar26 + -1;
                *puVar26 = *local_1e0;
              }
            }
            else {
              *puVar37 = pNVar20;
              puVar26 = local_1e8;
            }
            local_1e8 = puVar26;
            local_1e0 = puVar37 + 1;
            pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
            pOVar13 = (Operator *)
                      CommonOperatorBuilder::Throw
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1]);
            local_170 = (undefined1  [8])pNVar20;
            local_168 = pNVar20;
            pNVar20 = (Node *)Graph::NewNode(pGVar36,pOVar13,2,(Node **)local_170,false);
            NodeProperties::MergeControlToEnd
                      ((Graph *)**(undefined8 **)(this + 0x20),
                       (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1],pNVar20);
            (**(code **)(**(long **)(this + 8) + 0x20))
                      (*(long **)(this + 8),pNVar19,pNVar19,pNVar19,uVar15);
            NodeProperties::ReplaceControlInput(pNVar21,pNVar19,0);
          }
        }
        pNVar19 = pNVar23;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar19 = (Node *)(*(long *)pNVar23 + 0x10);
        }
        pNVar21 = *(Node **)(pNVar19 + 8);
        if (pNVar21 != pNVar17) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar35 = (Use *)(*(long *)pNVar23 + -0x30);
          }
          else {
            pUVar35 = (Use *)(param_1 + -0x30);
          }
          if (pNVar21 != (Node *)0x0) {
            Node::RemoveUse(pNVar21,pUVar35);
          }
          *(Node **)(pNVar19 + 8) = pNVar17;
          if (pNVar17 != (Node *)0x0) {
            Node::AppendUse(pNVar17,pUVar35);
          }
        }
        pNVar16 = (Node *)CreateArtificialFrameState
                                    (this,param_1,pNVar16,*(int *)(*(long *)param_1 + 0x14) + -2,2,2
                                     ,local_180,pNStack_178,pNVar18);
        sVar4 = *(short *)(*(long *)param_1 + 0x10);
      }
      if (sVar4 == 0x2fc) {
        uVar10 = SharedFunctionInfoRef::language_mode((SharedFunctionInfoRef *)&local_180);
        if ((uVar10 & 1) == 0) {
          uVar10 = SharedFunctionInfoRef::native((SharedFunctionInfoRef *)&local_180);
          if ((uVar10 & 1) == 0) {
            pNVar17 = (Node *)NodeProperties::GetEffectInput(param_1,0);
            pNVar23 = param_1 + 0x20;
            pNVar18 = pNVar23;
            if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
              pNVar18 = (Node *)(*(long *)pNVar23 + 0x10);
            }
            uVar10 = NodeProperties::CanBePrimitive
                               (*(JSHeapBroker **)(this + 0x28),*(Node **)(pNVar18 + 8),pNVar17);
            if ((uVar10 & 1) != 0) {
              puVar22 = (uint *)CallParametersOf(*(Operator **)param_1);
              lVar33 = *(long *)(this + 0x28);
              if (*(char *)(lVar33 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","storage_.is_populated_");
              }
              uStack_1f8 = *(undefined8 *)(lVar33 + 0x28);
              local_200 = *(undefined8 *)(lVar33 + 0x20);
              this_00 = *(JSGraph **)(this + 0x20);
              _local_170 = NativeContextRef::global_proxy_object((NativeContextRef *)&local_200);
              pNVar18 = (Node *)JSGraph::Constant(this_00,(ObjectRef *)local_170);
              pGVar36 = (Graph *)**(undefined8 **)(this + 0x20);
              pOVar13 = (Operator *)
                        SimplifiedOperatorBuilder::ConvertReceiver
                                  ((SimplifiedOperatorBuilder *)
                                   (*(undefined8 **)(this + 0x20))[0x2f],*puVar22 >> 0x1d & 3);
              if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
                pNVar23 = (Node *)(*(long *)pNVar23 + 0x10);
              }
              local_170 = *(undefined1 (*) [8])(pNVar23 + 8);
              local_168 = pNVar18;
              local_160 = pNVar17;
              local_158 = pNVar1;
              pNVar23 = (Node *)Graph::NewNode(pGVar36,pOVar13,4,(Node **)local_170,false);
              NodeProperties::ReplaceValueInput(param_1,pNVar23,1);
              NodeProperties::ReplaceEffectInput(param_1,pNVar23,0);
            }
          }
        }
      }
      iVar9 = SharedFunctionInfoRef::internal_formal_parameter_count
                        ((SharedFunctionInfoRef *)&local_180);
      iVar25 = *(int *)(*(long *)param_1 + 0x14) + -2;
      if (iVar25 != iVar9) {
        pNVar16 = (Node *)CreateArtificialFrameState
                                    (this,param_1,pNVar16,iVar25,0xffffffff,1,local_180,pNStack_178,
                                     0);
      }
      uVar15 = InlineCall(this,param_1,pNVar34,local_1a8,pNVar16,pNVar1,pNVar2,local_1a0,
                          (ZoneVector *)&local_1e8);
      if (local_1e8 != (undefined8 *)0x0) {
        local_1e0 = local_1e8;
      }
      goto LAB_01743928;
    }
    iVar25 = 0x32;
    do {
      plVar27 = plVar11 + 4;
      if ((~*(uint *)((long)plVar11 + 0x14) & 0xf000000) == 0) {
        plVar27 = (long *)(*plVar27 + 0x10);
      }
      plVar11 = (long *)plVar27[5];
      if (*(short *)(*plVar11 + 0x10) != 0x29) goto LAB_01742af0;
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
    if (FLAG_trace_turbo_inlining == '\0') goto LAB_0174311c;
    local_170 = (undefined1  [8])
                (std::__ndk1::
                 basic_ostream<char,v8::internal::StdoutStream::char_traits<char>>-in-v8::internal::
                 StdoutStream::construction_vtable + 0x18);
    local_110[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_110,&local_168);
    local_80 = 0xffffffff;
    local_170 = (undefined1  [8])&PTR__StdoutStream_01ca1128;
    local_110[0] = &PTR__StdoutStream_01ca1150;
    local_168 = (Node *)&PTR__basic_streambuf_01c671a8;
    local_88 = 0;
    std::__ndk1::locale::locale((locale *)&local_160);
    local_168 = (Node *)&PTR__AndroidLogStream_01cbc008;
    uStack_130 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_158 = (Node *)0x0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)local_170,"Not inlining ",0xd);
    compiler::operator<<((basic_ostream *)local_170,(ObjectRef *)&local_180);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)local_170," into ",6);
    compiler::operator<<((basic_ostream *)local_170,aOStack_198);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)local_170,
               " because call has exceeded the maximum depth for function inlining.",0x43);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)local_170,"\n",1);
  }
  local_110[0] = &PTR__StdoutStream_01ca1150;
  local_170 = (undefined1  [8])&PTR__StdoutStream_01ca1128;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  uVar15 = 0;
LAB_01743928:
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar15);
  }
  return;
}

