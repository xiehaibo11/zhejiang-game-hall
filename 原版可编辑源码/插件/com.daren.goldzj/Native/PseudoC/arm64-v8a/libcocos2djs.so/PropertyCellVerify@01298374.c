
/* v8::internal::TorqueGeneratedClassVerifiers::PropertyCellVerify(v8::internal::PropertyCell,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::PropertyCellVerify
               (ulong param_1,undefined8 param_2)

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
  if (*(short *)(uVar4 + *(uint *)(param_1 - 1)) != 0xa5) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsPropertyCell()");
  }
  uVar1 = *(uint *)(param_1 + 3);
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     (((*(ushort *)(uVar4 + *(uint *)(uVar2 - 1)) < 0x40 ||
       (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) == 0x40)) ||
      (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) == 0x40)))) {
    uVar1 = *(uint *)(param_1 + 7);
    Object::VerifyPointer(param_2,uVar3 | uVar1);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","property_details_raw__value.IsSmi()");
    }
    Object::VerifyPointer(param_2,uVar3 | *(uint *)(param_1 + 0xb));
    uVar1 = *(uint *)(param_1 + 0xf);
    uVar3 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(ushort *)(uVar4 + *(uint *)(uVar3 - 1)) - 0x97 < 2)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","dependent_code__value.IsWeakFixedArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "name__value.IsString() || name__value.IsSymbol() || name__value.IsSymbol()");
}

