
/* v8::internal::compiler::WasmGraphBuilder::GetTableBaseAndOffset(unsigned int,
   v8::internal::compiler::Node*, int, v8::internal::compiler::Node**,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::GetTableBaseAndOffset
          (WasmGraphBuilder *this,uint param_1,Node *param_2,int param_3,Node **param_4,
          Node **param_5)

{
  MachineOperatorBuilder *pMVar1;
  Operator *pOVar2;
  MachineGraph *this_00;
  Operator *pOVar3;
  Node *pNVar4;
  Graph *pGVar5;
  Graph *this_01;
  Node *local_50;
  undefined8 uStack_48;
  
  BoundsCheckTable(this,param_1,param_2,param_3,0xb,param_4);
  pMVar1 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  if (pMVar1[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32Mul(pMVar1);
  }
  else {
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64Mul(pMVar1);
  }
  this_00 = *(MachineGraph **)(this + 8);
  if ((*(MachineOperatorBuilder **)(this_00 + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)param_2 + 0x10) == 0x17) {
      param_2 = (Node *)MachineGraph::IntPtrConstant
                                  (this_00,(ulong)*(uint *)(*(long *)param_2 + 0x2c));
    }
    else {
      this_01 = *(Graph **)this_00;
      pOVar3 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(this_00 + 0x10));
      local_50 = param_2;
      param_2 = (Node *)Graph::NewNode(this_01,pOVar3,1,&local_50,false);
    }
  }
  uStack_48 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),4);
  local_50 = param_2;
  pNVar4 = (Node *)Graph::NewNode(pGVar5,pOVar2,2,&local_50,false);
  pMVar1 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  if (pMVar1[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar1);
  }
  else {
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar1);
  }
  uStack_48 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),7);
  local_50 = pNVar4;
  pNVar4 = (Node *)Graph::NewNode(pGVar5,pOVar2,2,&local_50,false);
  *param_5 = pNVar4;
  return;
}

