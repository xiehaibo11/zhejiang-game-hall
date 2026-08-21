
/* v8::internal::compiler::JSCallReducer::ReduceJSCall(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSCallReducer::ReduceJSCall(JSCallReducer *this,Node *param_1)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  Node *pNVar19;
  undefined8 uVar20;
  Node *pNVar21;
  ulong uVar22;
  Node *pNVar23;
  undefined8 *puVar24;
  ProcessedFeedback *this_00;
  Node *pNVar25;
  JSOperatorBuilder *pJVar26;
  basic_ostream *pbVar27;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_01;
  long *plVar28;
  Operator *pOVar29;
  long lVar30;
  Graph *pGVar31;
  ulong uVar32;
  JSGraph *pJVar33;
  int iVar34;
  Zone *pZVar35;
  undefined1 auVar36 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar18 = (uint *)CallParametersOf(*(Operator **)param_1);
  pNVar19 = (Node *)NodeProperties::GetValueInput(param_1,0);
  uVar20 = NodeProperties::GetControlInput(param_1,0);
  pNVar21 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  pOVar29 = *(Operator **)pNVar19;
  sVar1 = *(short *)(pOVar29 + 0x10);
  if (sVar1 == 0x2da) {
    puVar24 = (undefined8 *)CreateClosureParametersOf(pOVar29);
    ObjectRef::ObjectRef((ObjectRef *)local_90,*(undefined8 *)(this + 0x18),*puVar24,0);
    uVar32 = ObjectRef::IsSharedFunctionInfo((ObjectRef *)local_90);
    auVar36._8_8_ = local_78._8_8_;
    auVar36._0_8_ = local_78._0_8_;
    if ((uVar32 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    lVar30 = -0x30;
LAB_016db244:
    local_78 = auVar36;
    param_1 = (Node *)ReduceJSCall(this,param_1,
                                   (SharedFunctionInfoRef *)(&stack0xffffffffffffffa0 + lVar30));
    goto LAB_016db5f8;
  }
  uVar32 = (ulong)*puVar18 & 0x7ffffff;
  if (sVar1 == 0x2d9) {
    pNVar25 = (Node *)NodeProperties::GetValueInput(pNVar19,0);
    pNVar23 = (Node *)NodeProperties::GetValueInput(pNVar19,1);
    puVar24 = (undefined8 *)CreateBoundFunctionParametersOf(*(Operator **)pNVar19);
    uVar20 = *puVar24;
    NodeProperties::ReplaceValueInput(param_1,pNVar25,0);
    NodeProperties::ReplaceValueInput(param_1,pNVar23,1);
    iVar17 = (int)uVar20;
    if (0 < iVar17) {
      iVar34 = 0;
      do {
        pNVar25 = (Node *)NodeProperties::GetValueInput(pNVar19,iVar34 + 2);
        Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),iVar34 + 2,pNVar25);
        iVar34 = iVar34 + 1;
      } while (iVar17 != iVar34);
      uVar32 = (iVar17 - 1) + uVar32 + 1;
    }
    uVar22 = NodeProperties::CanBeNullOrUndefined(*(JSHeapBroker **)(this + 0x18),pNVar23,pNVar21);
    pJVar26 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar16 = 1;
    if ((uVar22 & 1) != 0) {
      uVar16 = 2;
    }
    uVar2 = *puVar18 >> 0x1c;
LAB_016db1ec:
    pOVar29 = (Operator *)
              JSOperatorBuilder::Call(pJVar26,uVar32,puVar18 + 1,puVar18 + 2,uVar16,uVar2 & 1,1);
    NodeProperties::ChangeOp(param_1,pOVar29);
LAB_016db200:
    pNVar19 = (Node *)ReduceJSCall(this,param_1);
    auVar10._8_8_ = local_90._8_8_;
    auVar10._0_8_ = local_90._0_8_;
    if (pNVar19 != (Node *)0x0) {
      param_1 = pNVar19;
      local_90 = auVar10;
    }
  }
  else {
    if (sVar1 == 0x1e) {
      ObjectRef::ObjectRef
                ((ObjectRef *)local_90,*(undefined8 *)(this + 0x18),*(undefined8 *)(pOVar29 + 0x30),
                 0);
      uVar22 = ObjectRef::IsHeapObject((ObjectRef *)local_90);
      if ((uVar22 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsHeapObject()");
      }
      uVar22 = ObjectRef::IsJSFunction((ObjectRef *)local_90);
      if ((uVar22 & 1) == 0) {
        uVar22 = ObjectRef::IsJSBoundFunction((ObjectRef *)local_90);
        auVar11._8_8_ = local_d0._8_8_;
        auVar11._0_8_ = local_d0._0_8_;
        if ((uVar22 & 1) != 0) {
          local_d0 = ObjectRef::AsJSBoundFunction((ObjectRef *)local_90);
          if (FLAG_concurrent_inlining != '\0') {
            uVar22 = JSBoundFunctionRef::serialized((JSBoundFunctionRef *)local_d0);
            if ((uVar22 & 1) == 0) {
              auVar11 = local_d0;
              if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
                pbVar27 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
                pbVar27 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar27,"Missing ",8);
                pbVar27 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar27,"data for function ",0x12);
                pbVar27 = (basic_ostream *)compiler::operator<<(pbVar27,(ObjectRef *)local_d0);
                pbVar27 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar27," (",2);
                pbVar27 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar27,"../../src/compiler/js-call-reducer.cc",0x25);
                this_01 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar27,":",1);
                iVar17 = 0xf04;
                goto LAB_016db588;
              }
              goto LAB_016db5f4;
            }
          }
          local_78 = JSBoundFunctionRef::bound_this((JSBoundFunctionRef *)local_d0);
          uVar16 = ObjectRef::IsNullOrUndefined((ObjectRef *)local_78);
          pJVar33 = *(JSGraph **)(this + 0x10);
          uVar16 = ~uVar16 & 1;
          local_a0 = JSBoundFunctionRef::bound_target_function((JSBoundFunctionRef *)local_d0);
          pNVar19 = (Node *)JSGraph::Constant(pJVar33,(ObjectRef *)local_a0);
          NodeProperties::ReplaceValueInput(param_1,pNVar19,0);
          pNVar19 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_78);
          NodeProperties::ReplaceValueInput(param_1,pNVar19,1);
          auVar36 = JSBoundFunctionRef::bound_arguments((JSBoundFunctionRef *)local_d0);
          local_a0 = auVar36;
          iVar17 = FixedArrayBaseRef::length((FixedArrayBaseRef *)local_a0);
          pJVar33 = *(JSGraph **)(this + 0x10);
          if (0 < iVar17) {
            lVar30 = 0;
            do {
              pZVar35 = (Zone *)**(undefined8 **)pJVar33;
              auVar36 = FixedArrayRef::get((FixedArrayRef *)local_a0,(int)lVar30);
              local_b0 = auVar36;
              pNVar19 = (Node *)JSGraph::Constant(pJVar33,(ObjectRef *)local_b0);
              Node::InsertInput(param_1,pZVar35,(int)lVar30 + 2,pNVar19);
              iVar17 = FixedArrayBaseRef::length((FixedArrayBaseRef *)local_a0);
              pJVar33 = *(JSGraph **)(this + 0x10);
              lVar30 = lVar30 + 1;
            } while ((int)lVar30 < iVar17);
            uVar32 = uVar32 + lVar30;
          }
          pJVar26 = *(JSOperatorBuilder **)(pJVar33 + 0x170);
          uVar2 = *puVar18 >> 0x1c & 0xfffffff1;
          goto LAB_016db1ec;
        }
      }
      else {
        local_d0 = ObjectRef::AsJSFunction((ObjectRef *)local_90);
        if (FLAG_concurrent_inlining != '\0') {
          uVar32 = JSFunctionRef::serialized((JSFunctionRef *)local_d0);
          if ((uVar32 & 1) == 0) {
            auVar11 = local_d0;
            if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
              pbVar27 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
              pbVar27 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar27,"Missing ",8);
              pbVar27 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar27,"data for function ",0x12);
              pbVar27 = (basic_ostream *)compiler::operator<<(pbVar27,(ObjectRef *)local_d0);
              pbVar27 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar27," (",2);
              pbVar27 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar27,"../../src/compiler/js-call-reducer.cc",0x25);
              this_01 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar27,":",1);
              iVar17 = 0xef7;
LAB_016db588:
              pbVar27 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  (this_01,iVar17);
              pbVar27 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar27,")",1);
              std::__ndk1::ios_base::getloc();
              plVar28 = (long *)std::__ndk1::locale::use_facet
                                          ((locale *)local_78,(id *)&std::__ndk1::ctype<char>::id);
              cVar15 = (**(code **)(*plVar28 + 0x38))(plVar28,10);
              std::__ndk1::locale::~locale((locale *)local_78);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar27,cVar15);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar27);
              auVar11 = local_d0;
            }
            goto LAB_016db5f4;
          }
        }
        local_78 = JSFunctionRef::native_context((JSFunctionRef *)local_d0);
        lVar30 = *(long *)(this + 0x18);
        if (*(char *)(lVar30 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","storage_.is_populated_");
        }
        local_a0._8_8_ = *(undefined8 *)(lVar30 + 0x28);
        local_a0._0_8_ = *(undefined8 *)(lVar30 + 0x20);
        uVar32 = ObjectRef::equals((ObjectRef *)local_78,(ObjectRef *)local_a0);
        auVar11 = local_d0;
        if ((uVar32 & 1) != 0) {
          auVar36 = JSFunctionRef::shared((JSFunctionRef *)local_d0);
          lVar30 = -0x18;
          goto LAB_016db244;
        }
      }
    }
    else {
      uVar32 = FUN_016e5610(pNVar19);
      auVar14._8_8_ = local_d0._8_8_;
      auVar14._0_8_ = local_d0._0_8_;
      auVar13._8_8_ = local_d0._8_8_;
      auVar13._0_8_ = local_d0._0_8_;
      auVar12._8_8_ = local_d0._8_8_;
      auVar12._0_8_ = local_d0._0_8_;
      auVar11._8_8_ = local_d0._8_8_;
      auVar11._0_8_ = local_d0._0_8_;
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar8._8_8_ = local_90._8_8_;
      auVar8._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      auVar6._8_8_ = local_78._8_8_;
      auVar6._0_8_ = local_78._0_8_;
      auVar5._8_8_ = local_78._8_8_;
      auVar5._0_8_ = local_78._0_8_;
      auVar4._8_8_ = local_78._8_8_;
      auVar4._0_8_ = local_78._0_8_;
      if (((((uVar32 & 1) != 0) &&
           (local_78 = auVar4, local_90 = auVar7, auVar11 = auVar12,
           (*(byte *)((long)puVar18 + 3) >> 3 & 1) == 0)) &&
          (local_78 = auVar5, local_90 = auVar8, auVar11 = auVar13, *(long *)(puVar18 + 2) != 0)) &&
         (local_78 = auVar6, local_90 = auVar9, auVar11 = auVar14, puVar18[4] != 0xffffffff)) {
        this_00 = (ProcessedFeedback *)
                  JSHeapBroker::GetFeedbackForCall
                            (*(JSHeapBroker **)(this + 0x18),(FeedbackSource *)(puVar18 + 2));
        if (*(int *)this_00 == 0) {
          param_1 = (Node *)ReduceSoftDeoptimize(this,param_1,8);
          goto LAB_016db5f8;
        }
        lVar30 = ProcessedFeedback::AsCall(this_00);
        local_d0._8_8_ = *(undefined8 *)(lVar30 + 0x10);
        local_d0._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(lVar30 + 8);
        auVar11 = *(undefined1 (*) [16])(lVar30 + 8);
        local_c0 = *(undefined8 *)(lVar30 + 0x18);
        if (local_d0[0] != (JSFunctionRef)0x0) {
          local_90 = HeapObjectRef::map((HeapObjectRef *)((ulong)local_d0 | 8));
          uVar32 = MapRef::is_callable((MapRef *)local_90);
          auVar11._8_8_ = local_d0._8_8_;
          auVar11._0_8_ = local_d0._0_8_;
          if ((uVar32 & 1) != 0) {
            pNVar25 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),
                                                (ObjectRef *)((ulong)local_d0 | 8));
            pGVar31 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar29 = (Operator *)
                      SimplifiedOperatorBuilder::ReferenceEqual
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f])
            ;
            local_90._0_8_ = pNVar19;
            local_90._8_8_ = pNVar25;
            pNVar19 = (Node *)Graph::NewNode(pGVar31,pOVar29,2,(Node **)local_90,false);
            pGVar31 = (Graph *)**(undefined8 **)(this + 0x10);
            local_78._0_8_ = 0;
            local_78._8_4_ = 0xffffffff;
            pOVar29 = (Operator *)
                      SimplifiedOperatorBuilder::CheckIf
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                                 0x23,local_78);
            local_90._0_8_ = pNVar19;
            local_90._8_8_ = pNVar21;
            local_80 = uVar20;
            pNVar19 = (Node *)Graph::NewNode(pGVar31,pOVar29,3,(Node **)local_90,false);
            NodeProperties::ReplaceValueInput(param_1,pNVar25,0);
            NodeProperties::ReplaceEffectInput(param_1,pNVar19,0);
            goto LAB_016db200;
          }
        }
      }
    }
LAB_016db5f4:
    param_1 = (Node *)0x0;
    local_d0 = auVar11;
  }
LAB_016db5f8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

