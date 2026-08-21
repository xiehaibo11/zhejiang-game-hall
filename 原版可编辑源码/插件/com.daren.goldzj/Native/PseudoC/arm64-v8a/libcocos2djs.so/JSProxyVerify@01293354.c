
/* v8::internal::TorqueGeneratedClassVerifiers::JSProxyVerify(v8::internal::JSProxy,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSProxyVerify(ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSReceiver::JSReceiverVerify((JSReceiver *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0xa9) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSProxy()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((0xa8 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)))) {
    uVar1 = *(uint *)(local_38 + 0xb);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) &&
       ((uVar3 = uVar3 | 7, 0xa8 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) ||
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)))) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","handler__value.IsJSReceiver() || handler__value.IsOddball()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","target__value.IsJSReceiver() || target__value.IsOddball()");
}

