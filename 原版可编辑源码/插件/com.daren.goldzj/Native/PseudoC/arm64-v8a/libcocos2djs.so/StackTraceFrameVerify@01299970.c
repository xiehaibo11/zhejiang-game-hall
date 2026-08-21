
/* v8::internal::TorqueGeneratedClassVerifiers::StackTraceFrameVerify(v8::internal::StackTraceFrame,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::StackTraceFrameVerify
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
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x6c) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsStackTraceFrame()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
      (0xe < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "frame_array__value.IsOddball() || frame_array__value.IsFixedArray()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","frame_index__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x6b)))) {
    uVar1 = *(uint *)(local_38 + 0xf);
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","id__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "frame_info__value.IsOddball() || frame_info__value.IsStackFrameInfo()");
}

