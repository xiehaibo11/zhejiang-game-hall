
/* v8::internal::compiler::WasmGraphBuilder::ZeroCheck32(v8::internal::wasm::TrapReason,
   v8::internal::compiler::Node*, int) */

undefined8
v8::internal::compiler::WasmGraphBuilder::ZeroCheck32(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  
  if ((*(short *)(*param_3 + 0x10) == 0x17) && (*(int *)(*param_3 + 0x2c) != 0)) {
    return *(undefined8 *)(**(long **)(param_1 + 8) + 8);
  }
  uVar1 = TrapIfFalse();
  return uVar1;
}

