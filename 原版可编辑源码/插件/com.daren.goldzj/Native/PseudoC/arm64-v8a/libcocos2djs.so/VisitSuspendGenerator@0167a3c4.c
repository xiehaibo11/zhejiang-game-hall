
/* v8::internal::compiler::BytecodeGraphBuilder::VisitSuspendGenerator() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitSuspendGenerator(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  long lVar10;
  Operator *pOVar11;
  BytecodeLivenessState *pBVar12;
  Node **ppNVar13;
  ulong uVar14;
  Zone *this_01;
  ulong *puVar15;
  Environment *pEVar16;
  JSGraph *this_02;
  uint uVar17;
  uint uVar18;
  long lVar19;
  Node **ppNVar20;
  uint uVar21;
  undefined1 local_70 [16];
  
  pEVar16 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar7 = (Node *)Environment::LookupRegister(pEVar16,uVar3);
  iVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 == first_reg.index()");
  }
  uVar5 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand(this_00,2);
  local_70._8_8_ = *(undefined8 *)(this + 0x30);
  local_70._0_8_ = *(undefined8 *)(this + 0x28);
  local_70 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_70);
  iVar4 = BytecodeArrayRef::parameter_count((BytecodeArrayRef *)local_70);
  this_02 = *(JSGraph **)(this + 0x10);
  uVar2 = iVar4 - 1;
  iVar6 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand(this_00,3);
  pNVar8 = (Node *)JSGraph::Constant(this_02,(double)iVar6);
  pNVar9 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),
                                     (double)(*(int *)(this + 0x90) + 0x21));
  lVar10 = BytecodeAnalysis::GetInLivenessFor
                     (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
  this_01 = *(Zone **)(this + 8);
  uVar18 = uVar5 + iVar4 + 2;
  uVar14 = -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3;
  ppNVar13 = *(Node ***)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)ppNVar13) < uVar14) {
    ppNVar13 = (Node **)Zone::NewExpand(this_01,uVar14);
  }
  else {
    *(ulong *)(this_01 + 0x10) = (long)ppNVar13 + uVar14;
  }
  *ppNVar13 = pNVar7;
  ppNVar13[1] = pNVar8;
  ppNVar13[2] = pNVar9;
  if ((int)uVar2 < 1) {
    uVar18 = 0;
  }
  else {
    uVar14 = 0;
    do {
      pEVar16 = *(Environment **)(this + 0xa8);
      uVar3 = interpreter::Register::FromParameterIndex((int)uVar14,uVar2);
      pNVar7 = (Node *)Environment::LookupRegister(pEVar16,uVar3);
      uVar1 = uVar14 + 1;
      ppNVar13[uVar14 + 3] = pNVar7;
      uVar14 = uVar1;
      uVar18 = uVar2;
    } while (uVar2 != uVar1);
  }
  if ((int)uVar5 < 1) {
LAB_0167a5d8:
    pOVar11 = (Operator *)
              JSOperatorBuilder::GeneratorStore
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar18);
    MakeNode(this,pOVar11,uVar18 + 3,ppNVar13,false);
    pBVar12 = (BytecodeLivenessState *)
              BytecodeAnalysis::GetInLivenessFor
                        (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
    BuildReturn(this,pBVar12);
    return;
  }
  uVar14 = 0;
  uVar21 = uVar2;
  if (lVar10 != 0) goto LAB_0167a578;
  do {
    uVar17 = uVar18;
    if ((int)uVar18 < (int)(uVar2 + (int)uVar14)) {
      lVar19 = (long)(int)uVar21 - (long)(int)uVar18;
      ppNVar20 = ppNVar13 + (long)(int)uVar18 + 3;
      do {
        pNVar7 = (Node *)JSGraph::OptimizedOutConstant(*(JSGraph **)(this + 0x10));
        lVar19 = lVar19 + -1;
        *ppNVar20 = pNVar7;
        ppNVar20 = ppNVar20 + 1;
        uVar17 = uVar21;
      } while (lVar19 != 0);
    }
    pNVar7 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),uVar14);
    uVar18 = uVar17 + 1;
    ppNVar13[(int)(uVar17 + 3)] = pNVar7;
    do {
      uVar14 = uVar14 + 1;
      uVar21 = uVar21 + 1;
      if (uVar14 == uVar5) goto LAB_0167a5d8;
      if (lVar10 == 0) break;
LAB_0167a578:
      puVar15 = (ulong *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0xc) != 1) {
        puVar15 = (ulong *)(*(ulong *)(lVar10 + 0x10) + (uVar14 >> 6 & 0x3ffffff) * 8);
      }
    } while ((*puVar15 >> (uVar14 & 0x3f) & 1) == 0);
  } while( true );
}

