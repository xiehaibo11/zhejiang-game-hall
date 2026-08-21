
/* v8::internal::TorqueGeneratedClassVerifiers::JSFunctionOrBoundFunctionVerify(v8::internal::JSFunctionOrBoundFunction,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSFunctionOrBoundFunctionVerify
               (ulong param_1,Isolate *param_2)

{
  ulong local_18;
  
  local_18 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_18,param_2);
  if (0x437 < *(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsJSFunctionOrBoundFunction()");
}

