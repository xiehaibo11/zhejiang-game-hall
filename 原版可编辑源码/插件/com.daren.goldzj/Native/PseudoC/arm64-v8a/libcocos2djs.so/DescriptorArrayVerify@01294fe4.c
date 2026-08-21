
/* v8::internal::TorqueGeneratedClassVerifiers::DescriptorArrayVerify(v8::internal::DescriptorArray,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::DescriptorArrayVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 - 1);
  uVar5 = param_1 & 0xffffffff00000000;
  uVar3 = uVar5 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (uVar6 = uVar5 | 7, *(short *)(uVar6 + *(uint *)(uVar3 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map__value.IsMap()");
  }
  if (*(short *)(uVar6 + *(uint *)(param_1 - 1)) != 0x9c) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsDescriptorArray()");
  }
  uVar1 = *(uint *)(param_1 + 0xb);
  uVar3 = uVar5 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (*(short *)(uVar6 + *(uint *)(uVar3 - 1)) != 0x5c)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","enum_cache__value.IsEnumCache()");
  }
  if (*(short *)(param_1 + 3) != 0) {
    uVar3 = 0;
    uVar7 = uVar5 | 7;
    puVar8 = (uint *)(param_1 + 0xf);
    do {
      uVar1 = *puVar8;
      uVar4 = uVar5 | uVar1;
      Object::VerifyPointer(param_2,uVar4);
      if (((uVar1 & 1) == 0) ||
         ((0x40 < *(ushort *)(uVar6 + *(uint *)(uVar4 - 1)) &&
          (*(short *)(uVar6 + *(uint *)(uVar4 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","key__value.IsName() || key__value.IsOddball()");
      }
      uVar1 = puVar8[1];
      uVar4 = uVar5 | uVar1;
      Object::VerifyPointer(param_2,uVar4);
      if (((uVar1 & 1) != 0) && (*(short *)(uVar6 + *(uint *)(uVar4 - 1)) != 0x43)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","details__value.IsSmi() || details__value.IsOddball()");
      }
      uVar1 = puVar8[2];
      uVar4 = uVar5 | uVar1;
      MaybeObject::VerifyMaybeObjectPointer(param_2,uVar4);
      if (uVar1 != 3) {
        uVar2 = uVar5 | (ulong)uVar1 & 0xfffffffffffffffd;
        if ((uVar1 & 1) != 0) {
          uVar4 = uVar2;
        }
        if ((~uVar1 & 3) == 0) {
          if (((uVar4 & 1) == 0) ||
             (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0xa2)) {
LAB_01295228:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "value__value.IsCleared() || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsJSReceiver()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsSmi()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsHeapNumber()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsBigInt()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsString()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsSymbol()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsOddball()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsOddball()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsOddball()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsOddball()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsAccessorInfo()) || (value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsMap()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsAccessorPair()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsClassPositions())"
                    );
          }
        }
        else if (((((uVar4 & 1) == 0) ||
                  (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) <
                   0xa9)) && ((uVar1 & 1) != 0)) &&
                (((uVar1 & 1) == 0 ||
                 (((((*(short *)(uVar7 + *(uint *)(uVar2 - 1)) != 0x42 &&
                     (*(short *)(uVar7 + *(uint *)(uVar2 - 1)) != 0x41)) &&
                    ((0x3f < *(ushort *)(uVar7 + *(uint *)(uVar2 - 1)) &&
                     ((*(short *)(uVar7 + *(uint *)(uVar2 - 1)) != 0x40 &&
                      (*(short *)(uVar7 + *(uint *)(uVar2 - 1)) != 0x43)))))) &&
                   (*(short *)(uVar7 + *(uint *)(uVar2 - 1)) != 0x43)) &&
                  ((((*(short *)(uVar7 + *(uint *)(uVar2 - 1)) != 0x43 &&
                     (*(short *)(uVar7 + *(uint *)(uVar2 - 1)) != 0x43)) &&
                    (*(short *)(uVar7 + *(uint *)(uVar2 - 1)) != 0x51)) &&
                   ((*(short *)(uVar7 + *(uint *)(uVar2 - 1)) != 0x52 &&
                    (*(short *)(uVar7 + *(uint *)(uVar2 - 1)) != 0x5a)))))))))) goto LAB_01295228;
      }
      uVar3 = uVar3 + 1;
      puVar8 = puVar8 + 3;
    } while (uVar3 < *(ushort *)(param_1 + 3));
  }
  return;
}

