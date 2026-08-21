
/* v8::internal::compiler::JSTypedLowering::ReduceJSCall(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSCall(JSTypedLowering *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar9;
  int iVar10;
  int iVar8;
  uint *puVar11;
  Node *pNVar12;
  Node *pNVar13;
  Node *pNVar14;
  undefined8 uVar15;
  ulong uVar16;
  AccessBuilder *this_00;
  Operator *pOVar17;
  JSGraph *pJVar18;
  basic_ostream *pbVar19;
  long *plVar20;
  undefined8 uVar21;
  CallDescriptor *pCVar22;
  Node *this_01;
  Node *this_02;
  Node *pNVar23;
  undefined8 *puVar24;
  CommonOperatorBuilder *pCVar25;
  JSTypedLowering *pJVar26;
  Zone *pZVar27;
  uint uVar28;
  long lVar29;
  Graph *pGVar30;
  SimplifiedOperatorBuilder *this_03;
  Use *pUVar31;
  undefined1 auVar32 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  long local_d0;
  int *local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined1 local_a0 [16];
  Node *local_90;
  undefined8 uStack_88;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar11 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar2 = *puVar11;
  uVar1 = uVar2 & 0x7ffffff;
  pNVar12 = (Node *)NodeProperties::GetValueInput(param_1,0);
  local_c8 = *(int **)(pNVar12 + 8);
  pNVar13 = (Node *)NodeProperties::GetValueInput(param_1,1);
  lVar29 = *(long *)(pNVar13 + 8);
  local_d0 = lVar29;
  pNVar14 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar15 = NodeProperties::GetControlInput(param_1,0);
  uVar28 = 0;
  if (lVar29 != 0x181) {
    uVar16 = Type::SlowIs((Type *)&local_d0,0x181);
    if ((uVar16 & 1) == 0) {
      uVar28 = uVar2 >> 0x1d & 3;
      uVar16 = Type::Maybe((Type *)&local_d0,0x181);
      if ((uVar16 & 1) == 0) {
        uVar28 = 1;
      }
    }
    else {
      uVar28 = 0;
    }
  }
  iVar10 = uVar1 - 2;
  if ((((ulong)local_c8 & 1) == 0) && (*local_c8 == 0)) {
    lVar29 = Type::AsHeapConstant((Type *)&local_c8);
    uVar16 = ObjectRef::IsJSFunction((ObjectRef *)(lVar29 + 8));
    if ((uVar16 & 1) == 0) goto LAB_01764804;
    lVar29 = Type::AsHeapConstant((Type *)&local_c8);
    local_e0 = ObjectRef::AsJSFunction((ObjectRef *)(lVar29 + 8));
    uVar16 = JSFunctionRef::serialized((JSFunctionRef *)local_e0);
    if ((uVar16 & 1) == 0) {
      if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
        pbVar19 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
        pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar19,"Missing ",8);
        pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar19,"data for function ",0x12);
        pbVar19 = (basic_ostream *)compiler::operator<<(pbVar19,(ObjectRef *)local_e0);
        pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar19," (",2);
        pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar19,"../../src/compiler/js-typed-lowering.cc",0x27);
        pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar19,":",1);
        pbVar19 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar19,0x689);
        pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar19,")",1);
        std::__ndk1::ios_base::getloc();
        plVar20 = (long *)std::__ndk1::locale::use_facet
                                    ((locale *)local_a0,(id *)&std::__ndk1::ctype<char>::id);
        cVar6 = (**(code **)(*plVar20 + 0x38))(plVar20,10);
        std::__ndk1::locale::~locale((locale *)local_a0);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar19,cVar6);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar19);
        param_1 = (Node *)0x0;
        goto LAB_017648e0;
      }
LAB_01764924:
      param_1 = (Node *)0x0;
      goto LAB_017648e0;
    }
    local_f0 = JSFunctionRef::shared((JSFunctionRef *)local_e0);
    uVar16 = SharedFunctionInfoRef::HasBreakInfo((SharedFunctionInfoRef *)local_f0);
    if ((uVar16 & 1) != 0) goto LAB_01764924;
    cVar6 = SharedFunctionInfoRef::kind((SharedFunctionInfoRef *)local_f0);
    if ((byte)(cVar6 - 3U) < 4) goto LAB_01764924;
    this_00 = (AccessBuilder *)
              SharedFunctionInfoRef::language_mode((SharedFunctionInfoRef *)local_f0);
    if (((ulong)this_00 & 1) == 0) {
      this_00 = (AccessBuilder *)SharedFunctionInfoRef::native((SharedFunctionInfoRef *)local_f0);
      auVar32._8_8_ = local_c0._8_8_;
      auVar32._0_8_ = local_c0._0_8_;
      if ((((ulong)this_00 & 1) == 0) && (local_c0 = auVar32, local_d0 != 0x47f0001)) {
        this_00 = (AccessBuilder *)Type::SlowIs((Type *)&local_d0,0x47f0001);
        if (((ulong)this_00 & 1) == 0) {
          local_a0 = JSFunctionRef::native_context((JSFunctionRef *)local_e0);
          lVar29 = *(long *)(this + 0x18);
          if (*(char *)(lVar29 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","storage_.is_populated_");
          }
          local_c0._8_8_ = *(undefined8 *)(lVar29 + 0x28);
          local_c0._0_8_ = *(undefined8 *)(lVar29 + 0x20);
          uVar16 = ObjectRef::equals((ObjectRef *)local_a0,(ObjectRef *)local_c0);
          if ((uVar16 & 1) == 0) goto LAB_01764924;
          pJVar18 = *(JSGraph **)(this + 0x10);
          local_c0 = JSFunctionRef::native_context((JSFunctionRef *)local_e0);
          auVar32 = NativeContextRef::global_proxy_object((NativeContextRef *)local_c0);
          local_a0 = auVar32;
          uVar21 = JSGraph::Constant(pJVar18,(ObjectRef *)local_a0);
          pGVar30 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar17 = (Operator *)
                    SimplifiedOperatorBuilder::ConvertReceiver
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                               uVar28);
          local_a0._0_8_ = pNVar13;
          local_a0._8_8_ = uVar21;
          local_90 = pNVar14;
          uStack_88 = uVar15;
          pNVar14 = (Node *)Graph::NewNode(pGVar30,pOVar17,4,(Node **)local_a0,false);
          this_00 = (AccessBuilder *)NodeProperties::ReplaceValueInput(param_1,pNVar14,1);
        }
      }
    }
    pJVar26 = this + 0x10;
    pGVar30 = (Graph *)**(undefined8 **)pJVar26;
    this_03 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar26)[0x2f];
    AccessBuilder::ForJSFunctionContext(this_00);
    pOVar17 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_03,(FieldAccess *)local_a0);
    local_c0._0_8_ = pNVar12;
    local_c0._8_8_ = pNVar14;
    local_b0 = uVar15;
    pNVar12 = (Node *)Graph::NewNode(pGVar30,pOVar17,3,(Node **)local_c0,false);
    NodeProperties::ReplaceContextInput(param_1,pNVar12);
    NodeProperties::ReplaceEffectInput(param_1,pNVar12,0);
    pNVar12 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)pJVar26);
    local_a0 = local_f0;
    iVar7 = SharedFunctionInfoRef::internal_formal_parameter_count
                      ((SharedFunctionInfoRef *)local_a0);
    if ((iVar7 != 0xffff) && (iVar7 != iVar10)) {
      uVar16 = SharedFunctionInfoRef::is_safe_to_skip_arguments_adaptor
                         ((SharedFunctionInfoRef *)local_f0);
      if ((uVar16 & 1) != 0) {
        iVar8 = SharedFunctionInfoRef::internal_formal_parameter_count
                          ((SharedFunctionInfoRef *)local_f0);
        iVar7 = iVar10;
        for (; iVar8 < iVar10; iVar10 = iVar10 + -1) {
          Node::RemoveInput(param_1,iVar10 + 1);
          iVar7 = iVar8;
        }
        pJVar18 = *(JSGraph **)pJVar26;
        iVar10 = iVar7 + 2;
        pZVar27 = (Zone *)**(undefined8 **)pJVar18;
        if (iVar7 < iVar8) {
          do {
            pNVar13 = (Node *)JSGraph::UndefinedConstant(pJVar18);
            Node::InsertInput(param_1,pZVar27,iVar10,pNVar13);
            pJVar18 = *(JSGraph **)pJVar26;
            iVar4 = iVar10 + -1;
            pZVar27 = (Zone *)**(undefined8 **)pJVar18;
            iVar10 = iVar10 + 1;
            iVar7 = iVar8;
          } while (iVar4 != iVar8);
        }
        Node::InsertInput(param_1,pZVar27,iVar10,pNVar12);
        pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)pJVar26;
        pNVar12 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar26,(double)iVar7);
        Node::InsertInput(param_1,pZVar27,iVar7 + 3,pNVar12);
        pCVar25 = (CommonOperatorBuilder *)(*(undefined8 **)pJVar26)[1];
        pCVar22 = (CallDescriptor *)
                  Linkage::GetJSCallDescriptor
                            (*(undefined8 *)**(undefined8 **)pJVar26,0,iVar7 + 1,5);
        pOVar17 = (Operator *)CommonOperatorBuilder::Call(pCVar25,pCVar22);
        NodeProperties::ChangeOp(param_1,pOVar17);
        goto LAB_017648e0;
      }
      CodeFactory::ArgumentAdaptor(*(Isolate **)(*(long *)pJVar26 + 0x168));
      pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)pJVar26;
      pNVar13 = (Node *)JSGraph::HeapConstant(*(JSGraph **)pJVar26,local_a0._0_8_);
      Node::InsertInput(param_1,pZVar27,0,pNVar13);
      Node::InsertInput(param_1,*(Zone **)**(undefined8 **)pJVar26,2,pNVar12);
      pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)pJVar26;
      pNVar12 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar26,(double)iVar10);
      Node::InsertInput(param_1,pZVar27,3,pNVar12);
      pJVar18 = *(JSGraph **)pJVar26;
      pZVar27 = (Zone *)**(undefined8 **)pJVar18;
      iVar10 = SharedFunctionInfoRef::internal_formal_parameter_count
                         ((SharedFunctionInfoRef *)local_f0);
      pNVar12 = (Node *)JSGraph::Constant(pJVar18,(double)iVar10);
      Node::InsertInput(param_1,pZVar27,4,pNVar12);
      puVar24 = *(undefined8 **)pJVar26;
      goto LAB_01764890;
    }
    uVar16 = SharedFunctionInfoRef::HasBuiltinId((SharedFunctionInfoRef *)local_f0);
    if ((uVar16 & 1) == 0) {
LAB_01764b78:
      uVar16 = SharedFunctionInfoRef::HasBuiltinId((SharedFunctionInfoRef *)local_f0);
      if ((uVar16 & 1) == 0) {
        Node::InsertInput(param_1,*(Zone **)**(undefined8 **)pJVar26,uVar1,pNVar12);
        pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)pJVar26;
        pNVar12 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar26,(double)iVar10);
        Node::InsertInput(param_1,pZVar27,uVar1 + 1,pNVar12);
        pCVar25 = (CommonOperatorBuilder *)(*(undefined8 **)pJVar26)[1];
        pCVar22 = (CallDescriptor *)
                  Linkage::GetJSCallDescriptor
                            (*(undefined8 *)**(undefined8 **)pJVar26,0,uVar1 - 1,5);
      }
      else {
        uVar15 = *(undefined8 *)(*(long *)pJVar26 + 0x168);
        uVar9 = SharedFunctionInfoRef::builtin_id((SharedFunctionInfoRef *)local_f0);
        Builtins::CallableFor((Builtins *)local_a0,uVar15,uVar9);
        local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca0fc8;
        local_c0._8_8_ = local_90;
        pCVar22 = (CallDescriptor *)
                  Linkage::GetStubCallDescriptor
                            (*(undefined8 *)**(undefined8 **)pJVar26,local_c0,uVar1 - 1,1,0,0);
        pNVar13 = (Node *)JSGraph::HeapConstant(*(JSGraph **)pJVar26,local_a0._0_8_);
        Node::InsertInput(param_1,*(Zone **)**(undefined8 **)pJVar26,0,pNVar13);
        Node::InsertInput(param_1,*(Zone **)**(undefined8 **)pJVar26,2,pNVar12);
        pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)pJVar26;
        pNVar12 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar26,(double)iVar10);
        Node::InsertInput(param_1,pZVar27,3,pNVar12);
        pCVar25 = *(CommonOperatorBuilder **)(*(long *)pJVar26 + 8);
      }
    }
    else {
      iVar7 = SharedFunctionInfoRef::builtin_id((SharedFunctionInfoRef *)local_f0);
      uVar16 = Builtins::IsCpp(iVar7);
      if ((uVar16 & 1) == 0) goto LAB_01764b78;
      pJVar18 = *(JSGraph **)pJVar26;
      iVar10 = SharedFunctionInfoRef::builtin_id((SharedFunctionInfoRef *)local_f0);
      sVar3 = *(short *)(*(long *)param_1 + 0x10);
      pNVar12 = (Node *)NodeProperties::GetValueInput(param_1,0);
      if (sVar3 == 0x301) {
        pNVar13 = (Node *)NodeProperties::GetValueInput(param_1,uVar1 - 1);
      }
      else {
        pNVar13 = (Node *)JSGraph::UndefinedConstant(pJVar18);
      }
      this_01 = (Node *)JSGraph::CEntryStubConstant(pJVar18,1,0,0,1);
      pNVar14 = param_1 + 0x20;
      pNVar23 = pNVar14;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar23 = (Node *)(*(long *)pNVar14 + 0x10);
      }
      this_02 = *(Node **)pNVar23;
      if (this_02 != this_01) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar31 = (Use *)(*(long *)pNVar14 + -0x18);
        }
        else {
          pUVar31 = (Use *)(param_1 + -0x18);
        }
        if (this_02 != (Node *)0x0) {
          Node::RemoveUse(this_02,pUVar31);
        }
        *(Node **)pNVar23 = this_01;
        if (this_01 != (Node *)0x0) {
          Node::AppendUse(this_01,pUVar31);
        }
      }
      pZVar27 = (Zone *)**(undefined8 **)pJVar18;
      if (sVar3 == 0x301) {
        pNVar14 = (Node *)JSGraph::UndefinedConstant(pJVar18);
        Node::RemoveInput(param_1,uVar1 - 1);
        Node::InsertInput(param_1,pZVar27,1,pNVar14);
      }
      iVar7 = uVar1 + 3;
      pNVar14 = (Node *)JSGraph::Constant(pJVar18,(double)iVar7);
      pNVar23 = (Node *)JSGraph::TheHoleConstant(pJVar18);
      Node::InsertInput(param_1,pZVar27,uVar1,pNVar23);
      Node::InsertInput(param_1,pZVar27,uVar1 + 1,pNVar14);
      Node::InsertInput(param_1,pZVar27,uVar1 + 2,pNVar12);
      Node::InsertInput(param_1,pZVar27,iVar7,pNVar13);
      uVar16 = Builtins::CppEntryOf(iVar10);
      uVar15 = ExternalReference::Create(uVar16);
      pNVar12 = (Node *)MachineGraph::ExternalConstant((MachineGraph *)pJVar18,uVar15);
      Node::InsertInput(param_1,pZVar27,uVar1 + 4,pNVar12);
      Node::InsertInput(param_1,pZVar27,uVar1 + 5,pNVar14);
      uVar15 = Builtins::name(iVar10);
      pCVar22 = (CallDescriptor *)
                Linkage::GetCEntryStubCallDescriptor
                          (pZVar27,1,iVar7,uVar15,*(undefined1 *)(*(long *)param_1 + 0x12),1);
      pCVar25 = *(CommonOperatorBuilder **)(pJVar18 + 8);
    }
LAB_017648cc:
    pOVar17 = (Operator *)CommonOperatorBuilder::Call(pCVar25,pCVar22);
  }
  else {
LAB_01764804:
    if (local_c8 == (int *)((long)&__DT_SYMTAB[0x3a3b].st_size + 1)) {
LAB_01764828:
      CodeFactory::CallFunction(local_a0,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),uVar28);
      pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
      pNVar12 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_a0._0_8_);
      Node::InsertInput(param_1,pZVar27,0,pNVar12);
      pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
      pNVar12 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)iVar10);
      Node::InsertInput(param_1,pZVar27,2,pNVar12);
      puVar24 = *(undefined8 **)(this + 0x10);
LAB_01764890:
      pCVar25 = (CommonOperatorBuilder *)puVar24[1];
      local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca0fc8;
      local_c0._8_8_ = local_90;
      pCVar22 = (CallDescriptor *)
                Linkage::GetStubCallDescriptor(*(undefined8 *)*puVar24,local_c0,uVar1 - 1,1,0,0);
      goto LAB_017648cc;
    }
    uVar16 = Type::SlowIs((Type *)&local_c8,0x200001);
    if ((uVar16 & 1) != 0) goto LAB_01764828;
    uVar1 = *puVar11;
    if ((uVar1 >> 0x1d & 3) == uVar28) goto LAB_01764924;
    pOVar17 = (Operator *)
              JSOperatorBuilder::Call
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar1 & 0x7ffffff,
                         puVar11 + 1,puVar11 + 2,uVar28,uVar1 >> 0x1c & 1,uVar1 >> 0x1b & 1);
  }
  NodeProperties::ChangeOp(param_1,pOVar17);
LAB_017648e0:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

