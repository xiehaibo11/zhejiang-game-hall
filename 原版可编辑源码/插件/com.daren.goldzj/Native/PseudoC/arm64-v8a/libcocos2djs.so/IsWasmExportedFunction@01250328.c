
/* v8::internal::WasmExportedFunction::IsWasmExportedFunction(v8::internal::Object) */

bool v8::internal::WasmExportedFunction::IsWasmExportedFunction(ulong param_1)

{
  if (((param_1 & 1) != 0) &&
     (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x439)) {
    return (*(uint *)((param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 0x17)) + 0x17) &
           0x3e) == 0x10;
  }
  return false;
}

