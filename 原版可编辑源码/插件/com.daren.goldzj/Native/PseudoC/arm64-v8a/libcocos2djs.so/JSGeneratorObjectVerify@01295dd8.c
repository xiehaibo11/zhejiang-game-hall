
/* v8::internal::TorqueGeneratedClassVerifiers::JSGeneratorObjectVerify(v8::internal::JSGeneratorObject,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSGeneratorObjectVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (2 < *(ushort *)(uVar3 + *(uint *)(local_38 - 1)) - 0x417) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSGeneratorObject()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","function__value.IsJSFunction()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (9 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x88)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","context__value.IsContext()");
  }
  uVar1 = *(uint *)(local_38 + 0x13);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((((((uVar1 & 1) != 0) &&
         (uVar3 = uVar3 | 7, *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0xa9)) &&
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
             "receiver__value.IsJSReceiver() || receiver__value.IsSmi() || receiver__value.IsHeapNumber() || receiver__value.IsBigInt() || receiver__value.IsString() || receiver__value.IsSymbol() || receiver__value.IsOddball() || receiver__value.IsOddball() || receiver__value.IsOddball() || receiver__value.IsOddball()"
            );
  }
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x17));
  uVar1 = *(uint *)(local_38 + 0x1b);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","resume_mode__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x1f);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(uint *)(local_38 + 0x23);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76 < 0xf))
    {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","parameters_and_registers__value.IsFixedArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","continuation__value.IsSmi()");
}

