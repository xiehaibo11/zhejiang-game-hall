
/* v8::internal::compiler::WasmGraphBuilder::BuildI32DivS(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI32DivS
          (WasmGraphBuilder *this,Node *param_1,Node *param_2,int param_3)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Node *pNVar3;
  long lVar4;
  Node *pNVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  MachineOperatorBuilder *this_00;
  Graph *pGVar8;
  long lVar9;
  Node *local_78;
  Node *pNStack_70;
  undefined8 local_68;
  
  puVar7 = *(undefined8 **)(this + 8);
  this_00 = (MachineOperatorBuilder *)puVar7[2];
  if ((*(short *)(*(long *)param_2 + 0x10) != 0x17) || (*(int *)(*(long *)param_2 + 0x2c) == 0)) {
    uVar6 = 0xc;
    if ((*(long *)(this + 0x10) != 0) &&
       (uVar6 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
      uVar6 = 3;
    }
    pGVar8 = (Graph *)*puVar7;
    pOVar1 = (Operator *)CommonOperatorBuilder::TrapUnless((CommonOperatorBuilder *)puVar7[1],uVar6)
    ;
    local_68 = **(undefined8 **)(this + 0x18);
    pNStack_70 = (Node *)**(undefined8 **)(this + 0x20);
    local_78 = param_2;
    uVar2 = Graph::NewNode(pGVar8,pOVar1,3,&local_78,false);
    **(undefined8 **)(this + 0x18) = uVar2;
    if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
      SourcePositionTable::SetSourcePosition
                (*(SourcePositionTable **)(this + 0x78),uVar2,
                 (-(ulong)(param_3 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_3 + 1U) << 1)
                 & 0xffff80007fffffff);
    }
  }
  lVar9 = **(long **)(this + 0x18);
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
  pNStack_70 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),-1);
  local_78 = param_2;
  pNVar3 = (Node *)Graph::NewNode(pGVar8,pOVar1,2,&local_78,false);
  puVar7 = *(undefined8 **)(this + 8);
  uVar2 = **(undefined8 **)(this + 0x18);
  pGVar8 = (Graph *)*puVar7;
  pOVar1 = (Operator *)CommonOperatorBuilder::Branch((CommonOperatorBuilder *)puVar7[1],2,1);
  local_78 = pNVar3;
  pNStack_70 = (Node *)uVar2;
  pNVar3 = (Node *)Graph::NewNode(pGVar8,pOVar1,2,&local_78,false);
  pGVar8 = (Graph *)*puVar7;
  pOVar1 = (Operator *)CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)puVar7[1]);
  local_78 = pNVar3;
  lVar4 = Graph::NewNode(pGVar8,pOVar1,1,&local_78,false);
  pGVar8 = (Graph *)*puVar7;
  pOVar1 = (Operator *)CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)puVar7[1]);
  local_78 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar8,pOVar1,1,&local_78,false);
  **(long **)(this + 0x18) = lVar4;
  if ((*(short *)(*(long *)param_1 + 0x10) != 0x17) ||
     (*(int *)(*(long *)param_1 + 0x2c) == -0x80000000)) {
    pGVar8 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32Equal
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    pNStack_70 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),-0x80000000);
    local_78 = param_1;
    pNVar5 = (Node *)Graph::NewNode(pGVar8,pOVar1,2,&local_78,false);
    uVar6 = 0xc;
    if ((*(long *)(this + 0x10) != 0) &&
       (uVar6 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
      uVar6 = 4;
    }
    pGVar8 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::TrapIf
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar6);
    local_68 = **(undefined8 **)(this + 0x18);
    pNStack_70 = (Node *)**(undefined8 **)(this + 0x20);
    local_78 = pNVar5;
    uVar2 = Graph::NewNode(pGVar8,pOVar1,3,&local_78,false);
    **(undefined8 **)(this + 0x18) = uVar2;
    if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
      SourcePositionTable::SetSourcePosition
                (*(SourcePositionTable **)(this + 0x78),uVar2,
                 (-(ulong)(param_3 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_3 + 1U) << 1)
                 & 0xffff80007fffffff);
    }
  }
  if (**(long **)(this + 0x18) == lVar4) {
    **(long **)(this + 0x18) = lVar9;
  }
  else {
    pGVar8 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],2);
    pNStack_70 = (Node *)**(undefined8 **)(this + 0x18);
    local_78 = pNVar3;
    uVar2 = Graph::NewNode(pGVar8,pOVar1,2,&local_78,false);
    **(undefined8 **)(this + 0x18) = uVar2;
  }
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Int32Div(this_00);
  local_68 = **(undefined8 **)(this + 0x18);
  local_78 = param_1;
  pNStack_70 = param_2;
  Graph::NewNode(pGVar8,pOVar1,3,&local_78,false);
  return;
}

