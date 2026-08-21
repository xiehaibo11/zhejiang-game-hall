
/* v8::internal::WasmInstanceObject::WasmInstanceObjectVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::WasmInstanceObject::WasmInstanceObjectVerify
          (WasmInstanceObject *this,Isolate *param_1)

{
  JSObject::JSObjectVerify((JSObject *)this,param_1);
  if (*(short *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
      == 0x434) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsWasmInstanceObject()");
}

