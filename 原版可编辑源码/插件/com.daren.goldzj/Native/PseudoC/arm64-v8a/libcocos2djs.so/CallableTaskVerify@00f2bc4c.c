
/* v8::internal::CallableTask::CallableTaskVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::CallableTask::CallableTaskVerify(CallableTask *this,Isolate *param_1)

{
  ulong uVar1;
  
  TorqueGeneratedClassVerifiers::CallableTaskVerify(*(undefined8 *)this);
  uVar1 = *(ulong *)this & 0xffffffff00000000;
  if ((*(byte *)((uVar1 | 9) + (ulong)*(uint *)((uVar1 | *(uint *)(*(ulong *)this + 3)) - 1)) >> 1 &
      1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","callable().IsCallable()");
}

