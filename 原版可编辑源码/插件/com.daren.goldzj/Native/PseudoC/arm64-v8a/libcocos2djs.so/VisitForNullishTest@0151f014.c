
/* v8::internal::interpreter::BytecodeGenerator::VisitForNullishTest(v8::internal::Expression*,
   v8::internal::interpreter::BytecodeLabels*, v8::internal::interpreter::BytecodeLabels*,
   v8::internal::interpreter::BytecodeLabels*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitForNullishTest
          (BytecodeGenerator *this,Expression *param_1,BytecodeLabels *param_2,
          BytecodeLabels *param_3,BytecodeLabels *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  BytecodeLabel *pBVar6;
  undefined8 uVar7;
  undefined8 local_78;
  BytecodeGenerator *pBStack_70;
  int local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_78 = *(undefined8 *)(this + 0x300);
  local_68 = *(int *)(this + 0x118);
  local_60 = 2;
  *(undefined8 **)(this + 0x300) = &local_78;
  pBStack_70 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar4 = GetCurrentStackPosition();
    if (uVar4 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,(AstNode *)param_1);
    }
  }
  iVar3 = local_60._4_4_;
  *(undefined8 *)(pBStack_70 + 0x300) = local_78;
  plVar5 = *(long **)(pBStack_70 + 0x120);
  iVar1 = *(int *)(pBStack_70 + 0x118);
  *(int *)(pBStack_70 + 0x118) = local_68;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - local_68,local_68));
  }
  if (iVar3 != 1) {
    pBVar6 = (BytecodeLabel *)BytecodeLabels::New(param_3);
    BytecodeArrayBuilder::JumpIfUndefinedOrNull((BytecodeArrayBuilder *)(this + 0x18),pBVar6);
  }
  uVar7 = BytecodeLabels::New(param_2);
  BytecodeArrayBuilder::JumpIfTrue((BytecodeArrayBuilder *)(this + 0x18),iVar3 == 1,uVar7);
  pBVar6 = (BytecodeLabel *)BytecodeLabels::New(param_4);
  BytecodeArrayBuilder::Jump((BytecodeArrayBuilder *)(this + 0x18),pBVar6);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

