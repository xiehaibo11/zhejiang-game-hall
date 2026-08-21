
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallNoFeedback(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallNoFeedback
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int local_58 [2];
  int local_50 [8];
  
  lVar6 = *(long *)(this + 0x28);
  local_58[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar4 = interpreter::Register::is_function_closure((Register *)local_58);
  if ((uVar4 & 1) == 0) {
    uVar4 = interpreter::Register::is_current_context((Register *)local_58);
    if ((uVar4 & 1) == 0) {
      local_50[0] = local_58[0];
      if (local_58[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_50,*(int *)(lVar6 + 0x18))
        ;
        lVar5 = *(long *)(lVar6 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar6 + 0x18) + local_58[0];
        lVar5 = *(long *)(lVar6 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar5 >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      puVar7 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8);
    }
    else {
      puVar7 = (undefined8 *)(lVar6 + 0x28);
    }
  }
  else {
    puVar7 = (undefined8 *)(lVar6 + 0x20);
  }
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,1)
  ;
  iVar3 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand
                    ((BytecodeArrayAccessor *)param_1,2);
  PrepareArgumentsHints(local_50,this,uVar2,(long)iVar3);
  ProcessCallOrConstruct(this,*puVar7,0,0,local_50,0xffffffff,0);
  return;
}

