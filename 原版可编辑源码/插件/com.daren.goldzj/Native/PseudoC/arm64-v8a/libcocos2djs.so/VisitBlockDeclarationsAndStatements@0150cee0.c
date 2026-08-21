
/* v8::internal::interpreter::BytecodeGenerator::VisitBlockDeclarationsAndStatements(v8::internal::Block*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitBlockDeclarationsAndStatements
          (BytecodeGenerator *this,Block *param_1)

{
  int iVar1;
  int iVar2;
  BytecodeGenerator BVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  AstNode *pAVar7;
  long lVar8;
  undefined **local_d0;
  BytecodeGenerator *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  Block *local_b0;
  undefined8 *puStack_a8;
  undefined **local_a0;
  BytecodeGenerator *local_98;
  undefined8 **local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  Block *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puStack_a8 = &local_a0;
  local_98 = this + 0x18;
  local_90 = &local_90;
  uStack_60 = *(undefined8 *)(this + 0x208);
  uStack_78 = *(undefined8 *)(this + 0x18);
  local_70 = 0;
  local_a0 = &PTR__BreakableControlFlowBuilder_01cc7048;
  local_80 = 0;
  uStack_b8 = *(undefined8 *)(this + 0x2f8);
  local_c0 = *(undefined8 *)(this + 0x2f0);
  local_d0 = &PTR__ControlScope_01cc7068;
  *(undefined ****)(this + 0x2f0) = &local_d0;
  local_c8 = this;
  local_b0 = param_1;
  local_88 = local_90;
  local_68 = param_1;
  if (*(long *)(param_1 + 0x18) != 0) {
    VisitDeclarations(this,(ThreadedListBase *)(*(long *)(param_1 + 0x18) + 0x58));
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar8 = 0;
    do {
      iVar1 = *(int *)(this + 0x118);
      if (this[8] == (BytecodeGenerator)0x0) {
        pAVar7 = *(AstNode **)(*(long *)(param_1 + 8) + lVar8 * 8);
        uVar5 = GetCurrentStackPosition();
        if (uVar5 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar7);
        }
      }
      BVar3 = this[0x1b2];
      plVar6 = *(long **)(this + 0x120);
      iVar2 = *(int *)(this + 0x118);
      *(int *)(this + 0x118) = iVar1;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar2 - iVar1,iVar1));
      }
    } while ((BVar3 == (BytecodeGenerator)0x0) &&
            (lVar8 = lVar8 + 1, lVar8 < *(int *)(param_1 + 0x14)));
  }
  local_d0 = &PTR__ControlScope_01cc7020;
  *(undefined8 *)(local_c8 + 0x2f0) = local_c0;
  BreakableControlFlowBuilder::~BreakableControlFlowBuilder
            ((BreakableControlFlowBuilder *)&local_a0);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

