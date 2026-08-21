
/* v8::internal::TorqueGeneratedClassVerifiers::InterpreterDataVerify(v8::internal::InterpreterData,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::InterpreterDataVerify
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
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x61) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsInterpreterData()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x86)) {
    uVar1 = *(uint *)(local_38 + 7);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x9a)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","interpreter_trampoline__value.IsCode()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","bytecode_array__value.IsBytecodeArray()");
}

