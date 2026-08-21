
/* v8::internal::WasmExportedFunctionData::WasmExportedFunctionDataVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::WasmExportedFunctionData::WasmExportedFunctionDataVerify
          (WasmExportedFunctionData *this,Isolate *param_1)

{
  uint uVar1;
  
  TorqueGeneratedClassVerifiers::WasmExportedFunctionDataVerify(*(undefined8 *)this);
  uVar1 = *(uint *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3)) +
                   0x17) >> 1 & 0x1f;
  if ((uVar1 != 8) && (uVar1 != 0xb)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "wrapper_code().kind() == Code::JS_TO_WASM_FUNCTION || wrapper_code().kind() == Code::C_WASM_ENTRY"
            );
  }
  return;
}

