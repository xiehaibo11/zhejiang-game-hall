
/* v8::internal::TorqueGeneratedClassVerifiers::JSDateVerify(v8::internal::JSDate,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSDateVerify(ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x428) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSDate()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42)) &&
     (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "value__value.IsSmi() || value__value.IsHeapNumber() || value__value.IsOddball()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "year__value.IsSmi() || year__value.IsOddball() || year__value.IsHeapNumber()");
  }
  uVar1 = *(uint *)(local_38 + 0x13);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "month__value.IsSmi() || month__value.IsOddball() || month__value.IsHeapNumber()");
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "day__value.IsSmi() || day__value.IsOddball() || day__value.IsHeapNumber()");
  }
  uVar1 = *(uint *)(local_38 + 0x1b);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "weekday__value.IsSmi() || weekday__value.IsOddball() || weekday__value.IsHeapNumber()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0x1f);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "hour__value.IsSmi() || hour__value.IsOddball() || hour__value.IsHeapNumber()");
  }
  uVar1 = *(uint *)(local_38 + 0x23);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "min__value.IsSmi() || min__value.IsOddball() || min__value.IsHeapNumber()");
  }
  uVar1 = *(uint *)(local_38 + 0x27);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "sec__value.IsSmi() || sec__value.IsOddball() || sec__value.IsHeapNumber()");
  }
  uVar1 = *(uint *)(local_38 + 0x2b);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "cache_stamp__value.IsSmi() || cache_stamp__value.IsOddball() || cache_stamp__value.IsHeapNumber()"
            );
  }
  return;
}

