
/* v8::internal::compiler::LiveRangeBuilder::IntervalPredecessorsCoveredByRange(v8::internal::compiler::UseInterval
   const*, v8::internal::compiler::TopLevelLiveRange const*) const */

undefined8 __thiscall
v8::internal::compiler::LiveRangeBuilder::IntervalPredecessorsCoveredByRange
          (LiveRangeBuilder *this,UseInterval *param_1,TopLevelLiveRange *param_2)

{
  TopLevelLiveRange *pTVar1;
  TopLevelLiveRange *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  uint *puVar9;
  uint uVar11;
  TopLevelLiveRange *pTVar10;
  
  iVar4 = *(int *)param_1;
  iVar5 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  lVar6 = InstructionSequence::GetInstructionBlock
                    (*(InstructionSequence **)(*(long *)this + 0x10),iVar5 >> 2);
  piVar7 = *(int **)(lVar6 + 0x20);
  piVar3 = *(int **)(lVar6 + 0x28);
  if (piVar7 == piVar3) {
    return 1;
  }
  pTVar1 = param_2 + 0x10;
  pTVar2 = param_2 + 0x30;
LAB_0165cccc:
  plVar8 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
  lVar6 = *plVar8;
  if ((ulong)(plVar8[1] - lVar6 >> 3) <= (ulong)(long)*piVar7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (((*(int **)pTVar1 != (int *)0x0) &&
      (iVar5 = *(int *)(*(long *)(lVar6 + (long)*piVar7 * 8) + 0x74) * 4 + -1,
      **(int **)pTVar1 <= iVar5)) && (iVar5 < *(int *)(*(long *)(param_2 + 8) + 4))) {
    pTVar10 = pTVar1;
    if ((*(int **)pTVar2 != (int *)0x0) && (pTVar10 = pTVar2, iVar5 < **(int **)pTVar2)) {
      *(undefined8 *)pTVar2 = 0;
      pTVar10 = pTVar1;
    }
    puVar9 = *(uint **)pTVar10;
    if (puVar9 != (uint *)0x0) {
      do {
        uVar11 = *puVar9;
        if ((int)uVar11 <= iVar5) {
          if (*(int **)pTVar2 == (int *)0x0) {
            if (uVar11 < 0x80000000) goto LAB_0165cd6c;
          }
          else if (**(int **)pTVar2 < (int)uVar11) {
LAB_0165cd6c:
            *(uint **)pTVar2 = puVar9;
            uVar11 = *puVar9;
          }
        }
        if (iVar5 < (int)uVar11) {
          return 0;
        }
        if (iVar5 < (int)puVar9[1]) goto LAB_0165cda4;
        puVar9 = *(uint **)(puVar9 + 2);
        if (puVar9 == (uint *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
LAB_0165cda4:
  piVar7 = piVar7 + 1;
  if (piVar7 == piVar3) {
    return 1;
  }
  goto LAB_0165cccc;
}

