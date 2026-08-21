
/* v8::internal::TorqueGeneratedClassVerifiers::PromiseReactionJobTaskVerify(v8::internal::PromiseReactionJobTask,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::PromiseReactionJobTaskVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedMicrotask<v8::internal::Microtask,v8::internal::Struct>::MicrotaskVerify
            ((Isolate *)&local_38);
  if (1 < *(ushort *)((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) - 0x47)
  {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsPromiseReactionJobTask()");
  }
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 3));
  uVar1 = *(uint *)(local_38 + 7);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (9 < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) - 0x88)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","context__value.IsContext()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) ||
     ((((uVar2 = uVar2 | 7, *(short *)(uVar2 + *(uint *)(uVar3 - 1)) != 0x43 &&
        (*(ushort *)(uVar2 + *(uint *)(uVar3 - 1)) < 0xaa)) &&
       (*(short *)(uVar2 + *(uint *)(uVar3 - 1)) != 0xa9)) &&
      ((*(short *)(uVar2 + *(uint *)(uVar3 - 1)) != 0x439 &&
       (*(short *)(uVar2 + *(uint *)(uVar3 - 1)) != 0x438)))))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "handler__value.IsOddball() || handler__value.IsJSObject() || handler__value.IsJSProxy() || handler__value.IsJSFunction() || handler__value.IsJSBoundFunction()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) &&
     (((uVar2 = uVar2 | 7, *(short *)(uVar2 + *(uint *)(uVar3 - 1)) == 0x43 ||
       (*(short *)(uVar2 + *(uint *)(uVar3 - 1)) == 0x42d)) ||
      (*(short *)(uVar2 + *(uint *)(uVar3 - 1)) == 0x62)))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "promise_or_capability__value.IsOddball() || promise_or_capability__value.IsJSPromise() || promise_or_capability__value.IsPromiseCapability()"
          );
}

