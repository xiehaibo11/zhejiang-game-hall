
/* v8::internal::compiler::WasmGraphBuilder::TrapIfEq32(v8::internal::wasm::TrapReason,
   v8::internal::compiler::Node*, int, int) */

undefined8 __thiscall
v8::internal::compiler::WasmGraphBuilder::TrapIfEq32
          (WasmGraphBuilder *this,undefined4 param_2,Node *param_3,int param_4,undefined4 param_5)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Graph *this_00;
  Node *local_60;
  undefined8 uStack_58;
  
  if ((*(short *)(*(long *)param_3 + 0x10) == 0x17) &&
     (*(int *)(*(long *)param_3 + 0x2c) != param_4)) {
    uVar2 = *(undefined8 *)(**(long **)(this + 8) + 8);
  }
  else {
    if (param_4 == 0) {
      uVar2 = TrapIfFalse(this,param_2,param_3,param_5);
      return uVar2;
    }
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32Equal
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_4);
    local_60 = param_3;
    uVar2 = Graph::NewNode(this_00,pOVar1,2,&local_60,false);
    uVar2 = TrapIfTrue(this,param_2,uVar2,param_5);
  }
  return uVar2;
}

