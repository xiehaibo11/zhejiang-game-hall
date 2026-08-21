
/* v8::internal::TorqueGeneratedClassVerifiers::JSBoundFunctionVerify(v8::internal::JSBoundFunction,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSBoundFunctionVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedJSFunctionOrBoundFunction<v8::internal::JSFunctionOrBoundFunction,v8::internal::JSObject>
  ::JSFunctionOrBoundFunctionVerify((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x438) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSBoundFunction()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((((0xa9 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) ||
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0xa9)) ||
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x439)) ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x438)))) {
    uVar1 = *(uint *)(local_38 + 0xf);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((((uVar1 & 1) != 0) &&
         (uVar3 = uVar3 | 7, *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0xa9)) &&
        ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42 &&
         ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x41 &&
          (0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))))))) &&
       ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x40 &&
        ((((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
           (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) &&
          (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) &&
         ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
          (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x44)))))))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "bound_this__value.IsJSReceiver() || bound_this__value.IsSmi() || bound_this__value.IsHeapNumber() || bound_this__value.IsBigInt() || bound_this__value.IsString() || bound_this__value.IsSymbol() || bound_this__value.IsOddball() || bound_this__value.IsOddball() || bound_this__value.IsOddball() || bound_this__value.IsOddball() || bound_this__value.IsSourceTextModule()"
              );
    }
    uVar1 = *(uint *)(local_38 + 0x13);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76 < 0xf))
    {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","bound_arguments__value.IsFixedArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "bound_target_function__value.IsJSObject() || bound_target_function__value.IsJSProxy() || bound_target_function__value.IsJSFunction() || bound_target_function__value.IsJSBoundFunction()"
          );
}

