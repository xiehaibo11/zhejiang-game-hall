
/* v8::internal::compiler::SimplifiedLowering::Int32Div(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::SimplifiedLowering::Int32Div(SimplifiedLowering *this,Node *param_1)

{
  Node *pNVar1;
  undefined8 uVar2;
  Operator *pOVar3;
  Operator *pOVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 uVar9;
  Node *pNVar10;
  Node *pNVar11;
  Node *pNVar12;
  int iVar13;
  undefined8 *puVar14;
  Graph *pGVar15;
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
  local_78 = pNVar1;
  if (local_7c != '\0') {
    if (local_80 == 0) {
      return local_88;
    }
    if (local_80 == -1) {
      pGVar15 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)
               MachineOperatorBuilder::Int32Sub((MachineOperatorBuilder *)(*(undefined8 **)this)[2])
      ;
      pNStack_70 = local_98;
      iVar13 = 2;
      goto LAB_012d1ff4;
    }
  }
  puVar14 = *(undefined8 **)this;
  if ((((byte)((MachineOperatorBuilder *)puVar14[2])[0x15] >> 1 & 1) == 0) && (local_7c == '\0')) {
    pOVar4 = (Operator *)CommonOperatorBuilder::Merge((CommonOperatorBuilder *)puVar14[1],2);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(*(long *)this + 8),4,2);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32LessThan
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    pNStack_70 = local_88;
    pNVar6 = (Node *)Graph::NewNode(pGVar15,pOVar5,2,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],1,1);
    pNStack_70 = *(Node **)(**(long **)this + 8);
    local_78 = pNVar6;
    pNVar6 = (Node *)Graph::NewNode(pGVar15,pOVar5,2,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    pNVar7 = (Node *)Graph::NewNode(pGVar15,pOVar5,1,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32Div((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_98;
    pNStack_70 = local_88;
    local_68 = pNVar7;
    pNVar8 = (Node *)Graph::NewNode(pGVar15,pOVar5,3,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    uVar9 = Graph::NewNode(pGVar15,pOVar5,1,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32LessThan
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_88;
    pNStack_70 = (Node *)uVar2;
    pNVar6 = (Node *)Graph::NewNode(pGVar15,pOVar5,2,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0,1);
    local_78 = pNVar6;
    pNStack_70 = (Node *)uVar9;
    pNVar6 = (Node *)Graph::NewNode(pGVar15,pOVar5,2,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    pNVar10 = (Node *)Graph::NewNode(pGVar15,pOVar5,1,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32Div((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_98;
    pNStack_70 = local_88;
    local_68 = pNVar10;
    pNVar11 = (Node *)Graph::NewNode(pGVar15,pOVar5,3,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    uVar2 = Graph::NewNode(pGVar15,pOVar5,1,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word32Equal
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_78 = local_88;
    pNStack_70 = pNVar1;
    pNVar6 = (Node *)Graph::NewNode(pGVar15,pOVar5,2,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0,1);
    local_78 = pNVar6;
    pNStack_70 = (Node *)uVar2;
    pNVar6 = (Node *)Graph::NewNode(pGVar15,pOVar5,2,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    pNVar12 = (Node *)Graph::NewNode(pGVar15,pOVar5,1,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_78 = pNVar6;
    uVar2 = Graph::NewNode(pGVar15,pOVar5,1,&local_78,false);
    pGVar15 = (Graph *)**(undefined8 **)this;
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Int32Sub((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    pNStack_70 = local_98;
    local_78 = pNVar1;
    uVar9 = Graph::NewNode(pGVar15,pOVar5,2,&local_78,false);
    local_78 = pNVar12;
    pNStack_70 = (Node *)uVar2;
    uVar2 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar4,2,&local_78,false);
    local_78 = pNVar1;
    pNStack_70 = (Node *)uVar9;
    local_68 = (Node *)uVar2;
    uVar9 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar3,3,&local_78,false);
    local_78 = pNVar10;
    pNStack_70 = (Node *)uVar2;
    uVar2 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar4,2,&local_78,false);
    local_78 = pNVar11;
    pNStack_70 = (Node *)uVar9;
    local_68 = (Node *)uVar2;
    pNVar1 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,pOVar3,3,&local_78,false);
    local_78 = pNVar7;
    pNStack_70 = (Node *)uVar2;
    local_68 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,pOVar4,2,&local_78,false);
    iVar13 = 3;
    pGVar15 = (Graph *)**(undefined8 **)this;
    local_78 = pNVar8;
    pNStack_70 = pNVar1;
  }
  else {
    pGVar15 = (Graph *)*puVar14;
    pOVar3 = (Operator *)MachineOperatorBuilder::Int32Div((MachineOperatorBuilder *)puVar14[2]);
    iVar13 = 3;
    local_68 = *(Node **)(**(long **)this + 8);
    local_78 = local_98;
    pNStack_70 = local_88;
  }
LAB_012d1ff4:
  uVar2 = Graph::NewNode(pGVar15,pOVar3,iVar13,&local_78,false);
  return uVar2;
}

