
/* v8::internal::compiler::SimplifiedLowering::Uint32Mod(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::SimplifiedLowering::Uint32Mod(SimplifiedLowering *this,Node *param_1)

{
  undefined8 uVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Operator *pOVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Node *pNVar7;
  undefined8 uVar8;
  Node *pNVar9;
  Node *pNVar10;
  Graph *pGVar11;
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_a0 [8];
  Node *local_98;
  Node *local_88;
  int local_80;
  char local_7c;
  Node *local_78;
  Node *pNStack_70;
  Node *local_68;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_a0,param_1);
  uVar1 = MachineGraph::Int32Constant(*(MachineGraph **)this,-1);
  pNVar2 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,0);
  if (local_7c == '\0') {
    pOVar4 = (Operator *)
             CommonOperatorBuilder::Merge(*(CommonOperatorBuilder **)(*(long *)this + 8),2);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(*(long *)this + 8),4,2);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word32Equal
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_88;
    pNStack_70 = pNVar2;
    pNVar6 = (Node *)Graph::NewNode(pGVar11,pOVar5,2,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],2,1);
    pNStack_70 = *(Node **)(**(long **)this + 8);
    local_78 = pNVar6;
    pNVar6 = (Node *)Graph::NewNode(pGVar11,pOVar5,2,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    pNVar7 = (Node *)Graph::NewNode(pGVar11,pOVar5,1,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    uVar8 = Graph::NewNode(pGVar11,pOVar5,1,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32Add((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_88;
    pNStack_70 = (Node *)uVar1;
    uVar1 = Graph::NewNode(pGVar11,pOVar5,2,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word32And((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_88;
    pNStack_70 = (Node *)uVar1;
    pNVar6 = (Node *)Graph::NewNode(pGVar11,pOVar5,2,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0,1);
    local_78 = pNVar6;
    pNStack_70 = (Node *)uVar8;
    pNVar6 = (Node *)Graph::NewNode(pGVar11,pOVar5,2,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    pNVar9 = (Node *)Graph::NewNode(pGVar11,pOVar5,1,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Uint32Mod((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_98;
    pNStack_70 = local_88;
    local_68 = pNVar9;
    pNVar10 = (Node *)Graph::NewNode(pGVar11,pOVar5,3,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    uVar8 = Graph::NewNode(pGVar11,pOVar5,1,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word32And((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_98;
    pNStack_70 = (Node *)uVar1;
    uVar1 = Graph::NewNode(pGVar11,pOVar5,2,&local_78,false);
    local_78 = pNVar9;
    pNStack_70 = (Node *)uVar8;
    uVar8 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar4,2,&local_78,false);
    local_78 = pNVar10;
    pNStack_70 = (Node *)uVar1;
    local_68 = (Node *)uVar8;
    pNVar6 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,pOVar3,3,&local_78,false);
    local_78 = pNVar7;
    pNStack_70 = (Node *)uVar8;
    local_68 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,pOVar4,2,&local_78,false);
    pGVar11 = (Graph *)**(undefined8 **)this;
    local_78 = pNVar2;
    pNStack_70 = pNVar6;
  }
  else {
    if (local_80 == 0) {
      return pNVar2;
    }
    pGVar11 = (Graph *)**(undefined8 **)this;
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Uint32Mod((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_68 = *(Node **)(**(long **)this + 8);
    local_78 = local_98;
    pNStack_70 = local_88;
  }
  uVar1 = Graph::NewNode(pGVar11,pOVar3,3,&local_78,false);
  return uVar1;
}

