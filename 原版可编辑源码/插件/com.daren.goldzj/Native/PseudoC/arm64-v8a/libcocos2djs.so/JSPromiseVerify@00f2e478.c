
/* v8::internal::JSPromise::JSPromiseVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSPromise::JSPromiseVerify(JSPromise *this,Isolate *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  TorqueGeneratedClassVerifiers::JSPromiseVerify(*(undefined8 *)this);
  iVar2 = status(this);
  if (iVar2 == 0) {
    uVar1 = *(uint *)(*(ulong *)this + 0xb);
    if (((uVar1 & 1) != 0) &&
       (uVar3 = *(ulong *)this & 0xffffffff00000000,
       *(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) != 99)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","reactions().IsSmi() || reactions().IsPromiseReaction()");
    }
  }
  return;
}

