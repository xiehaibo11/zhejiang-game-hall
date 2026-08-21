
/* v8::internal::compiler::WasmGraphBuilder::BuildI64Ctz(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI64Ctz(WasmGraphBuilder *this,Node *param_1)

{
  undefined8 uVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Node *local_28;
  
  uVar1 = ExternalReference::wasm_word64_ctz();
  pNVar2 = (Node *)BuildBitCountingCall(this,param_1,uVar1,5);
  pOVar3 = (Operator *)
           MachineOperatorBuilder::ChangeUint32ToUint64
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_28 = pNVar2;
  Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar3,1,&local_28,false);
  return;
}

