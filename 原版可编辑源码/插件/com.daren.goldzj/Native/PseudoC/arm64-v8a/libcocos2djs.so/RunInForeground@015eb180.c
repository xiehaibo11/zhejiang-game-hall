
/* v8::internal::wasm::AsyncCompileJob::DecodeFail::RunInForeground(v8::internal::wasm::AsyncCompileJob*)
    */

void __thiscall
v8::internal::wasm::AsyncCompileJob::DecodeFail::RunInForeground
          (DecodeFail *this,AsyncCompileJob *param_1)

{
  DecodeFailed(param_1,(WasmError *)(this + 8));
  return;
}

