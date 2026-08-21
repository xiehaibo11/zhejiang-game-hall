
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallUndefinedReceiver(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallUndefinedReceiver
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int local_48 [2];
  int local_28 [2];
  
  lVar7 = *(long *)(this + 0x28);
  local_48[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar5 = interpreter::Register::is_function_closure((Register *)local_48);
  if ((uVar5 & 1) == 0) {
    uVar5 = interpreter::Register::is_current_context((Register *)local_48);
    if ((uVar5 & 1) == 0) {
      local_28[0] = local_48[0];
      if (local_48[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_28,*(int *)(lVar7 + 0x18))
        ;
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar7 + 0x18) + local_48[0];
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar7 + 0x38) - lVar6 >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      lVar7 = lVar6 + (long)(int)uVar1 * 8;
    }
    else {
      lVar7 = lVar7 + 0x28;
    }
  }
  else {
    lVar7 = lVar7 + 0x20;
  }
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,1)
  ;
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand
                    ((BytecodeArrayAccessor *)param_1,2);
  uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,3);
  ProcessCallVarArgs(this,0,lVar7,uVar2,uVar3,uVar4,0);
  return;
}

