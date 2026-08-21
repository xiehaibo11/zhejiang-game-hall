
/* v8::internal::TorqueGeneratedClassVerifiers::JSObjectVerify(v8::internal::JSObject,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSObjectVerify(ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSReceiver::JSReceiverVerify((JSReceiver *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(ushort *)(uVar3 + *(uint *)(local_38 - 1)) < 0xaa) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSObject()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76 < 0x12)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","elements__value.IsFixedArrayBase()");
}

