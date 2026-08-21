
/* v8::internal::TorqueGeneratedClassVerifiers::JSSpecialObjectVerify(v8::internal::JSSpecialObject,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSSpecialObjectVerify(ulong param_1)

{
  ulong local_18;
  
  local_18 = param_1;
  TorqueGeneratedJSCustomElementsObject<v8::internal::JSCustomElementsObject,v8::internal::JSObject>
  ::JSCustomElementsObjectVerify((Isolate *)&local_18);
  if (*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) - 0xaa <
      0x367) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsJSSpecialObject()");
}

