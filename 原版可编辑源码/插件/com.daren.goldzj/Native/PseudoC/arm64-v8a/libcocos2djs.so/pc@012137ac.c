
/* v8::internal::wasm::InterpretedFrame::pc() const */

undefined4 __thiscall v8::internal::wasm::InterpretedFrame::pc(InterpretedFrame *this)

{
  return *(undefined4 *)(*(long *)(*(long *)this + 0x38) + (long)*(int *)(this + 8) * 0x18 + 8);
}

