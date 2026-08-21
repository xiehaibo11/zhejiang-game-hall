
/* v8::internal::compiler::WasmGraphBuilder::BoundsCheckMem(unsigned char,
   v8::internal::compiler::Node*, unsigned int, int,
   v8::internal::compiler::WasmGraphBuilder::EnforceBoundsCheck) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::BoundsCheckMem
          (WasmGraphBuilder *this,ulong param_2_00,Node *param_2,uint param_3,int param_4,
          uint param_6)

{
  MachineGraph *this_00;
  Node *pNVar1;
  long *plVar2;
  Node *pNVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  MachineOperatorBuilder *this_01;
  ulong uVar9;
  Graph *pGVar10;
  Node *pNVar11;
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  this_00 = *(MachineGraph **)(this + 8);
  if ((*(MachineOperatorBuilder **)(this_00 + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)param_2 + 0x10) == 0x17) {
      param_2 = (Node *)MachineGraph::IntPtrConstant
                                  (this_00,(ulong)*(uint *)(*(long *)param_2 + 0x2c));
    }
    else {
      pGVar10 = *(Graph **)this_00;
      pOVar4 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(this_00 + 0x10));
      local_68 = param_2;
      param_2 = (Node *)Graph::NewNode(pGVar10,pOVar4,1,&local_68,false);
    }
  }
  if (FLAG_wasm_no_bounds_checks != '\0') {
    return param_2;
  }
  lVar7 = *(long *)(this + 0x10);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 8) != '\0')) && ((param_6 & 1) == 0)) {
    return param_2;
  }
  param_2_00 = param_2_00 & 0xff;
  if ((*(ulong *)(lVar7 + 0x18) < param_2_00) ||
     (*(ulong *)(lVar7 + 0x18) - param_2_00 < (ulong)param_3)) {
    pNVar1 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    if ((*(short *)(*(long *)pNVar1 + 0x10) != 0x17) || (*(int *)(*(long *)pNVar1 + 0x2c) == 0)) {
      uVar6 = 0xc;
      if ((*(long *)(this + 0x10) != 0) &&
         (uVar6 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
        uVar6 = 1;
      }
      pGVar10 = (Graph *)**(undefined8 **)(this + 8);
      pOVar4 = (Operator *)
               CommonOperatorBuilder::TrapUnless
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar6);
      local_58 = **(undefined8 **)(this + 0x18);
      pNStack_60 = (Node *)**(undefined8 **)(this + 0x20);
      local_68 = pNVar1;
      uVar5 = Graph::NewNode(pGVar10,pOVar4,3,&local_68,false);
      **(undefined8 **)(this + 0x18) = uVar5;
      if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
        SourcePositionTable::SetSourcePosition
                  (*(SourcePositionTable **)(this + 0x78),uVar5,
                   (-(ulong)(param_4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_4 + 1U) << 1
                   ) & 0xffff80007fffffff);
      }
    }
    plVar2 = (long *)MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),0);
    return (Node *)plVar2;
  }
  uVar9 = (param_2_00 + param_3) - 1;
  pNVar1 = (Node *)MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),uVar9);
  this_01 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pNVar11 = *(Node **)(*(long *)(this + 0x28) + 8);
  if (uVar9 < *(ulong *)(*(long *)(this + 0x10) + 0x10)) {
    lVar7 = *(long *)param_2;
    if (*(short *)(lVar7 + 0x10) == 0x18) {
      uVar8 = *(ulong *)(lVar7 + 0x30);
    }
    else {
      if (*(short *)(lVar7 + 0x10) != 0x17) goto LAB_0131d598;
      uVar8 = (ulong)*(uint *)(lVar7 + 0x2c);
    }
    if (uVar8 < *(ulong *)(*(long *)(this + 0x10) + 0x10) - uVar9) {
      return param_2;
    }
  }
  else {
    pGVar10 = (Graph *)**(undefined8 **)(this + 8);
    if (this_01[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar4 = (Operator *)MachineOperatorBuilder::Uint32LessThan(this_01);
    }
    else {
      pOVar4 = (Operator *)MachineOperatorBuilder::Uint64LessThan(this_01);
    }
    local_68 = pNVar1;
    pNStack_60 = pNVar11;
    pNVar3 = (Node *)Graph::NewNode(pGVar10,pOVar4,2,&local_68,false);
    uVar6 = 0xc;
    if ((*(long *)(this + 0x10) != 0) &&
       (uVar6 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
      uVar6 = 1;
    }
    pGVar10 = (Graph *)**(undefined8 **)(this + 8);
    pOVar4 = (Operator *)
             CommonOperatorBuilder::TrapUnless
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar6);
    local_58 = **(undefined8 **)(this + 0x18);
    pNStack_60 = (Node *)**(undefined8 **)(this + 0x20);
    local_68 = pNVar3;
    uVar5 = Graph::NewNode(pGVar10,pOVar4,3,&local_68,false);
    **(undefined8 **)(this + 0x18) = uVar5;
    if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
      SourcePositionTable::SetSourcePosition
                (*(SourcePositionTable **)(this + 0x78),uVar5,
                 (-(ulong)(param_4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_4 + 1U) << 1)
                 & 0xffff80007fffffff);
    }
  }
LAB_0131d598:
  pGVar10 = (Graph *)**(undefined8 **)(this + 8);
  if (this_01[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar4 = (Operator *)MachineOperatorBuilder::Int32Sub(this_01);
  }
  else {
    pOVar4 = (Operator *)MachineOperatorBuilder::Int64Sub(this_01);
  }
  local_68 = pNVar11;
  pNStack_60 = pNVar1;
  uVar5 = Graph::NewNode(pGVar10,pOVar4,2,&local_68,false);
  pGVar10 = (Graph *)**(undefined8 **)(this + 8);
  if (this_01[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar4 = (Operator *)MachineOperatorBuilder::Uint32LessThan(this_01);
  }
  else {
    pOVar4 = (Operator *)MachineOperatorBuilder::Uint64LessThan(this_01);
  }
  local_68 = param_2;
  pNStack_60 = (Node *)uVar5;
  pNVar1 = (Node *)Graph::NewNode(pGVar10,pOVar4,2,&local_68,false);
  uVar6 = 0xc;
  if ((*(long *)(this + 0x10) != 0) && (uVar6 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0'))
  {
    uVar6 = 1;
  }
  pGVar10 = (Graph *)**(undefined8 **)(this + 8);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::TrapUnless
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar6);
  local_58 = **(undefined8 **)(this + 0x18);
  pNStack_60 = (Node *)**(undefined8 **)(this + 0x20);
  local_68 = pNVar1;
  uVar5 = Graph::NewNode(pGVar10,pOVar4,3,&local_68,false);
  **(undefined8 **)(this + 0x18) = uVar5;
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar5,
               (-(ulong)(param_4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_4 + 1U) << 1) &
               0xffff80007fffffff);
  }
  if (this[0x62] != (WasmGraphBuilder)0x0) {
    uVar5 = *(undefined8 *)(*(long *)(this + 0x28) + 0x10);
    pGVar10 = (Graph *)**(undefined8 **)(this + 8);
    if (this_01[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar4 = (Operator *)MachineOperatorBuilder::Word32And(this_01);
    }
    else {
      pOVar4 = (Operator *)MachineOperatorBuilder::Word64And(this_01);
    }
    local_68 = param_2;
    pNStack_60 = (Node *)uVar5;
    param_2 = (Node *)Graph::NewNode(pGVar10,pOVar4,2,&local_68,false);
  }
  return param_2;
}

