
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitGetIterator(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitGetIterator
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int local_58 [8];
  int local_38 [2];
  
  lVar6 = *(long *)(this + 0x28);
  local_38[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar4 = interpreter::Register::is_function_closure((Register *)local_38);
  if ((uVar4 & 1) == 0) {
    uVar4 = interpreter::Register::is_current_context((Register *)local_38);
    if ((uVar4 & 1) == 0) {
      local_58[0] = local_38[0];
      if (local_38[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_58,*(int *)(lVar6 + 0x18))
        ;
        lVar5 = *(long *)(lVar6 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar6 + 0x18) + local_38[0];
        lVar5 = *(long *)(lVar6 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar6 + 0x38) - lVar5 >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      lVar6 = lVar5 + (long)(int)uVar1 * 8;
    }
    else {
      lVar6 = lVar6 + 0x28;
    }
  }
  else {
    lVar6 = lVar6 + 0x20;
  }
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,1);
  uVar3 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,2);
  ObjectRef::ObjectRef((ObjectRef *)local_58,*(long **)this,**(long **)this + 0xc18,0);
  uVar4 = ObjectRef::IsName((ObjectRef *)local_58);
  if ((uVar4 & 1) != 0) {
    ProcessNamedPropertyAccess(this,lVar6,local_58,uVar2,0);
    if (*(long *)(*(long *)(this + 0x28) + 0x30) != *(long *)(*(long *)(this + 0x28) + 0x38)) {
      PrepareArgumentsHints<>((Hints *)this);
      ProcessCallOrConstruct(this,0,0,0,local_58,uVar3,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsName()");
}

