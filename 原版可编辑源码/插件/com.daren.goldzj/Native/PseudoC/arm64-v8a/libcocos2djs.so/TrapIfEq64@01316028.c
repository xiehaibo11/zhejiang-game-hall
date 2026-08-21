
/* v8::internal::compiler::WasmGraphBuilder::TrapIfEq64(v8::internal::wasm::TrapReason,
   v8::internal::compiler::Node*, long, int) */

undefined8 __thiscall
v8::internal::compiler::WasmGraphBuilder::TrapIfEq64
          (WasmGraphBuilder *this,undefined4 param_2,Node *param_3,long param_4,undefined4 param_5)

{
  Operator *pOVar1;
  undefined8 uVar2;
  long lVar3;
  Graph *this_00;
  Node *local_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)param_3;
  if (*(short *)(lVar3 + 0x10) == 0x18) {
    lVar3 = *(long *)(lVar3 + 0x30);
  }
  else {
    if (*(short *)(lVar3 + 0x10) != 0x17) goto LAB_01316098;
    lVar3 = (long)*(int *)(lVar3 + 0x2c);
  }
  if (lVar3 != param_4) {
    return *(undefined8 *)(**(long **)(this + 8) + 8);
  }
LAB_01316098:
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word64Equal
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_58 = MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),param_4);
  local_60 = param_3;
  uVar2 = Graph::NewNode(this_00,pOVar1,2,&local_60,false);
  uVar2 = TrapIfTrue(this,param_2,uVar2,param_5);
  return uVar2;
}

