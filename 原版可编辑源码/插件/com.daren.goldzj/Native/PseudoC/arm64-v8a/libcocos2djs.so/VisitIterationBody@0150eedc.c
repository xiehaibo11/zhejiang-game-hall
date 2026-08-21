
/* v8::internal::interpreter::BytecodeGenerator::VisitIterationBody(v8::internal::IterationStatement*,
   v8::internal::interpreter::LoopBuilder*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitIterationBody
          (BytecodeGenerator *this,IterationStatement *param_1,LoopBuilder *param_2)

{
  ulong uVar1;
  AstNode *pAVar2;
  undefined **local_60;
  BytecodeGenerator *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  IterationStatement *local_40;
  LoopBuilder *pLStack_38;
  
  LoopBuilder::LoopBody(param_2);
  uStack_48 = *(undefined8 *)(this + 0x2f8);
  local_50 = *(undefined8 *)(this + 0x2f0);
  local_60 = &PTR__ControlScopeForIteration_01cc7090;
  *(undefined ****)(this + 0x2f0) = &local_60;
  *(int *)(this + 0x334) = *(int *)(this + 0x334) + 1;
  local_58 = this;
  local_40 = param_1;
  pLStack_38 = param_2;
  BytecodeArrayBuilder::StackCheck((BytecodeArrayBuilder *)(this + 0x18),*(int *)param_1);
  if (this[8] == (BytecodeGenerator)0x0) {
    pAVar2 = *(AstNode **)(param_1 + 0x18);
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar2);
    }
  }
  LoopBuilder::BindContinueTarget(param_2);
  *(int *)(local_58 + 0x334) = *(int *)(local_58 + 0x334) + -1;
  *(undefined8 *)(local_58 + 0x2f0) = local_50;
  return;
}

