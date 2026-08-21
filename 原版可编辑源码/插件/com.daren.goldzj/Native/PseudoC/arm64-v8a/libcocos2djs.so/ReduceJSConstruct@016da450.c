
/* v8::internal::compiler::JSCallReducer::ReduceJSConstruct(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceJSConstruct(JSCallReducer *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  Node *pNVar9;
  Node *pNVar10;
  undefined8 uVar11;
  Node *pNVar12;
  ProcessedFeedback *this_00;
  long lVar13;
  ulong uVar14;
  Operator *pOVar15;
  Node *pNVar16;
  Node *pNVar17;
  basic_ostream *pbVar18;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_01;
  long *plVar19;
  int *piVar20;
  Operator *pOVar21;
  short sVar22;
  JSOperatorBuilder *pJVar23;
  int iVar24;
  JSGraph *pJVar25;
  Graph *pGVar26;
  Graph *pGVar27;
  Zone *pZVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  Node *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  piVar8 = (int *)ConstructParametersOf(*(Operator **)param_1);
  iVar7 = *piVar8;
  iVar24 = iVar7 + -2;
  pNVar9 = (Node *)NodeProperties::GetValueInput(param_1,0);
  iVar1 = iVar7 + -1;
  pNVar10 = (Node *)NodeProperties::GetValueInput(param_1,iVar1);
  uVar11 = NodeProperties::GetEffectInput(param_1,0);
  pNVar12 = (Node *)NodeProperties::GetControlInput(param_1,0);
  auVar29._8_8_ = local_80._8_8_;
  auVar29._0_8_ = local_80._0_8_;
  if ((*(long *)(piVar8 + 2) == 0) || (local_80 = auVar29, piVar8[4] == -1)) goto LAB_016da794;
  this_00 = (ProcessedFeedback *)
            JSHeapBroker::GetFeedbackForCall
                      (*(JSHeapBroker **)(this + 0x18),(FeedbackSource *)(piVar8 + 2));
  if (*(int *)this_00 == 0) {
    param_1 = (Node *)ReduceSoftDeoptimize(this,param_1,9);
    goto LAB_016daddc;
  }
  lVar13 = ProcessedFeedback::AsCall(this_00);
  local_b0._8_8_ = *(undefined8 *)(lVar13 + 0x10);
  local_b0._0_8_ = *(undefined8 *)(lVar13 + 8);
  local_a0 = *(undefined8 *)(lVar13 + 0x18);
  if (local_b0[0] == (HeapObjectRef)0x0) goto LAB_016da794;
  uVar14 = ObjectRef::IsAllocationSite((ObjectRef *)((ulong)local_b0 | 8));
  auVar30._8_8_ = local_80._8_8_;
  auVar30._0_8_ = local_80._0_8_;
  if ((uVar14 & 1) != 0) {
    lVar13 = *(long *)(this + 0x18);
    if (*(char *)(lVar13 + 0x18) != '\x01') goto LAB_016daea4;
    local_90._8_8_ = *(undefined8 *)(lVar13 + 0x28);
    local_90._0_8_ = *(undefined8 *)(lVar13 + 0x20);
    pJVar25 = *(JSGraph **)(this + 0x10);
    local_80 = NativeContextRef::array_function((NativeContextRef *)local_90);
    pNVar10 = (Node *)JSGraph::Constant(pJVar25,(ObjectRef *)local_80);
    pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar15 = (Operator *)
              SimplifiedOperatorBuilder::ReferenceEqual
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_80._0_8_ = pNVar9;
    local_80._8_8_ = pNVar10;
    pNVar9 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,(Node **)local_80,false);
    pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
    local_90._0_8_ = 0;
    local_90._8_4_ = 0xffffffff;
    pOVar15 = (Operator *)
              SimplifiedOperatorBuilder::CheckIf
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],0x23,
                         local_90);
    local_80._0_8_ = pNVar9;
    local_80._8_8_ = uVar11;
    local_70 = pNVar12;
    pNVar9 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,(Node **)local_80,false);
    NodeProperties::ReplaceEffectInput(param_1,pNVar9,0);
    for (iVar7 = iVar24; 0 < iVar7; iVar7 = iVar7 + -1) {
      pNVar9 = (Node *)NodeProperties::GetValueInput(param_1,iVar7);
      NodeProperties::ReplaceValueInput(param_1,pNVar9,iVar7 + 1);
    }
    NodeProperties::ReplaceValueInput(param_1,pNVar10,1);
    pJVar23 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    local_80 = ObjectRef::AsAllocationSite((ObjectRef *)((ulong)local_b0 | 8));
    uVar11 = AllocationSiteRef::object((AllocationSiteRef *)local_80);
    pOVar15 = (Operator *)JSOperatorBuilder::CreateArray(pJVar23,(long)iVar24,uVar11);
LAB_016da940:
    NodeProperties::ChangeOp(param_1,pOVar15);
    goto LAB_016daddc;
  }
  if ((local_b0[0] == (HeapObjectRef)0x0) ||
     (local_80 = auVar30, *(short *)(*(long *)pNVar10 + 0x10) == 0x1e)) {
LAB_016da794:
    sVar22 = *(short *)(*(long *)pNVar9 + 0x10);
    if (sVar22 == 0x1e) {
      ObjectRef::ObjectRef
                ((ObjectRef *)local_80,*(undefined8 *)(this + 0x18),
                 *(undefined8 *)(*(long *)pNVar9 + 0x30),0);
      uVar14 = ObjectRef::IsHeapObject((ObjectRef *)local_80);
      if ((uVar14 & 1) == 0) goto LAB_016dae90;
      local_b0 = local_80;
      auVar29 = HeapObjectRef::map((HeapObjectRef *)local_b0);
      local_80 = auVar29;
      uVar14 = MapRef::is_constructor((MapRef *)local_80);
      if ((uVar14 & 1) == 0) {
        NodeProperties::ReplaceValueInputs(param_1,pNVar9);
        pOVar15 = (Operator *)
                  JSOperatorBuilder::CallRuntime
                            (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),0xa7);
        goto LAB_016da940;
      }
      uVar14 = ObjectRef::IsJSFunction((ObjectRef *)local_b0);
      if ((uVar14 & 1) == 0) {
        uVar14 = ObjectRef::IsJSBoundFunction((ObjectRef *)local_b0);
        if ((uVar14 & 1) != 0) {
          local_90 = ObjectRef::AsJSBoundFunction((ObjectRef *)local_b0);
          if (FLAG_concurrent_inlining != '\0') {
            uVar14 = JSBoundFunctionRef::serialized((JSBoundFunctionRef *)local_90);
            if ((uVar14 & 1) == 0) {
              if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
                pbVar18 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
                pbVar18 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar18,"Missing ",8);
                pbVar18 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar18,"function, not serialized: ",0x1a);
                pbVar18 = (basic_ostream *)compiler::operator<<(pbVar18,(ObjectRef *)local_90);
                pbVar18 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar18," (",2);
                pbVar18 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar18,"../../src/compiler/js-call-reducer.cc",0x25);
                this_01 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar18,":",1);
                iVar24 = 0x1187;
                goto LAB_016dabe4;
              }
              goto LAB_016dadd8;
            }
          }
          local_c0 = JSBoundFunctionRef::bound_target_function((JSBoundFunctionRef *)local_90);
          local_d0 = JSBoundFunctionRef::bound_arguments((JSBoundFunctionRef *)local_90);
          pNVar12 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_c0);
          NodeProperties::ReplaceValueInput(param_1,pNVar12,0);
          pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar15 = (Operator *)
                    CommonOperatorBuilder::Select
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,0);
          pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar21 = (Operator *)
                    SimplifiedOperatorBuilder::ReferenceEqual
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
          local_80._0_8_ = pNVar9;
          local_80._8_8_ = pNVar10;
          pNVar9 = (Node *)Graph::NewNode(pGVar27,pOVar21,2,(Node **)local_80,false);
          local_80._8_8_ = JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_c0);
          local_80._0_8_ = pNVar9;
          local_70 = pNVar10;
          pNVar9 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,(Node **)local_80,false);
          NodeProperties::ReplaceValueInput(param_1,pNVar9,iVar1);
          iVar7 = FixedArrayBaseRef::length((FixedArrayBaseRef *)local_d0);
          pJVar25 = *(JSGraph **)(this + 0x10);
          if (0 < iVar7) {
            iVar7 = 0;
            do {
              iVar1 = iVar7 + 1;
              pZVar28 = (Zone *)**(undefined8 **)pJVar25;
              auVar29 = FixedArrayRef::get((FixedArrayRef *)local_d0,iVar7);
              local_80 = auVar29;
              pNVar9 = (Node *)JSGraph::Constant(pJVar25,(ObjectRef *)local_80);
              Node::InsertInput(param_1,pZVar28,iVar1,pNVar9);
              iVar6 = FixedArrayBaseRef::length((FixedArrayBaseRef *)local_d0);
              pJVar25 = *(JSGraph **)(this + 0x10);
              iVar7 = iVar1;
            } while (iVar1 < iVar6);
            iVar24 = iVar24 + iVar1;
          }
          local_80._0_8_ = (Node *)0x0;
          local_80._8_4_ = 0xffffffff;
          pOVar15 = (Operator *)
                    JSOperatorBuilder::Construct
                              (*(JSOperatorBuilder **)(pJVar25 + 0x170),iVar24 + 2,
                               (CallFrequency *)(piVar8 + 1),(FeedbackSource *)local_80);
          NodeProperties::ChangeOp(param_1,pOVar15);
          goto LAB_016daaf8;
        }
        goto LAB_016dac74;
      }
      local_90 = ObjectRef::AsJSFunction((ObjectRef *)local_b0);
      if (FLAG_concurrent_inlining == '\0') {
LAB_016da818:
        auVar29 = JSFunctionRef::shared((JSFunctionRef *)local_90);
        local_80 = auVar29;
        uVar14 = SharedFunctionInfoRef::HasBreakInfo((SharedFunctionInfoRef *)local_80);
        if ((uVar14 & 1) == 0) {
          auVar30 = JSFunctionRef::native_context((JSFunctionRef *)local_90);
          lVar13 = *(long *)(this + 0x18);
          if (*(char *)(lVar13 + 0x18) != '\x01') {
LAB_016daea4:
            local_80 = auVar30;
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","storage_.is_populated_");
          }
          local_c0._8_8_ = *(undefined8 *)(lVar13 + 0x28);
          local_c0._0_8_ = *(undefined8 *)(lVar13 + 0x20);
          local_80 = auVar30;
          uVar14 = ObjectRef::equals((ObjectRef *)local_80,(ObjectRef *)local_c0);
          if ((uVar14 & 1) != 0) {
            auVar29 = JSFunctionRef::shared((JSFunctionRef *)local_90);
            local_80 = auVar29;
            uVar14 = SharedFunctionInfoRef::HasBuiltinId((SharedFunctionInfoRef *)local_80);
            if ((uVar14 & 1) != 0) {
              local_c0 = JSFunctionRef::shared((JSFunctionRef *)local_90);
              iVar6 = SharedFunctionInfoRef::builtin_id((SharedFunctionInfoRef *)local_c0);
              if (iVar6 < 0x22c) {
                iVar4 = iVar24;
                if (iVar6 == 0x9b) {
                  for (; 0 < iVar4; iVar4 = iVar4 + -1) {
                    pNVar9 = (Node *)NodeProperties::GetValueInput(param_1,iVar4);
                    NodeProperties::ReplaceValueInput(param_1,pNVar9,iVar4 + 1);
                  }
                  NodeProperties::ReplaceValueInput(param_1,pNVar10,1);
                  pOVar15 = (Operator *)
                            JSOperatorBuilder::CreateArray
                                      (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                                       (long)iVar24,0);
                  goto LAB_016da940;
                }
                if (iVar6 == 0x1aa) {
                  if (iVar24 == 0) {
LAB_016da914:
                    pOVar15 = (Operator *)
                              JSOperatorBuilder::Create
                                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
                    goto LAB_016da940;
                  }
                  if (*(short *)(*(long *)pNVar10 + 0x10) == 0x1e) {
                    ObjectRef::ObjectRef
                              ((ObjectRef *)local_80,*(undefined8 *)(this + 0x18),
                               *(undefined8 *)(*(long *)pNVar10 + 0x30),0);
                    uVar14 = ObjectRef::IsHeapObject((ObjectRef *)local_80);
                    if ((uVar14 & 1) == 0) {
LAB_016dae90:
                    /* WARNING: Subroutine does not return */
                      V8_Fatal("Check failed: %s.","IsHeapObject()");
                    }
                    uVar14 = ObjectRef::equals((ObjectRef *)local_80,(ObjectRef *)local_90);
                    if ((uVar14 & 1) == 0) {
                      for (; 0 < iVar24; iVar24 = iVar24 + -1) {
                        Node::RemoveInput(param_1,iVar24);
                      }
                      goto LAB_016da914;
                    }
                  }
                }
              }
              else {
                if (iVar6 == 0x22c) {
                  auVar29 = JSFunctionRef::shared((JSFunctionRef *)local_90);
                  local_80 = auVar29;
                  param_1 = (Node *)ReduceTypedArrayConstructor
                                              (this,param_1,(SharedFunctionInfoRef *)local_80);
                  goto LAB_016daddc;
                }
                if (iVar6 == 0x333) {
                  param_1 = (Node *)ReducePromiseConstructor(this,param_1);
                  goto LAB_016daddc;
                }
              }
            }
