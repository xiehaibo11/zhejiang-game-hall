
/* v8::internal::JSGlobalProxy::JSGlobalProxyVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::JSGlobalProxy::JSGlobalProxyVerify(JSGlobalProxy *this,Isolate *param_1)

{
  ulong uVar1;
  
  TorqueGeneratedClassVerifiers::JSGlobalProxyVerify(*(undefined8 *)this);
  uVar1 = *(ulong *)this;
  if ((*(byte *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 - 1)) + 9) >> 5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map().is_access_check_needed()");
  }
  if (*(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 7)) + 3) < 2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","0 == FixedArray::cast(elements()).length()");
}

