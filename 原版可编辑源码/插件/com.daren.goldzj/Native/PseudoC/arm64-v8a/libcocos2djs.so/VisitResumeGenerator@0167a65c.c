
/* v8::internal::compiler::BytecodeGraphBuilder::VisitResumeGenerator() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitResumeGenerator(BytecodeGraphBuilder *this)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  Node *pNVar4;
  long lVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  Environment *pEVar11;
  ulong uVar12;
  undefined1 local_50 [16];
  
  pEVar11 = *(Environment **)(this + 0xa8);
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pNVar4 = (Node *)Environment::LookupRegister(pEVar11,uVar2);
  iVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 == first_reg.index()");
  }
  lVar5 = BytecodeAnalysis::GetOutLivenessFor
                    (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
  local_50._8_8_ = *(undefined8 *)(this + 0x30);
  local_50._0_8_ = *(undefined8 *)(this + 0x28);
  local_50 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_50);
  iVar3 = BytecodeArrayRef::parameter_count((BytecodeArrayRef *)local_50);
  lVar8 = *(long *)(this + 0xa8);
  if (*(int *)(lVar8 + 8) < 1) {
LAB_0167a790:
    pOVar6 = (Operator *)
             JSOperatorBuilder::GeneratorRestoreInputOrDebugPos
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    local_50._0_8_ = pNVar4;
    uVar7 = MakeNode(this,pOVar6,1,(Node **)local_50,false);
    lVar5 = *(long *)(this + 0xa8);
    if ((ulong)(long)*(int *)(lVar5 + 0x5c) <
        (ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 3)) {
      *(undefined8 *)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x5c) * 8) = uVar7;
      return;
    }
  }
  else {
    uVar12 = 0;
    if (lVar5 != 0) goto LAB_0167a710;
LAB_0167a738:
    pOVar6 = (Operator *)
             JSOperatorBuilder::GeneratorRestoreRegister
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                        iVar3 + -1 + (int)uVar12);
    local_50._0_8_ = pNVar4;
    uVar7 = MakeNode(this,pOVar6,1,(Node **)local_50,false);
    lVar8 = *(long *)(this + 0xa8);
    uVar10 = (ulong)((int)uVar12 + *(int *)(lVar8 + 0x58));
    if (uVar10 < (ulong)(*(long *)(lVar8 + 0x30) - *(long *)(lVar8 + 0x28) >> 3)) {
      *(undefined8 *)(*(long *)(lVar8 + 0x28) + uVar10 * 8) = uVar7;
      lVar8 = *(long *)(this + 0xa8);
      do {
        uVar1 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar1;
        if (*(int *)(lVar8 + 8) <= (int)uVar1) goto LAB_0167a790;
        if (lVar5 == 0) break;
LAB_0167a710:
        puVar9 = (ulong *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0xc) != 1) {
          puVar9 = (ulong *)(*(ulong *)(lVar5 + 0x10) + (uVar12 >> 6) * 8);
        }
      } while ((*puVar9 >> (uVar12 & 0x3f) & 1) == 0);
      goto LAB_0167a738;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

