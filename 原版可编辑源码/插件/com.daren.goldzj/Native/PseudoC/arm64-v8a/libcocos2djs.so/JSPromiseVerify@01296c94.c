
/* v8::internal::TorqueGeneratedClassVerifiers::JSPromiseVerify(v8::internal::JSPromise,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSPromiseVerify(ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x42d) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSPromise()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((((((uVar1 & 1) != 0) && (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0xa9)) &&
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42)) &&
       ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x41 &&
        (0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))))) &&
      ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x40 &&
       ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))))) &&
     ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
      ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 99)))))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "reactions_or_result__value.IsJSReceiver() || reactions_or_result__value.IsSmi() || reactions_or_result__value.IsHeapNumber() || reactions_or_result__value.IsBigInt() || reactions_or_result__value.IsString() || reactions_or_result__value.IsSymbol() || reactions_or_result__value.IsOddball() || reactions_or_result__value.IsOddball() || reactions_or_result__value.IsOddball() || reactions_or_result__value.IsOddball() || reactions_or_result__value.IsPromiseReaction()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","flags__value.IsSmi()");
}

