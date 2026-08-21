
/* v8::internal::TorqueGeneratedClassVerifiers::JSGlobalProxyVerify(v8::internal::JSGlobalProxy,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSGlobalProxyVerify
               (ulong param_1,undefined8 param_2)

{
  ulong local_8;
  
  local_8 = param_1;
  TorqueGeneratedJSSpecialObject<v8::internal::JSSpecialObject,v8::internal::JSCustomElementsObject>
  ::JSSpecialObjectVerify((Isolate *)&local_8);
  if (*(short *)((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) == 0xab) {
    Object::VerifyPointer(param_2,local_8 & 0xffffffff00000000 | (ulong)*(uint *)(local_8 + 0xb));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsJSGlobalProxy()");
}

