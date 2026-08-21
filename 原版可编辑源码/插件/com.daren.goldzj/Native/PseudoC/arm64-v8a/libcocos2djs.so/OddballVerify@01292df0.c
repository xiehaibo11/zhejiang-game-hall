
/* v8::internal::TorqueGeneratedClassVerifiers::OddballVerify(v8::internal::Oddball,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::OddballVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedPrimitiveHeapObject<v8::internal::PrimitiveHeapObject,v8::internal::HeapObject>::
  PrimitiveHeapObjectVerify((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x43) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsOddball()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","to_string__value.IsString()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","to_number__value.IsSmi() || to_number__value.IsHeapNumber()");
  }
  uVar1 = *(uint *)(local_38 + 0x13);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40)) {
    uVar1 = *(uint *)(local_38 + 0x17);
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","type_of__value.IsString()");
}

