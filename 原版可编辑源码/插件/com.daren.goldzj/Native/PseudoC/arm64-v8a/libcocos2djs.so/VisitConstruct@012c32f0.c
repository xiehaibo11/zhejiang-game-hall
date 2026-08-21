
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitConstruct(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitConstruct
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int local_70 [8];
  int local_38 [2];
  
  lVar8 = *(long *)(this + 0x28);
  lVar9 = *(long *)(lVar8 + 0x30);
  uVar1 = (long)*(int *)(lVar8 + 0x1c) + (long)*(int *)(lVar8 + 0x18);
  if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar8 + 0x38) - lVar9 >> 3) <= (uVar1 & 0xffffffff)))
  {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  local_38[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar6 = interpreter::Register::is_function_closure((Register *)local_38);
  if ((uVar6 & 1) == 0) {
    uVar6 = interpreter::Register::is_current_context((Register *)local_38);
    if ((uVar6 & 1) == 0) {
      local_70[0] = local_38[0];
      if (local_38[0] < 0) {
        uVar2 = interpreter::Register::ToParameterIndex((Register *)local_70,*(int *)(lVar8 + 0x18))
        ;
        lVar7 = *(long *)(lVar8 + 0x30);
      }
      else {
        uVar2 = *(int *)(lVar8 + 0x18) + local_38[0];
        lVar7 = *(long *)(lVar8 + 0x30);
      }
      if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar8 + 0x38) - lVar7 >> 3) <= (ulong)uVar2)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      puVar10 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8);
    }
    else {
      puVar10 = (undefined8 *)(lVar8 + 0x28);
    }
  }
  else {
    puVar10 = (undefined8 *)(lVar8 + 0x20);
  }
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,1)
  ;
  uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand
                    ((BytecodeArrayAccessor *)param_1,2);
  uVar5 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,3);
  PrepareArgumentsHints(local_70,this,uVar3,uVar4);
  ProcessCallOrConstruct(this,*puVar10,1,*(undefined8 *)(lVar9 + uVar1 * 8),local_70,uVar5,0);
  return;
}

