
/* v8::internal::TorqueGeneratedClassVerifiers::JSAsyncGeneratorObjectVerify(v8::internal::JSAsyncGeneratorObject,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSAsyncGeneratorObjectVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong local_28;
  
  local_28 = param_1;
  TorqueGeneratedJSGeneratorObject<v8::internal::JSGeneratorObject,v8::internal::JSObject>::
  JSGeneratorObjectVerify((Isolate *)&local_28);
  if (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x419) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSAsyncGeneratorObject()");
  }
  uVar1 = *(uint *)(local_28 + 0x27);
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(uint *)(local_28 + 0x2b);
    Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_awaiting__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","queue__value.IsHeapObject()");
}

