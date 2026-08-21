
/* v8::internal::interpreter::BytecodeGenerator::VisitLiteralAccessor(v8::internal::interpreter::Register,
   v8::internal::LiteralProperty*, v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitLiteralAccessor
          (BytecodeGenerator *this,undefined4 param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  BytecodeArrayBuilder *pBVar5;
  long *plVar6;
  undefined8 uVar7;
  AstNode *pAVar8;
  undefined8 local_68;
  BytecodeGenerator *pBStack_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 == 0) {
    pBVar5 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::LoadNull((BytecodeArrayBuilder *)(this + 0x18));
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar5,param_4);
  }
  else {
    local_68 = *(undefined8 *)(this + 0x300);
    pAVar8 = *(AstNode **)(param_3 + 8);
    local_58 = *(int *)(this + 0x118);
    local_50 = 2;
    *(undefined8 **)(this + 0x300) = &local_68;
    pBStack_60 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar8);
      }
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),param_4);
    *(undefined8 *)(pBStack_60 + 0x300) = local_68;
    plVar6 = *(long **)(pBStack_60 + 0x120);
    iVar1 = *(int *)(pBStack_60 + 0x118);
    *(int *)(pBStack_60 + 0x118) = local_58;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - local_58,local_58));
    }
    uVar4 = FunctionLiteral::NeedsHomeObject(*(Expression **)(param_3 + 8));
    if ((uVar4 & 1) != 0) {
      uVar3 = 2;
      if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
        uVar3 = 0xb;
      }
      uVar3 = FeedbackVectorSpec::AddSlot
                        ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar3);
      uVar7 = BytecodeArrayBuilder::LoadAccumulatorWithRegister
                        ((BytecodeArrayBuilder *)(this + 0x18),param_2);
      BytecodeArrayBuilder::StoreHomeObjectProperty
                (uVar7,param_4,uVar3,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

