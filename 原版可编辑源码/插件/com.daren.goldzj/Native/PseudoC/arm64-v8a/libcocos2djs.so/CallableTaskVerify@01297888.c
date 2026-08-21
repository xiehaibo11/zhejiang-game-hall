
/* v8::internal::TorqueGeneratedClassVerifiers::CallableTaskVerify(v8::internal::CallableTask,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::CallableTaskVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedMicrotask<v8::internal::Microtask,v8::internal::Struct>::MicrotaskVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x49) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsCallableTask()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (0xa8 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))) {
    uVar1 = *(uint *)(local_38 + 7);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x88 < 10))
    {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","context__value.IsContext()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","callable__value.IsJSReceiver()");
}

