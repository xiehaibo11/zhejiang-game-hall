
/* v8::internal::wasm::InterpretedFrame::GetLocalCount() const */

int __thiscall v8::internal::wasm::InterpretedFrame::GetLocalCount(InterpretedFrame *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(long *)(*(long *)this + 0x38) + (long)*(int *)(this + 8) * 0x18);
  return (*(int *)(puVar1 + 3) + *(int *)(*(long *)*puVar1 + 8)) - *(int *)(puVar1 + 2);
}

