
/* v8::internal::compiler::WasmGraphBuilder::BuildCallToRuntime(v8::internal::Runtime::FunctionId,
   v8::internal::compiler::Node**, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildCallToRuntime
          (WasmGraphBuilder *this,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),0);
  BuildCallToRuntimeWithContext
            (this,param_2,uVar1,param_3,param_4,*(undefined8 *)(this + 0x20),
             **(undefined8 **)(this + 0x18));
  return;
}

