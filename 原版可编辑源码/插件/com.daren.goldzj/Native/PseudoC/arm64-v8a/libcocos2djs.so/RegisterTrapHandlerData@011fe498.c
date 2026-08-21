
/* v8::internal::wasm::WasmCode::RegisterTrapHandlerData() */

void __thiscall v8::internal::wasm::WasmCode::RegisterTrapHandlerData(WasmCode *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0x3c) == 0) && (*(ulong *)(this + 0x80) != 0)) {
    iVar1 = trap_handler::RegisterHandlerData
                      (*(ulong *)this,*(ulong *)(this + 8),*(ulong *)(this + 0x80),
                       *(ProtectedInstructionData **)(this + 0x78));
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 <= index");
    }
    if (-1 < *(int *)(this + 0x70)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!has_trap_handler_index()");
    }
    *(int *)(this + 0x70) = iVar1;
  }
  return;
}

