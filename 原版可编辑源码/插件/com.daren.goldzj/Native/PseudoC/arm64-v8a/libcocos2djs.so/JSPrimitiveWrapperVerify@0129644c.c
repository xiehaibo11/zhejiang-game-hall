
/* v8::internal::TorqueGeneratedClassVerifiers::JSPrimitiveWrapperVerify(v8::internal::JSPrimitiveWrapper,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSPrimitiveWrapperVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedJSCustomElementsObject<v8::internal::JSCustomElementsObject,v8::internal::JSObject>
  ::JSCustomElementsObjectVerify((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x411) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSPrimitiveWrapper()");
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
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "value__value.IsJSReceiver() || value__value.IsSmi() || value__value.IsHeapNumber() || value__value.IsBigInt() || value__value.IsString() || value__value.IsSymbol() || value__value.IsOddball() || value__value.IsOddball() || value__value.IsOddball() || value__value.IsOddball()"
            );
  }
  return;
}

