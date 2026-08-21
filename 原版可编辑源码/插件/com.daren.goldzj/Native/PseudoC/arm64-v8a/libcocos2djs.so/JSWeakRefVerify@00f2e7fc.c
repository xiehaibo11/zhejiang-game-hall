
/* v8::internal::JSWeakRef::JSWeakRefVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSWeakRef::JSWeakRefVerify(JSWeakRef *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(short *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
      != 0x431) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSWeakRef()");
  }
  JSObject::JSObjectVerify((JSObject *)this,param_1);
  uVar1 = *(uint *)(*(ulong *)this + 0xb);
  if ((uVar1 != *(uint *)(param_1 + 0xa0)) &&
     (uVar2 = *(ulong *)this & 0xffffffff00000000,
     *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","target().IsUndefined(isolate) || target().IsJSReceiver()");
  }
  return;
}

