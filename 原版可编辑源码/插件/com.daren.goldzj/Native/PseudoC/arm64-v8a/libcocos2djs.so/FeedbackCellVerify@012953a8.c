
/* v8::internal::TorqueGeneratedClassVerifiers::FeedbackCellVerify(v8::internal::FeedbackCell,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::FeedbackCellVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x5d) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsFeedbackCell()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     (((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
       (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76 < 0xf)) ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x9f)))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "value__value.IsOddball() || value__value.IsFixedArray() || value__value.IsFeedbackVector()"
          );
}

