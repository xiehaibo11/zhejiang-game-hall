
/* v8::internal::TorqueGeneratedClassVerifiers::SourcePositionTableWithFrameCacheVerify(v8::internal::SourcePositionTableWithFrameCache,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::SourcePositionTableWithFrameCacheVerify
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
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x69) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsSourcePositionTableWithFrameCache()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x85)) {
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 7));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","source_position_table__value.IsByteArray()");
}

