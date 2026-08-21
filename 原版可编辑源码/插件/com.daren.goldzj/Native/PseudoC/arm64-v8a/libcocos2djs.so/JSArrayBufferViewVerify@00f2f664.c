
/* v8::internal::JSArrayBufferView::JSArrayBufferViewVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::JSArrayBufferView::JSArrayBufferViewVerify(JSArrayBufferView *this,Isolate *param_1)

{
  TorqueGeneratedClassVerifiers::JSArrayBufferViewVerify(*(undefined8 *)this);
  if (*(ulong *)(*(long *)this + 0x17) >> 0x35 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","byte_length() <= JSArrayBuffer::kMaxByteLength");
  }
  if (*(ulong *)(*(long *)this + 0xf) >> 0x35 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","byte_offset() <= JSArrayBuffer::kMaxByteLength");
}

