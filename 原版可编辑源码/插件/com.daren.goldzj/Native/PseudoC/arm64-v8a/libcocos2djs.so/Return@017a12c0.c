
/* v8::internal::compiler::RawMachineAssembler::Return(int, v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::Return
          (RawMachineAssembler *this,int param_1,Node **param_2)

{
  uint uVar1;
  Node **ppNVar2;
  Operator *pOVar3;
  Node *pNVar4;
  ulong uVar5;
  
  uVar1 = param_1 + 1;
  uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  ppNVar2 = operator_new__(uVar5);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Int32Constant((CommonOperatorBuilder *)(this + 0x48),0);
  pNVar4 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar3,0,(Node **)0x0,false);
  Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar4);
  *ppNVar2 = pNVar4;
  if (0 < param_1) {
    memcpy(ppNVar2 + 1,param_2,(ulong)(uint)param_1 << 3);
  }
  pOVar3 = (Operator *)CommonOperatorBuilder::Return((CommonOperatorBuilder *)(this + 0x48),param_1)
  ;
  pNVar4 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar3,uVar1,ppNVar2,false);
  Schedule::AddReturn(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar4);
  *(undefined8 *)(this + 0x98) = 0;
  operator_delete__(ppNVar2);
  return;
}

