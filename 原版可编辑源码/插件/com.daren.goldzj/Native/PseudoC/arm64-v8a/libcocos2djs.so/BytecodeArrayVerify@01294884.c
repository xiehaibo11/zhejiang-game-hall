
/* v8::internal::TorqueGeneratedClassVerifiers::BytecodeArrayVerify(v8::internal::BytecodeArray,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::BytecodeArrayVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  FixedArrayBase::FixedArrayBaseVerify((FixedArrayBase *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x86) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsBytecodeArray()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (0xe < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","constant_pool__value.IsFixedArray()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x85)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","handler_table__value.IsByteArray()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     (((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x85)) ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x69)))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "source_position_table__value.IsOddball() || source_position_table__value.IsByteArray() || source_position_table__value.IsSourcePositionTableWithFrameCache()"
          );
}

