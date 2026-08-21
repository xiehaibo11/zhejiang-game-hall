
/* v8::internal::TorqueGeneratedClassVerifiers::Tuple2Verify(v8::internal::Tuple2,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::Tuple2Verify(ulong param_1,undefined8 param_2)

{
  ulong local_8;
  
  local_8 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_8);
  if (*(short *)((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) == 0x6e) {
    Object::VerifyPointer(param_2,local_8 & 0xffffffff00000000 | (ulong)*(uint *)(local_8 + 3));
    Object::VerifyPointer(param_2,local_8 & 0xffffffff00000000 | (ulong)*(uint *)(local_8 + 7));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsTuple2()");
}

