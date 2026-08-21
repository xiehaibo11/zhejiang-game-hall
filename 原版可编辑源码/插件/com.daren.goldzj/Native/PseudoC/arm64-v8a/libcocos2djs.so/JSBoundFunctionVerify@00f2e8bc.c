
/* v8::internal::JSBoundFunction::JSBoundFunctionVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::JSBoundFunction::JSBoundFunctionVerify(JSBoundFunction *this,Isolate *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  TorqueGeneratedClassVerifiers::JSBoundFunctionVerify(*(undefined8 *)this);
  uVar2 = *(ulong *)this;
  uVar1 = uVar2 & 0xffffffff00000000 | 9;
  if ((*(byte *)(uVar1 + *(uint *)(uVar2 - 1)) >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsCallable()");
  }
  if ((uint)((*(byte *)(uVar1 + *(uint *)(uVar2 - 1)) & 0x40) == 0) !=
      (*(byte *)(uVar1 + *(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb)) - 1)
                ) & 0x40) >> 6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsConstructor() == bound_target_function().IsConstructor()");
}

