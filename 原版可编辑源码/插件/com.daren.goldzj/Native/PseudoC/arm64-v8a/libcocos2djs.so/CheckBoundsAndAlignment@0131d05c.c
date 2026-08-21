
/* v8::internal::compiler::WasmGraphBuilder::CheckBoundsAndAlignment(unsigned char,
   v8::internal::compiler::Node*, unsigned int, int) */

long * __thiscall
v8::internal::compiler::WasmGraphBuilder::CheckBoundsAndAlignment
          (WasmGraphBuilder *this,uchar param_1,Node *param_2,uint param_3,int param_4)

{
  long *plVar1;
  Node *pNVar2;
  MachineOperatorBuilder *pMVar3;
  Operator *pOVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  Graph *pGVar10;
  Graph *this_00;
  Node *local_78;
  long *plStack_70;
  undefined8 local_68;
  
  plVar1 = (long *)BoundsCheckMem();
  lVar8 = *plVar1;
  if (*(short *)(lVar8 + 0x10) == 0x18) {
    uVar9 = *(ulong *)(lVar8 + 0x30);
  }
  else {
    if (*(short *)(lVar8 + 0x10) != 0x17) {
      pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
      pGVar10 = (Graph *)**(undefined8 **)(this + 8);
      if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
        pOVar5 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar3);
      }
      else {
        pOVar5 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar3);
      }
      pNVar2 = (Node *)**(undefined8 **)(this + 0x28);
      if (param_3 != 0) {
        pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
        this_00 = (Graph *)**(undefined8 **)(this + 8);
        if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
          pOVar4 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar3);
        }
        else {
          pOVar4 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar3);
        }
        plStack_70 = (long *)MachineGraph::IntPtrConstant
                                       (*(MachineGraph **)(this + 8),(ulong)param_3);
        local_78 = pNVar2;
        pNVar2 = (Node *)Graph::NewNode(this_00,pOVar4,2,&local_78,false);
      }
      local_78 = pNVar2;
      plStack_70 = plVar1;
      pNVar2 = (Node *)Graph::NewNode(pGVar10,pOVar5,2,&local_78,false);
      pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
      pGVar10 = (Graph *)**(undefined8 **)(this + 8);
      if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
        pOVar5 = (Operator *)MachineOperatorBuilder::Word32And(pMVar3);
      }
      else {
        pOVar5 = (Operator *)MachineOperatorBuilder::Word64And(pMVar3);
      }
      plStack_70 = (long *)MachineGraph::IntPtrConstant
                                     (*(MachineGraph **)(this + 8),(ulong)param_1 - 1);
      local_78 = pNVar2;
      pNVar2 = (Node *)Graph::NewNode(pGVar10,pOVar5,2,&local_78,false);
      pGVar10 = (Graph *)**(undefined8 **)(this + 8);
      pOVar5 = (Operator *)
               MachineOperatorBuilder::Word32Equal
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
      plStack_70 = (long *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
      local_78 = pNVar2;
      pNVar2 = (Node *)Graph::NewNode(pGVar10,pOVar5,2,&local_78,false);
      uVar7 = 0xc;
      if ((*(long *)(this + 0x10) != 0) &&
         (uVar7 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
        uVar7 = 2;
      }
      goto LAB_0131d27c;
    }
    uVar9 = (ulong)*(uint *)(lVar8 + 0x2c);
  }
  if ((uVar9 + param_3 & (ulong)param_1 - 1) == 0) {
    return plVar1;
  }
  pNVar2 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  if ((*(short *)(*(long *)pNVar2 + 0x10) == 0x17) && (*(int *)(*(long *)pNVar2 + 0x2c) != 0)) {
    return plVar1;
  }
  uVar7 = 0xc;
  if ((*(long *)(this + 0x10) != 0) && (uVar7 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0'))
  {
    uVar7 = 2;
  }
LAB_0131d27c:
  pGVar10 = (Graph *)**(undefined8 **)(this + 8);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::TrapUnless
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar7);
  local_68 = **(undefined8 **)(this + 0x18);
  plStack_70 = (long *)**(undefined8 **)(this + 0x20);
  local_78 = pNVar2;
  uVar6 = Graph::NewNode(pGVar10,pOVar5,3,&local_78,false);
  **(undefined8 **)(this + 0x18) = uVar6;
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar6,
               (-(ulong)(param_4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_4 + 1U) << 1) &
               0xffff80007fffffff);
  }
  return plVar1;
}

