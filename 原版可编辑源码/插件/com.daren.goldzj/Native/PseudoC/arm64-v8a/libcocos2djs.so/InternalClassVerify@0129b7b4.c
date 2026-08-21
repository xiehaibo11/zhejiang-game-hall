
/* v8::internal::TorqueGeneratedClassVerifiers::InternalClassVerify(v8::internal::InternalClass,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::InternalClassVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  if (*(short *)((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x60) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsInternalClass()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(uint *)(local_38 + 7);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) && (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","b__value.IsSmi() || b__value.IsHeapNumber()");
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","a__value.IsSmi()");
}

