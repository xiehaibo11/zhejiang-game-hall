
/* v8::internal::wasm::InterpretedFrame::function() const */

undefined8 __thiscall v8::internal::wasm::InterpretedFrame::function(InterpretedFrame *this)

{
  return **(undefined8 **)(*(long *)(*(long *)this + 0x38) + (long)*(int *)(this + 8) * 0x18);
}

