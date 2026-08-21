
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitConstructWithSpread(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitConstructWithSpread
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int local_70 [8];
  int local_38 [2];
  
  lVar7 = *(long *)(this + 0x28);
  lVar8 = *(long *)(lVar7 + 0x30);
  uVar1 = (long)*(int *)(lVar7 + 0x1c) + (long)*(int *)(lVar7 + 0x18);
  if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar7 + 0x38) - lVar8 >> 3) <= (uVar1 & 0xffffffff)))
  {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  local_38[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar5 = interpreter::Register::is_function_closure((Register *)local_38);
  if ((uVar5 & 1) == 0) {
    uVar5 = interpreter::Register::is_current_context((Register *)local_38);
    if ((uVar5 & 1) == 0) {
      local_70[0] = local_38[0];
      if (local_38[0] < 0) {
        uVar2 = interpreter::Register::ToParameterIndex((Register *)local_70,*(int *)(lVar7 + 0x18))
        ;
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      else {
        uVar2 = *(int *)(lVar7 + 0x18) + local_38[0];
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar7 + 0x38) - lVar6 >> 3) <= (ulong)uVar2)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      puVar9 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8);
    }
    else {
      puVar9 = (undefined8 *)(lVar7 + 0x28);
    }
  }
  else {
    puVar9 = (undefined8 *)(lVar7 + 0x20);
  }
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,1)
  ;
  uVar5 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand
                    ((BytecodeArrayAccessor *)param_1,2);
  uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,3);
  PrepareArgumentsHints(local_70,this,uVar3,(uVar5 & 0xffffffff) - 1);
  ProcessCallOrConstruct(this,*puVar9,1,*(undefined8 *)(lVar8 + uVar1 * 8),local_70,uVar4,1);
  return;
}

