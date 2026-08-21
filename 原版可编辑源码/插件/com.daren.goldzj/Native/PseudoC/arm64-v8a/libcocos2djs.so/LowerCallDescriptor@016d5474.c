
/* v8::internal::compiler::Int64Lowering::LowerCallDescriptor(v8::internal::compiler::CallDescriptor
   const*) */

undefined8 __thiscall
v8::internal::compiler::Int64Lowering::LowerCallDescriptor
          (Int64Lowering *this,CallDescriptor *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x90);
  if (puVar2 != (undefined8 *)0x0) {
    if ((CallDescriptor *)*puVar2 == param_1) {
      return puVar2[2];
    }
    if ((CallDescriptor *)puVar2[1] == param_1) {
      return puVar2[3];
    }
  }
  uVar1 = GetI32WasmCallDescriptor(*(Zone **)this,param_1);
  return uVar1;
}

