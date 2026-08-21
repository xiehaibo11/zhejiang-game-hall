
/* v8::internal::compiler::WasmGraphBuilder::BuildI64Rol(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI64Rol
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  Node *pNVar1;
  Operator *pOVar2;
  long lVar3;
  ulong uVar4;
  Node *local_40;
  Node *pNStack_38;
  
  lVar3 = *(long *)param_2;
  if (*(short *)(lVar3 + 0x10) == 0x18) {
    uVar4 = *(ulong *)(lVar3 + 0x30);
  }
  else {
    if (*(short *)(lVar3 + 0x10) != 0x17) {
      pNVar1 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0x40);
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Int64Sub
                         (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      local_40 = pNVar1;
      pNStack_38 = param_2;
      pNVar1 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,2,&local_40,false)
      ;
      goto LAB_01312aa8;
    }
    uVar4 = (ulong)*(int *)(lVar3 + 0x2c);
  }
  pNVar1 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0x40 - (uVar4 & 0x3f));
LAB_01312aa8:
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Word64Ror
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  pNStack_38 = (Node *)MaskShiftCount64(this,pNVar1);
  local_40 = param_1;
  Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,2,&local_40,false);
  return;
}

