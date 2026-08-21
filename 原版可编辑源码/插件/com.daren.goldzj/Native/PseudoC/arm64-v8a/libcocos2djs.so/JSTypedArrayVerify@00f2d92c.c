
/* v8::internal::JSTypedArray::JSTypedArrayVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSTypedArray::JSTypedArrayVerify(JSTypedArray *this,Isolate *param_1)

{
  TorqueGeneratedClassVerifiers::JSTypedArrayVerify(*(undefined8 *)this);
  if (*(ulong *)(*(long *)this + 0x1f) >> 0x1f == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","length() <= JSTypedArray::kMaxLength");
}

