
/* v8::internal::wasm::StreamingDecoder::Abort() */

void __thiscall v8::internal::wasm::StreamingDecoder::Abort(StreamingDecoder *this)

{
  long *plVar1;
  
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 0x48))();
    plVar1 = *(long **)this;
    *(undefined8 *)this = 0;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015fc5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))();
      return;
    }
  }
  return;
}

