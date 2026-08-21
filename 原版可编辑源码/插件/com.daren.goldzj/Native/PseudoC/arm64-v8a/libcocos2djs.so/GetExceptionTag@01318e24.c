
/* v8::internal::compiler::WasmGraphBuilder::GetExceptionTag(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::GetExceptionTag(WasmGraphBuilder *this,Node *param_1)

{
  undefined8 uVar1;
  Node *local_8;
  
  this[0x61] = (WasmGraphBuilder)0x1;
  local_8 = param_1;
  uVar1 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),0);
  BuildCallToRuntimeWithContext
            (this,0x1ca,uVar1,&local_8,1,*(undefined8 *)(this + 0x20),**(undefined8 **)(this + 0x18)
            );
  return;
}

