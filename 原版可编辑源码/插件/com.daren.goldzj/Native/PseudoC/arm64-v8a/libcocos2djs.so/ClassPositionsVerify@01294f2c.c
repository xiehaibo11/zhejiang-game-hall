
/* v8::internal::TorqueGeneratedClassVerifiers::ClassPositionsVerify(v8::internal::ClassPositions,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::ClassPositionsVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong local_28;
  
  local_28 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_28);
  if (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x5a) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsClassPositions()");
  }
  uVar1 = *(uint *)(local_28 + 3);
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(uint *)(local_28 + 7);
    Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","end__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","start__value.IsSmi()");
}

