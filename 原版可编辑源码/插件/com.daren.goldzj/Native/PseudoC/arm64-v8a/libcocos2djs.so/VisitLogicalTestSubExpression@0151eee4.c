
/* v8::internal::interpreter::BytecodeGenerator::VisitLogicalTestSubExpression(v8::internal::Token::Value,
   v8::internal::Expression*, v8::internal::interpreter::BytecodeLabels*,
   v8::internal::interpreter::BytecodeLabels*, int) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitLogicalTestSubExpression
          (BytecodeGenerator *this,char param_2,Expression *param_3,BytecodeLabels *param_4,
          BytecodeLabels *param_5,int param_6)

{
  long lVar1;
  long *plVar2;
  undefined1 *local_60;
  long *local_58;
  long local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  long local_38;
  
  local_58 = (long *)&local_60;
  local_60 = (undefined1 *)&local_60;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_48 = *(undefined8 *)(this + 0x10);
  local_50 = 0;
  local_40 = 0;
  if (param_2 == '!') {
    VisitForTest(this,param_3,&local_60,param_5,0);
  }
  else if (param_2 == ' ') {
    local_60 = (undefined1 *)&local_60;
    local_58 = (long *)&local_60;
    VisitForTest(this,param_3,param_4,&local_60,1);
  }
  else {
    local_60 = (undefined1 *)&local_60;
    local_58 = (long *)&local_60;
    VisitForNullishTest(this,param_3,param_4,(BytecodeLabels *)&local_60,param_5);
  }
  BytecodeLabels::Bind((BytecodeLabels *)&local_60,(BytecodeArrayBuilder *)(this + 0x18));
  if ((param_6 != -1) && (*(long *)(this + 0x208) != 0)) {
    BytecodeArrayBuilder::IncBlockCounter
              (*(BytecodeArrayBuilder **)(*(long *)(this + 0x208) + 0x20),param_6);
  }
  if (local_50 != 0) {
    *(undefined8 *)(*local_58 + 8) = *(undefined8 *)(local_60 + 8);
    **(long **)(local_60 + 8) = *local_58;
    local_50 = 0;
    plVar2 = local_58;
    if ((undefined1 **)local_58 != &local_60) {
      do {
        plVar2 = (long *)plVar2[1];
      } while ((undefined1 **)plVar2 != &local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

