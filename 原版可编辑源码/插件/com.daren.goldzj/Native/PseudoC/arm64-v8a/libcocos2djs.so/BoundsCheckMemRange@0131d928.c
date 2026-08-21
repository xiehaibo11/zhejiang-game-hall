
/* v8::internal::compiler::WasmGraphBuilder::BoundsCheckMemRange(v8::internal::compiler::Node**,
   v8::internal::compiler::Node**, int) */

undefined8 __thiscall
v8::internal::compiler::WasmGraphBuilder::BoundsCheckMemRange
          (WasmGraphBuilder *this,Node **param_1,Node **param_2,int param_3)

{
  undefined8 uVar1;
  Operator *pOVar2;
  MachineGraph *this_00;
  Operator *pOVar3;
  MachineOperatorBuilder *this_01;
  Graph *this_02;
  Node *pNVar4;
  Graph *this_03;
  Node *pNVar5;
  Node *local_60;
  Node *pNStack_58;
  
  uVar1 = BoundsCheckRange(this,*param_1,param_2,*(Node **)(*(long *)(this + 0x28) + 8),param_3);
  this_01 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  this_02 = (Graph *)**(undefined8 **)(this + 8);
  if (this_01[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32Add(this_01);
  }
  else {
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64Add(this_01);
  }
  this_00 = *(MachineGraph **)(this + 8);
  pNVar4 = *param_1;
  pNVar5 = (Node *)**(undefined8 **)(this + 0x28);
  if ((*(MachineOperatorBuilder **)(this_00 + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)pNVar4 + 0x10) == 0x17) {
      pNVar4 = (Node *)MachineGraph::IntPtrConstant
                                 (this_00,(ulong)*(uint *)(*(long *)pNVar4 + 0x2c));
    }
    else {
      this_03 = *(Graph **)this_00;
      pOVar3 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(this_00 + 0x10));
      local_60 = pNVar4;
      pNVar4 = (Node *)Graph::NewNode(this_03,pOVar3,1,&local_60,false);
    }
  }
  local_60 = pNVar5;
  pNStack_58 = pNVar4;
  pNVar4 = (Node *)Graph::NewNode(this_02,pOVar2,2,&local_60,false);
  *param_1 = pNVar4;
  return uVar1;
}

