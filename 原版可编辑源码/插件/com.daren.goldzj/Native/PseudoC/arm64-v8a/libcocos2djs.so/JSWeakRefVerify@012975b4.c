
/* v8::internal::TorqueGeneratedClassVerifiers::JSWeakRefVerify(v8::internal::JSWeakRef,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSWeakRefVerify(ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x431) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSWeakRef()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((0xa8 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","target__value.IsJSReceiver() || target__value.IsOddball()");
}

