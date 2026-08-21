
/* v8::internal::compiler::WasmGraphBuilder::TraceMemoryOperation(bool,
   v8::internal::MachineRepresentation, v8::internal::compiler::Node*, unsigned int, int) */

undefined8 __thiscall
v8::internal::compiler::WasmGraphBuilder::TraceMemoryOperation
          (WasmGraphBuilder *this,uint param_2,uint param_3,undefined8 param_4,int param_5,
          int param_6)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Graph *pGVar4;
  Node *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  Node *local_48;
  
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::StackSlot
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],8,4);
  local_88 = (Node *)0x0;
  pNVar2 = (Node *)Graph::NewNode(pGVar4,pOVar1,0,&local_88,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  local_48 = pNVar2;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Int32Add
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_88 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_5);
  uStack_80 = param_4;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,2,&local_88,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],4);
  uStack_80 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  uStack_70 = **(undefined8 **)(this + 0x20);
  local_68 = **(undefined8 **)(this + 0x18);
  local_88 = pNVar2;
  local_78 = uVar3;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,5,&local_88,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  uVar3 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_2 & 1);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],2);
  uStack_80 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),4);
  uStack_70 = **(undefined8 **)(this + 0x20);
  local_68 = **(undefined8 **)(this + 0x18);
  local_88 = pNVar2;
  local_78 = uVar3;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,5,&local_88,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  uVar3 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_3 & 0xff);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],2);
  uStack_80 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),5);
  uStack_70 = **(undefined8 **)(this + 0x20);
  local_68 = **(undefined8 **)(this + 0x18);
  local_88 = pNVar2;
  local_78 = uVar3;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,5,&local_88,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  uVar3 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),0);
  uVar3 = BuildCallToRuntimeWithContext
                    (this,0x1bd,uVar3,&local_48,1,*(undefined8 *)(this + 0x20),
                     **(undefined8 **)(this + 0x18));
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar3,
               (-(ulong)(param_6 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_6 + 1U) << 1) &
               0xffff80007fffffff);
  }
  return uVar3;
}

