
/* v8::internal::wasm::GetCodeKind(v8::internal::wasm::WasmCompilationResult const&) */

undefined4 v8::internal::wasm::GetCodeKind(WasmCompilationResult *param_1)

{
  if ((ulong)(long)(char)param_1[0x86] < 3) {
    return *(undefined4 *)(&DAT_019eeb48 + (long)(char)param_1[0x86] * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

