
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitSwitchOnSmiNoFeedback(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void v8::internal::compiler::SerializerForBackgroundCompilation::VisitSwitchOnSmiNoFeedback
               (BytecodeArrayIterator *param_1)

{
  long lVar1;
  ulong uVar2;
  int extraout_var;
  iterator aiStack_80 [32];
  iterator aiStack_60 [56];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  interpreter::BytecodeArrayAccessor::GetJumpTableTargetOffsets();
  interpreter::JumpTableTargetOffsets::begin();
  interpreter::JumpTableTargetOffsets::end();
  while (uVar2 = interpreter::JumpTableTargetOffsets::iterator::operator!=(aiStack_60,aiStack_80),
        (uVar2 & 1) != 0) {
    interpreter::JumpTableTargetOffsets::iterator::operator*(aiStack_60);
    ContributeToJumpTargetEnvironment((SerializerForBackgroundCompilation *)param_1,extraout_var);
    interpreter::JumpTableTargetOffsets::iterator::operator++(aiStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

