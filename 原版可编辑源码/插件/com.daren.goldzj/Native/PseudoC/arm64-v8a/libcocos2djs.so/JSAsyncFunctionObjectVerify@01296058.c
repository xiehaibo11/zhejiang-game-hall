
/* v8::internal::TorqueGeneratedClassVerifiers::JSAsyncFunctionObjectVerify(v8::internal::JSAsyncFunctionObject,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSAsyncFunctionObjectVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedJSGeneratorObject<v8::internal::JSGeneratorObject,v8::internal::JSObject>::
  JSGeneratorObjectVerify((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x418) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSAsyncFunctionObject()");
  }
  uVar1 = *(uint *)(local_38 + 0x27);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x42d)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","promise__value.IsJSPromise()");
}

