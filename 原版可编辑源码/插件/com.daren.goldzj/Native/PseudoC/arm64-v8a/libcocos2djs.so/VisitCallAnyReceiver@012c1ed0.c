
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallAnyReceiver(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallAnyReceiver
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int local_60 [8];
  int local_28 [2];
  
  lVar7 = *(long *)(this + 0x28);
  local_28[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar5 = interpreter::Register::is_function_closure((Register *)local_28);
  if ((uVar5 & 1) == 0) {
    uVar5 = interpreter::Register::is_current_context((Register *)local_28);
    if ((uVar5 & 1) == 0) {
      local_60[0] = local_28[0];
      if (local_28[0] < 0) {
        uVar1 = interpreter::Register::ToParameterIndex((Register *)local_60,*(int *)(lVar7 + 0x18))
        ;
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      else {
        uVar1 = *(int *)(lVar7 + 0x18) + local_28[0];
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      if ((-1 < (int)uVar1) && ((ulong)(*(long *)(lVar7 + 0x38) - lVar6 >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      puVar8 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8);
    }
    else {
      puVar8 = (undefined8 *)(lVar7 + 0x28);
    }
  }
  else {
    puVar8 = (undefined8 *)(lVar7 + 0x20);
  }
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,1)
  ;
  iVar3 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand
                    ((BytecodeArrayAccessor *)param_1,2);
  uVar4 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,3);
  PrepareArgumentsHints(local_60,this,uVar2,(long)iVar3);
  ProcessCallOrConstruct(this,*puVar8,0,0,local_60,uVar4,0);
  return;
}

