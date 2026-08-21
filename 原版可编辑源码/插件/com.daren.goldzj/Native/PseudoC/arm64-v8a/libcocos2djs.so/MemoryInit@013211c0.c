
/* v8::internal::compiler::WasmGraphBuilder::MemoryInit(unsigned int, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::MemoryInit
          (WasmGraphBuilder *this,uint param_1,Node *param_2,Node *param_3,Node *param_4,int param_5
          )

{
  CommonOperatorBuilder *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Node *pNVar4;
  Operator *pOVar5;
  CallDescriptor *pCVar6;
  undefined4 uVar7;
  MachineGraph *pMVar8;
  MachineOperatorBuilder *this_01;
  Graph *pGVar9;
  Graph *this_02;
  Node *pNVar10;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 *local_b0;
  undefined4 local_a0;
  undefined2 local_9c;
  Node *local_98;
  Node *local_90;
  Node *pNStack_88;
  undefined8 local_80;
  Node *pNStack_78;
  undefined8 local_70;
  undefined8 local_68;
  Node *local_48;
  
  local_98 = param_4;
  local_48 = param_2;
  local_90 = (Node *)BoundsCheckMemRange(this,&local_48,&local_98,param_5);
  uVar7 = 0xc;
  if ((*(long *)(this + 0x10) != 0) && (uVar7 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0'))
  {
    uVar7 = 1;
  }
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::TrapIf
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar7);
  local_80 = **(undefined8 **)(this + 0x18);
  pNStack_88 = (Node *)**(undefined8 **)(this + 0x20);
  uVar2 = Graph::NewNode(pGVar9,pOVar1,3,&local_90,false);
  **(undefined8 **)(this + 0x18) = uVar2;
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar2,
               ((long)(param_5 + 1) & 0x7fffc0003fffffffU) << 1);
  }
  pNVar3 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_1);
  this_01 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Load(this_01,5);
  pNVar10 = *(Node **)(this + 0x30);
  pNStack_88 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0xb3);
  pNStack_78 = (Node *)**(undefined8 **)(this + 0x18);
  local_80 = **(undefined8 **)(this + 0x20);
  local_90 = pNVar10;
  pNVar10 = (Node *)Graph::NewNode(pGVar9,pOVar1,4,&local_90,false);
  **(undefined8 **)(this + 0x20) = pNVar10;
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Word32Shl(this_01);
  pNStack_88 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),2);
  local_90 = pNVar3;
  pNVar4 = (Node *)Graph::NewNode(pGVar9,pOVar1,2,&local_90,false);
  pMVar8 = *(MachineGraph **)(this + 8);
  if ((*(MachineOperatorBuilder **)(pMVar8 + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)pNVar4 + 0x10) == 0x17) {
      pNVar4 = (Node *)MachineGraph::IntPtrConstant(pMVar8,(ulong)*(uint *)(*(long *)pNVar4 + 0x2c))
      ;
    }
    else {
      pGVar9 = *(Graph **)pMVar8;
      pOVar1 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(pMVar8 + 0x10));
      local_90 = pNVar4;
      pNVar4 = (Node *)Graph::NewNode(pGVar9,pOVar1,1,&local_90,false);
    }
  }
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Load(this_01,0x304);
  pNStack_78 = (Node *)**(undefined8 **)(this + 0x18);
  local_80 = **(undefined8 **)(this + 0x20);
  local_90 = pNVar10;
  pNStack_88 = pNVar4;
  pNVar10 = (Node *)Graph::NewNode(pGVar9,pOVar1,4,&local_90,false);
  **(undefined8 **)(this + 0x20) = pNVar10;
  pNVar10 = (Node *)BoundsCheckRange(this,param_3,&local_98,pNVar10,param_5);
  uVar7 = 0xc;
  if ((*(long *)(this + 0x10) != 0) && (uVar7 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0'))
  {
    uVar7 = 1;
  }
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::TrapIf
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar7);
  local_80 = **(undefined8 **)(this + 0x18);
  pNStack_88 = (Node *)**(undefined8 **)(this + 0x20);
  local_90 = pNVar10;
  uVar2 = Graph::NewNode(pGVar9,pOVar1,3,&local_90,false);
  **(undefined8 **)(this + 0x18) = uVar2;
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar2,
               ((long)(param_5 + 1) & 0x7fffc0003fffffffU) << 1);
  }
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],5)
  ;
  pNVar10 = *(Node **)(this + 0x30);
  pNStack_88 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0xab);
  pNStack_78 = (Node *)**(undefined8 **)(this + 0x18);
  local_80 = **(undefined8 **)(this + 0x20);
  local_90 = pNVar10;
  pNVar10 = (Node *)Graph::NewNode(pGVar9,pOVar1,4,&local_90,false);
  **(undefined8 **)(this + 0x20) = pNVar10;
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Word32Shl(this_01);
  pNStack_88 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),3);
  local_90 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar9,pOVar1,2,&local_90,false);
  pMVar8 = *(MachineGraph **)(this + 8);
  if ((*(MachineOperatorBuilder **)(pMVar8 + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)pNVar3 + 0x10) == 0x17) {
      pNVar3 = (Node *)MachineGraph::IntPtrConstant(pMVar8,(ulong)*(uint *)(*(long *)pNVar3 + 0x2c))
      ;
    }
    else {
      pGVar9 = *(Graph **)pMVar8;
      pOVar1 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(pMVar8 + 0x10));
      local_90 = pNVar3;
      pNVar3 = (Node *)Graph::NewNode(pGVar9,pOVar1,1,&local_90,false);
    }
  }
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Load(this_01,5);
  pNStack_78 = (Node *)**(undefined8 **)(this + 0x18);
  local_80 = **(undefined8 **)(this + 0x20);
  local_90 = pNVar10;
  pNStack_88 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar9,pOVar1,4,&local_90,false);
  **(undefined8 **)(this + 0x20) = pNVar3;
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  if (this_01[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar1 = (Operator *)MachineOperatorBuilder::Int32Add(this_01);
  }
  else {
    pOVar1 = (Operator *)MachineOperatorBuilder::Int64Add(this_01);
  }
  pMVar8 = *(MachineGraph **)(this + 8);
  if ((*(MachineOperatorBuilder **)(pMVar8 + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)param_3 + 0x10) == 0x17) {
      param_3 = (Node *)MachineGraph::IntPtrConstant
                                  (pMVar8,(ulong)*(uint *)(*(long *)param_3 + 0x2c));
    }
    else {
      this_02 = *(Graph **)pMVar8;
      pOVar5 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(pMVar8 + 0x10));
      local_90 = param_3;
      param_3 = (Node *)Graph::NewNode(this_02,pOVar5,1,&local_90,false);
    }
  }
  local_90 = pNVar3;
  pNStack_88 = param_3;
  uVar2 = Graph::NewNode(pGVar9,pOVar1,2,&local_90,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  this_00 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1];
  local_c0 = ExternalReference::wasm_memory_copy();
  pOVar1 = (Operator *)
           CommonOperatorBuilder::ExternalConstant(this_00,(ExternalReference *)&local_c0);
  local_90 = (Node *)0x0;
  local_90 = (Node *)Graph::NewNode(pGVar9,pOVar1,0,&local_90,false);
  local_a0 = 0x50005;
  local_b0 = &local_a0;
  local_9c = 0x304;
  uStack_b8 = 3;
  local_c0 = 0;
  pNStack_88 = local_48;
  pNStack_78 = local_98;
  local_70 = **(undefined8 **)(this + 0x20);
  local_68 = **(undefined8 **)(this + 0x18);
  local_80 = uVar2;
  pCVar6 = (CallDescriptor *)
           Linkage::GetSimplifiedCDescriptor(*(undefined8 *)**(undefined8 **)(this + 8),&local_c0,0)
  ;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),pCVar6);
  uVar2 = Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,6,&local_90,false);
  **(undefined8 **)(this + 0x20) = uVar2;
  **(undefined8 **)(this + 0x20) = uVar2;
  return;
}

