
/* v8::internal::TorqueGeneratedClassVerifiers::PromiseReactionVerify(v8::internal::PromiseReaction,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::PromiseReactionVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 99) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsPromiseReaction()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 99)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","next__value.IsSmi() || next__value.IsPromiseReaction()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
        (0xa9 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))) ||
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0xa9)) ||
      ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x439 ||
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x438)))))) {
    uVar1 = *(uint *)(local_38 + 0xb);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) &&
       (((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
         (0xa9 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))) ||
        ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0xa9 ||
         ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x439 ||
          (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x438)))))))) {
      uVar1 = *(uint *)(local_38 + 0xf);
      uVar3 = local_38 & 0xffffffff00000000;
      uVar2 = uVar3 | uVar1;
      Object::VerifyPointer(param_2,uVar2);
      if (((uVar1 & 1) != 0) &&
         (((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
           (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x42d)) ||
          (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x62)))) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "promise_or_capability__value.IsOddball() || promise_or_capability__value.IsJSPromise() || promise_or_capability__value.IsPromiseCapability()"
              );
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "fulfill_handler__value.IsOddball() || fulfill_handler__value.IsJSObject() || fulfill_handler__value.IsJSProxy() || fulfill_handler__value.IsJSFunction() || fulfill_handler__value.IsJSBoundFunction()"
            );
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "reject_handler__value.IsOddball() || reject_handler__value.IsJSObject() || reject_handler__value.IsJSProxy() || reject_handler__value.IsJSFunction() || reject_handler__value.IsJSBoundFunction()"
          );
}

