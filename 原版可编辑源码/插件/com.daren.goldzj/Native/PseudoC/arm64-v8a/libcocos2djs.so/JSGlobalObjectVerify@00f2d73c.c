
/* v8::internal::JSGlobalObject::JSGlobalObjectVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::JSGlobalObject::JSGlobalObjectVerify(JSGlobalObject *this,Isolate *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)this;
  uVar2 = uVar1 & 0xffffffff00000000;
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) != 0xaa) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSGlobalObject()");
  }
  if ((*(uint *)((uVar2 | *(uint *)(uVar1 + 3)) + 7) < 2) &&
     (*(uint *)((uVar2 | *(uint *)(uVar1 + 7)) + 3) < 2)) {
    return;
  }
  JSObject::JSObjectVerify((JSObject *)this,param_1);
  return;
}

