
/* v8::internal::NativeContext::NativeContextVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::NativeContext::NativeContextVerify(NativeContext *this,Isolate *param_1)

{
  ulong uVar1;
  
  Context::ContextVerify((Context *)this,param_1);
  uVar1 = *(ulong *)this;
  if ((*(uint *)(uVar1 + 3) & 0xfffffffe) != 0x20e) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","length() == NativeContext::NATIVE_CONTEXT_SLOTS");
  }
  if (*(char *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 - 1)) + 3) == '\0') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kVariableSizeSentinel == map().instance_size()");
}

