
/* v8::internal::AsyncGeneratorRequest::AsyncGeneratorRequestVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::AsyncGeneratorRequest::AsyncGeneratorRequestVerify
          (AsyncGeneratorRequest *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong local_28;
  
  TorqueGeneratedClassVerifiers::AsyncGeneratorRequestVerify(*(undefined8 *)this);
  uVar2 = *(ulong *)this;
  uVar1 = *(uint *)(uVar2 + 7);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","resume_mode() >= JSGeneratorObject::kNext");
  }
  if ((1 < (int)uVar1) && (5 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","resume_mode() <= JSGeneratorObject::kThrow");
  }
  local_28 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 3);
  Object::ObjectVerify((Object *)&local_28,param_1);
  return;
}

