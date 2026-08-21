
/* v8::internal::JSStringIterator::JSStringIteratorVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::JSStringIterator::JSStringIteratorVerify(JSStringIterator *this,Isolate *param_1)

{
  TorqueGeneratedClassVerifiers::JSStringIteratorVerify(*(undefined8 *)this);
  if (*(int *)(*(long *)this + 0xf) < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","index() >= 0");
  }
  if (*(int *)(*(long *)this + 0xf) < 0x1fffffe2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","index() <= String::kMaxLength");
}

