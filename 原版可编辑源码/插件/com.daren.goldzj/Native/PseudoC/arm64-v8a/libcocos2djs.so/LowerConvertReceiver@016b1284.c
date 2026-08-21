
/* v8::internal::compiler::EffectControlLinearizer::LowerConvertReceiver(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerConvertReceiver
          (EffectControlLinearizer *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  Node *pNVar3;
  Node *pNVar4;
  AccessBuilder *this_00;
  AccessBuilder *pAVar5;
  undefined8 uVar6;
  Operator *pOVar7;
  AccessBuilder *this_01;
  GraphAssembler *pGVar8;
  Node *pNVar9;
  Node *pNVar10;
  undefined8 local_168 [2];
  int *local_158;
  Node *local_150;
  Node *pNStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_118;
  int *local_110;
  undefined8 uStack_108;
  GraphAssemblerLabel local_e0 [4];
  undefined4 local_dc;
  BasicBlock *local_d8;
  undefined8 uStack_d0;
  Node *local_b8;
  undefined1 local_a8;
  GraphAssemblerLabel local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = ConvertReceiverModeOf(*(Operator **)param_1);
  pNVar10 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
  }
  pNVar9 = *(Node **)(pNVar10 + 8);
  if (iVar2 != 0) {
    pNVar10 = *(Node **)pNVar10;
    if (iVar2 == 2) {
      pGVar8 = (GraphAssembler *)(this + 0x38);
      local_98 = GraphAssembler::NewBasicBlock(pGVar8,true);
      uStack_90 = 0;
      local_a0[0] = (GraphAssemblerLabel)0x0;
      local_9c = 0;
      local_110 = (int *)GraphAssembler::NewBasicBlock(pGVar8,true);
      uStack_108 = 0;
      local_118 = (undefined **)(((ulong)local_118 >> 8 & 0xffffff) << 8);
      local_d8 = (BasicBlock *)GraphAssembler::NewBasicBlock(pGVar8,false);
      uStack_d0 = 0;
      local_e0[0] = (GraphAssemblerLabel)0x0;
      local_dc = 1;
      local_a8 = 8;
      pNVar3 = (Node *)GraphAssembler::Int32Constant(pGVar8,1);
      pNVar3 = (Node *)GraphAssembler::Word32And(pGVar8,pNVar10,pNVar3);
      pNVar4 = (Node *)GraphAssembler::Int32Constant(pGVar8,0);
      pNVar3 = (Node *)GraphAssembler::Word32Equal(pGVar8,pNVar3,pNVar4);
      GraphAssembler::GotoIf<>(pGVar8,pNVar3,local_a0);
      AccessBuilder::ForMap(this_01);
      pAVar5 = (AccessBuilder *)GraphAssembler::LoadField(pGVar8,(FieldAccess *)&local_150,pNVar10);
      AccessBuilder::ForMapInstanceType(pAVar5);
      pNVar3 = (Node *)GraphAssembler::LoadField(pGVar8,(FieldAccess *)&local_150,(Node *)pAVar5);
      pNVar4 = (Node *)GraphAssembler::Uint32Constant(pGVar8,0xa9);
      pNVar3 = (Node *)GraphAssembler::Uint32LessThan(pGVar8,pNVar3,pNVar4);
      GraphAssembler::GotoIf<>(pGVar8,pNVar3,local_a0);
      GraphAssembler::MergeState<v8::internal::compiler::Node*>(pGVar8,local_e0,pNVar10);
      GraphAssembler::GotoBasicBlock(pGVar8,local_d8);
      *(undefined8 *)(this + 0x58) = 0;
      *(undefined8 *)(this + 0x60) = 0;
      GraphAssembler::Bind<0ul>(pGVar8,local_a0);
      pNVar3 = (Node *)GraphAssembler::UndefinedConstant(pGVar8);
      pNVar3 = (Node *)GraphAssembler::TaggedEqual(pGVar8,pNVar10,pNVar3);
      GraphAssembler::GotoIf<>(pGVar8,pNVar3,(GraphAssemblerLabel *)&local_118);
      pNVar3 = (Node *)GraphAssembler::NullConstant(pGVar8);
      pNVar3 = (Node *)GraphAssembler::TaggedEqual(pGVar8,pNVar10,pNVar3);
      GraphAssembler::GotoIf<>(pGVar8,pNVar3,(GraphAssemblerLabel *)&local_118);
      Builtins::CallableFor((Builtins *)local_168,*(undefined8 *)(*(long *)this + 0x168),0x5a);
      local_150 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
      pNStack_148 = (Node *)local_158;
      pAVar5 = (AccessBuilder *)
               Linkage::GetStubCallDescriptor
                         (*(undefined8 *)**(undefined8 **)this,&local_150,local_158[2] - *local_158,
                          0,0x70,0);
      AccessBuilder::ForJSGlobalProxyNativeContext(pAVar5);
      uVar6 = GraphAssembler::LoadField(pGVar8,(FieldAccess *)&local_150,pNVar9);
      pNVar3 = (Node *)GraphAssembler::HeapConstant(pGVar8,local_168[0]);
      pOVar7 = (Operator *)
               CommonOperatorBuilder::Call
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),
                          (CallDescriptor *)pAVar5);
      uStack_130 = *(undefined8 *)(this + 0x60);
      local_138 = *(undefined8 *)(this + 0x58);
      local_150 = pNVar3;
      pNStack_148 = pNVar10;
      local_140 = uVar6;
      pNVar10 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar7,
                                       *(int *)(pOVar7 + 0x18) + *(int *)(pOVar7 + 0x1c) + 3,
                                       &local_150,false);
      *(Node **)(this + 0x58) = pNVar10;
      pNVar10 = (Node *)GraphAssembler::AddNode(pGVar8,pNVar10);
      GraphAssembler::MergeState<v8::internal::compiler::Node*>(pGVar8,local_e0,pNVar10);
      GraphAssembler::GotoBasicBlock(pGVar8,local_d8);
      *(undefined8 *)(this + 0x58) = 0;
      *(undefined8 *)(this + 0x60) = 0;
      GraphAssembler::Bind<0ul>(pGVar8,(GraphAssemblerLabel *)&local_118);
    }
    else {
      if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pGVar8 = (GraphAssembler *)(this + 0x38);
      local_98 = GraphAssembler::NewBasicBlock(pGVar8,true);
      uStack_90 = 0;
      local_a0[0] = (GraphAssemblerLabel)0x0;
      local_9c = 0;
      local_d8 = (BasicBlock *)GraphAssembler::NewBasicBlock(pGVar8,false);
      uStack_d0 = 0;
      local_e0[0] = (GraphAssemblerLabel)0x0;
      local_dc = 1;
      local_a8 = 8;
      pNVar3 = (Node *)GraphAssembler::Int32Constant(pGVar8,1);
      pNVar3 = (Node *)GraphAssembler::Word32And(pGVar8,pNVar10,pNVar3);
      pNVar4 = (Node *)GraphAssembler::Int32Constant(pGVar8,0);
      pNVar3 = (Node *)GraphAssembler::Word32Equal(pGVar8,pNVar3,pNVar4);
      GraphAssembler::GotoIf<>(pGVar8,pNVar3,local_a0);
      AccessBuilder::ForMap(this_00);
      pAVar5 = (AccessBuilder *)GraphAssembler::LoadField(pGVar8,(FieldAccess *)&local_118,pNVar10);
      AccessBuilder::ForMapInstanceType(pAVar5);
      pNVar3 = (Node *)GraphAssembler::LoadField(pGVar8,(FieldAccess *)&local_118,(Node *)pAVar5);
      pNVar4 = (Node *)GraphAssembler::Uint32Constant(pGVar8,0xa9);
      pNVar3 = (Node *)GraphAssembler::Uint32LessThan(pGVar8,pNVar3,pNVar4);
      GraphAssembler::GotoIf<>(pGVar8,pNVar3,local_a0);
      GraphAssembler::MergeState<v8::internal::compiler::Node*>(pGVar8,local_e0,pNVar10);
      GraphAssembler::GotoBasicBlock(pGVar8,local_d8);
      *(undefined8 *)(this + 0x58) = 0;
      *(undefined8 *)(this + 0x60) = 0;
      GraphAssembler::Bind<0ul>(pGVar8,local_a0);
      Builtins::CallableFor((Builtins *)local_168,*(undefined8 *)(*(long *)this + 0x168),0x5a);
      local_118 = &PTR__CallInterfaceDescriptor_01ca0fc8;
      local_110 = local_158;
      pAVar5 = (AccessBuilder *)
               Linkage::GetStubCallDescriptor
                         (*(undefined8 *)**(undefined8 **)this,&local_118,local_158[2] - *local_158,
                          0,0x70,0);
      AccessBuilder::ForJSGlobalProxyNativeContext(pAVar5);
      uVar6 = GraphAssembler::LoadField(pGVar8,(FieldAccess *)&local_118,pNVar9);
      pNVar9 = (Node *)GraphAssembler::HeapConstant(pGVar8,local_168[0]);
      pOVar7 = (Operator *)
               CommonOperatorBuilder::Call
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),
                          (CallDescriptor *)pAVar5);
      uStack_130 = *(undefined8 *)(this + 0x60);
      local_138 = *(undefined8 *)(this + 0x58);
      local_150 = pNVar9;
      pNStack_148 = pNVar10;
      local_140 = uVar6;
      pNVar10 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar7,
                                       *(int *)(pOVar7 + 0x18) + *(int *)(pOVar7 + 0x1c) + 3,
                                       &local_150,false);
      *(Node **)(this + 0x58) = pNVar10;
      pNVar9 = (Node *)GraphAssembler::AddNode(pGVar8,pNVar10);
    }
    pGVar8 = (GraphAssembler *)(this + 0x38);
    GraphAssembler::MergeState<v8::internal::compiler::Node*>(pGVar8,local_e0,pNVar9);
    GraphAssembler::GotoBasicBlock(pGVar8,local_d8);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<1ul>(pGVar8,local_e0);
    pNVar9 = local_b8;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return pNVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

