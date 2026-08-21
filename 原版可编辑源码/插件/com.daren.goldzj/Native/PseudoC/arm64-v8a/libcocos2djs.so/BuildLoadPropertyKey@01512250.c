
/* v8::internal::interpreter::BytecodeGenerator::BuildLoadPropertyKey(v8::internal::LiteralProperty*,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildLoadPropertyKey
          (BytecodeGenerator *this,ulong *param_1,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  BytecodeArrayBuilder *pBVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = Expression::IsStringLiteral((Expression *)(*param_1 & 0xfffffffffffffffc));
  if ((uVar3 & 1) == 0) {
    local_58 = *(undefined8 *)(this + 0x300);
    uVar3 = *param_1;
    local_48 = *(int *)(this + 0x118);
    local_40 = 2;
    *(undefined8 **)(this + 0x300) = &local_58;
    pBStack_50 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar5 = GetCurrentStackPosition();
      if (uVar5 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,(AstNode *)(uVar3 & 0xfffffffffffffffc));
      }
    }
    *(undefined8 *)(pBStack_50 + 0x300) = local_58;
    plVar6 = *(long **)(pBStack_50 + 0x120);
    iVar1 = *(int *)(pBStack_50 + 0x118);
    *(int *)(pBStack_50 + 0x118) = local_48;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - local_48,local_48));
    }
    BytecodeArrayBuilder::ToName((BytecodeArrayBuilder *)(this + 0x18),param_3);
  }
  else {
    uVar3 = *param_1 & 0xfffffffffffffffc;
    if ((*(uint *)(uVar3 + 4) & 0x3f) != 0x29) {
      uVar3 = 0;
    }
    pBVar4 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::LoadLiteral
                       ((BytecodeArrayBuilder *)(this + 0x18),*(AstRawString **)(uVar3 + 8));
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar4,param_3);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

