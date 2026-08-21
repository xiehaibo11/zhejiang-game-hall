
/* v8::internal::TorqueGeneratedClassVerifiers::JSArrayBufferVerify(v8::internal::JSArrayBuffer,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSArrayBufferVerify
               (ulong param_1,Isolate *param_2)

{
  ulong local_18;
  
  local_18 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_18,param_2);
  if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x424) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsJSArrayBuffer()");
}

