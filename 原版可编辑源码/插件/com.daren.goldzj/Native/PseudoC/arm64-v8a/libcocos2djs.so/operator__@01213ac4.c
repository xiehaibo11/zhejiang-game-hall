
/* v8::internal::wasm::InterpretedFrameDeleter::TEMPNAMEPLACEHOLDERVALUE(v8::internal::wasm::InterpretedFrame*)
    */

void __thiscall
v8::internal::wasm::InterpretedFrameDeleter::operator()
          (InterpretedFrameDeleter *this,InterpretedFrame *param_1)

{
  if (param_1 != (InterpretedFrame *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}