LAB_016dac74:
            sVar22 = *(short *)(*(long *)pNVar9 + 0x10);
            goto LAB_016dac7c;
          }
        }
      }
      else {
        uVar14 = JSFunctionRef::serialized((JSFunctionRef *)local_90);
        if ((uVar14 & 1) != 0) goto LAB_016da818;
        if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
          pbVar18 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
          pbVar18 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar18,"Missing ",8);
          pbVar18 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar18,"function, not serialized: ",0x1a);
          pbVar18 = (basic_ostream *)compiler::operator<<(pbVar18,(ObjectRef *)local_90);
          pbVar18 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar18," (",2);
          pbVar18 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar18,"../../src/compiler/js-call-reducer.cc",0x25);
          this_01 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar18,":",1);
          iVar24 = 0x114a;
LAB_016dabe4:
          pbVar18 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              (this_01,iVar24);
          pbVar18 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar18,")",1);
          std::__ndk1::ios_base::getloc();
          plVar19 = (long *)std::__ndk1::locale::use_facet
                                      ((locale *)local_80,(id *)&std::__ndk1::ctype<char>::id);
          cVar5 = (**(code **)(*plVar19 + 0x38))(plVar19,10);
          std::__ndk1::locale::~locale((locale *)local_80);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar18,cVar5);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar18);
        }
      }
    }
    else {
LAB_016dac7c:
      if (sVar22 == 0x2d9) {
        pNVar12 = (Node *)NodeProperties::GetValueInput(pNVar9,0);
        piVar20 = (int *)CreateBoundFunctionParametersOf(*(Operator **)pNVar9);
        iVar6 = *piVar20;
        NodeProperties::ReplaceValueInput(param_1,pNVar12,0);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::Select
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,0);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar21 = (Operator *)
                  SimplifiedOperatorBuilder::ReferenceEqual
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_80._0_8_ = pNVar9;
        local_80._8_8_ = pNVar10;
        local_80._0_8_ = Graph::NewNode(pGVar27,pOVar21,2,(Node **)local_80,false);
        local_80._8_8_ = pNVar12;
        local_70 = pNVar10;
        pNVar10 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,(Node **)local_80,false);
        NodeProperties::ReplaceValueInput(param_1,pNVar10,iVar1);
        if (0 < iVar6) {
          iVar24 = 0;
          do {
            pNVar10 = (Node *)NodeProperties::GetValueInput(pNVar9,iVar24 + 2);
            iVar24 = iVar24 + 1;
            Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),iVar24,pNVar10);
          } while (iVar6 != iVar24);
          iVar24 = iVar7 + iVar6 + -2;
        }
        local_80._0_8_ = (Node *)0x0;
        local_80._8_4_ = 0xffffffff;
        pOVar15 = (Operator *)
                  JSOperatorBuilder::Construct
                            (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),iVar24 + 2,
                             (CallFrequency *)(piVar8 + 1),(FeedbackSource *)local_80);
        NodeProperties::ChangeOp(param_1,pOVar15);
        pNVar9 = (Node *)ReduceJSConstruct(this,param_1);
        goto LAB_016dadcc;
      }
    }
