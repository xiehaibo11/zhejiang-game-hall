
/* v8::internal::TorqueGeneratedClassVerifiers::CallbackTaskVerify(v8::internal::CallbackTask,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::CallbackTaskVerify
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
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x4a) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsCallbackTask()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x46)) {
    uVar1 = *(uint *)(local_38 + 7);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x46)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","data__value.IsForeign()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","callback__value.IsForeign()");
}

