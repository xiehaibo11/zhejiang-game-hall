
/* v8::internal::compiler::SimplifiedLowering::Int32Mod(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::SimplifiedLowering::Int32Mod(SimplifiedLowering *this,Node *param_1)

{
  Node *pNVar1;
  undefined8 uVar2;
  Operator *pOVar3;
  Operator *pOVar4;
  Operator *pOVar5;
  Node *pNVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  Node *pNVar12;
  Operator *pOVar13;
  Operator *pOVar14;
  Node *pNVar15;
  Graph *pGVar16;
  Graph *this_00;
  Graph *this_01;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_a0 [8];
  Node *local_98;
  Node *local_88;
  int local_80;
  char local_7c;
  Node *local_78;
  Node *pNStack_70;
  Node *local_68;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_a0,param_1);
  pNVar1 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,0);
  uVar2 = MachineGraph::Int32Constant(*(MachineGraph **)this,-1);
  if (local_7c == '\0') {
    pOVar4 = (Operator *)
             CommonOperatorBuilder::Merge(*(CommonOperatorBuilder **)(*(long *)this + 8),2);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(*(long *)this + 8),4,2);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32LessThan
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    pNStack_70 = local_88;
    local_78 = pNVar1;
    pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar5,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],1,1);
    pNStack_70 = *(Node **)(**(long **)this + 8);
    local_78 = pNVar6;
    pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar5,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    uVar7 = Graph::NewNode(pGVar16,pOVar5,1,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32Add((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_88;
    pNStack_70 = (Node *)uVar2;
    uVar8 = Graph::NewNode(pGVar16,pOVar5,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word32And((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_88;
    pNStack_70 = (Node *)uVar8;
    pNVar9 = (Node *)Graph::NewNode(pGVar16,pOVar5,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0,1);
    local_78 = pNVar9;
    pNStack_70 = (Node *)uVar7;
    pNVar9 = (Node *)Graph::NewNode(pGVar16,pOVar5,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar9;
    pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar5,1,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32Mod((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_98;
    pNStack_70 = local_88;
    local_68 = pNVar10;
    pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar5,3,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar9;
    uVar7 = Graph::NewNode(pGVar16,pOVar5,1,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32LessThan
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_98;
    pNStack_70 = pNVar1;
    pNVar9 = (Node *)Graph::NewNode(pGVar16,pOVar5,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],2,1);
    local_78 = pNVar9;
    pNStack_70 = (Node *)uVar7;
    pNVar9 = (Node *)Graph::NewNode(pGVar16,pOVar5,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar9;
    pNVar12 = (Node *)Graph::NewNode(pGVar16,pOVar5,1,&local_78,false);
    this_01 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32Sub((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar13 = (Operator *)
              MachineOperatorBuilder::Word32And((MachineOperatorBuilder *)(*(undefined8 **)this)[2])
    ;
    this_00 = (Graph *)**(undefined8 **)this;
    pOVar14 = (Operator *)
              MachineOperatorBuilder::Int32Sub((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    pNStack_70 = local_98;
    local_78 = pNVar1;
    local_78 = (Node *)Graph::NewNode(this_00,pOVar14,2,&local_78,false);
    pNStack_70 = (Node *)uVar8;
    pNStack_70 = (Node *)Graph::NewNode(pGVar16,pOVar13,2,&local_78,false);
    local_78 = pNVar1;
    pNVar15 = (Node *)Graph::NewNode(this_01,pOVar5,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar9;
    uVar7 = Graph::NewNode(pGVar16,pOVar5,1,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word32And((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_98;
    pNStack_70 = (Node *)uVar8;
    uVar8 = Graph::NewNode(pGVar16,pOVar5,2,&local_78,false);
    local_78 = pNVar12;
    pNStack_70 = (Node *)uVar7;
    uVar7 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar4,2,&local_78,false);
    local_78 = pNVar15;
    pNStack_70 = (Node *)uVar8;
    local_68 = (Node *)uVar7;
    uVar8 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar3,3,&local_78,false);
    local_78 = pNVar10;
    pNStack_70 = (Node *)uVar7;
    pNVar9 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,pOVar4,2,&local_78,false);
    local_78 = pNVar11;
    pNStack_70 = (Node *)uVar8;
    local_68 = pNVar9;
    pNVar10 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,pOVar3,3,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    uVar7 = Graph::NewNode(pGVar16,pOVar5,1,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32LessThan
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_88;
    pNStack_70 = (Node *)uVar2;
    pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar5,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],1,1);
    local_78 = pNVar6;
    pNStack_70 = (Node *)uVar7;
    pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar5,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar5,1,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32Mod((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_98;
    pNStack_70 = local_88;
    local_68 = pNVar11;
    pNVar12 = (Node *)Graph::NewNode(pGVar16,pOVar5,3,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    pNStack_70 = (Node *)Graph::NewNode(pGVar16,pOVar5,1,&local_78,false);
    local_78 = pNVar11;
    uVar2 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar4,2,&local_78,false);
    local_78 = pNVar12;
    pNStack_70 = pNVar1;
    local_68 = (Node *)uVar2;
    pNVar1 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,pOVar3,3,&local_78,false);
    local_78 = pNVar9;
    pNStack_70 = (Node *)uVar2;
    local_68 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,pOVar4,2,&local_78,false);
    pGVar16 = (Graph *)**(undefined8 **)this;
    local_78 = pNVar10;
    pNStack_70 = pNVar1;
  }
  else {
    if (local_80 + 1U < 2) {
      return pNVar1;
    }
    pGVar16 = (Graph *)**(undefined8 **)this;
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Int32Mod((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_68 = *(Node **)(**(long **)this + 8);
    local_78 = local_98;
    pNStack_70 = local_88;
  }
  uVar2 = Graph::NewNode(pGVar16,pOVar3,3,&local_78,false);
  return uVar2;
}

