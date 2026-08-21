
/* v8::internal::TorqueGeneratedClassVerifiers::JSCustomElementsObjectVerify(v8::internal::JSCustomElementsObject,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSCustomElementsObjectVerify
               (ulong param_1,Isolate *param_2)

{
  ulong local_18;
  
  local_18 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_18,param_2);
  if (*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) - 0xaa <
      0x368) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsJSCustomElementsObject()");
}

