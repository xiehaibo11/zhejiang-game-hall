
/* v8::internal::TorqueGeneratedClassVerifiers::MapVerify(v8::internal::Map, v8::internal::Isolate*)
    */

void v8::internal::TorqueGeneratedClassVerifiers::MapVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 - 1);
  uVar3 = param_1 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (uVar4 = uVar3 | 7, *(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map__value.IsMap()");
  }
  if (*(short *)(uVar4 + *(uint *)(param_1 - 1)) != 0xa2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsMap()");
  }
  uVar1 = *(uint *)(param_1 + 0xf);
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((*(ushort *)(uVar4 + *(uint *)(uVar2 - 1)) < 0xa9 &&
      (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","prototype__value.IsJSReceiver() || prototype__value.IsOddball()");
  }
  Object::VerifyPointer(param_2,uVar3 | *(uint *)(param_1 + 0x13));
  uVar1 = *(uint *)(param_1 + 0x17);
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0x9c)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","instance_descriptors__value.IsDescriptorArray()");
  }
  uVar1 = *(uint *)(param_1 + 0x1b);
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (1 < *(ushort *)(uVar4 + *(uint *)(uVar2 - 1)) - 0x97)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","dependent_code__value.IsWeakFixedArray()");
  }
  uVar1 = *(uint *)(param_1 + 0x1f);
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0x99)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "prototype_validity_cell__value.IsSmi() || prototype_validity_cell__value.IsCell()");
  }
  uVar1 = *(uint *)(param_1 + 0x23);
  uVar2 = uVar3 | uVar1;
  MaybeObject::VerifyMaybeObjectPointer(param_2,uVar2);
  if (uVar1 != 3) {
    if ((uVar1 & 1) != 0) {
      uVar2 = uVar3 | (ulong)uVar1 & 0xfffffffffffffffd;
    }
    if ((~uVar1 & 3) == 0) {
      if (((uVar2 & 1) == 0) ||
         (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0xa2)) {
LAB_01293b38:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "transitions_or_prototype_info__value.IsCleared() || (!transitions_or_prototype_info__value.IsWeak() && transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsSmi()) || (!transitions_or_prototype_info__value.IsWeak() && transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsTransitionArray()) || (!transitions_or_prototype_info__value.IsWeak() && transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsMap()) || (transitions_or_prototype_info__value.IsWeak() && transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsMap()) || (!transitions_or_prototype_info__value.IsWeak() && transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsPrototypeInfo())"
                );
      }
    }
    else if (((((uVar2 & 1) != 0) &&
              (uVar3 = uVar2 & 0xffffffff00000000 | 7,
              *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x98)) &&
             (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xa2)) &&
            (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 100))
    goto LAB_01293b38;
  }
  return;
}