LAB_016dadd8:
    param_1 = (Node *)0x0;
  }
  else {
    local_80 = HeapObjectRef::map((HeapObjectRef *)((ulong)local_b0 | 8));
    uVar14 = MapRef::is_constructor((MapRef *)local_80);
    if ((uVar14 & 1) == 0) goto LAB_016da794;
    pNVar16 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),
                                        (ObjectRef *)((ulong)local_b0 | 8));
    pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar15 = (Operator *)
              SimplifiedOperatorBuilder::ReferenceEqual
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_80._0_8_ = pNVar10;
    local_80._8_8_ = pNVar16;
    pNVar17 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,(Node **)local_80,false);
    pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
    local_90._0_8_ = 0;
    local_90._8_4_ = 0xffffffff;
    pOVar15 = (Operator *)
              SimplifiedOperatorBuilder::CheckIf
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],0x23,
                         local_90);
    local_80._0_8_ = pNVar17;
    local_80._8_8_ = uVar11;
    local_70 = pNVar12;
    pNVar12 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,(Node **)local_80,false);
    NodeProperties::ReplaceValueInput(param_1,pNVar16,iVar1);
    NodeProperties::ReplaceEffectInput(param_1,pNVar12,0);
    if (pNVar9 == pNVar10) {
      NodeProperties::ReplaceValueInput(param_1,pNVar16,0);
    }
LAB_016daaf8:
    pNVar9 = (Node *)ReduceJSConstruct(this,param_1);
LAB_016dadcc:
    auVar3._8_8_ = local_80._8_8_;
    auVar3._0_8_ = local_80._0_8_;
    if (pNVar9 != (Node *)0x0) {
      param_1 = pNVar9;
      local_80 = auVar3;
    }
  }
LAB_016daddc:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

