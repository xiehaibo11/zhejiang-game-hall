
/* v8::internal::compiler::LinearScanAllocator::TryReuseSpillForPhi(v8::internal::compiler::TopLevelLiveRange*)
    */

undefined8 __thiscall
v8::internal::compiler::LinearScanAllocator::TryReuseSpillForPhi
          (LinearScanAllocator *this,TopLevelLiveRange *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  RegisterAllocationData *this_00;
  long lVar5;
  RegisterAllocationData *pRVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  RegisterAllocationData *pRVar10;
  RegisterAllocationData *pRVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  if (((byte)param_1[4] >> 3 & 1) == 0) {
    return 0;
  }
  this_00 = *(RegisterAllocationData **)this;
  lVar12 = *(long *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0x5c);
  pRVar6 = this_00 + 0x30;
  pRVar11 = *(RegisterAllocationData **)pRVar6;
  pRVar10 = pRVar6;
  if (pRVar11 != (RegisterAllocationData *)0x0) {
    do {
      if (iVar2 <= *(int *)(pRVar11 + 0x20)) {
        pRVar10 = pRVar11;
      }
      pRVar11 = *(RegisterAllocationData **)
                 (pRVar11 + (ulong)(*(int *)(pRVar11 + 0x20) < iVar2) * 8);
    } while (pRVar11 != (RegisterAllocationData *)0x0);
    if ((pRVar10 != pRVar6) && (*(int *)(pRVar10 + 0x20) <= iVar2)) goto LAB_01662658;
  }
  pRVar10 = pRVar6;
LAB_01662658:
  lVar14 = **(long **)(pRVar10 + 0x28);
  lVar5 = *(long *)(lVar14 + 0x10);
  if (*(long *)(lVar14 + 0x18) != lVar5) {
    lVar15 = (*(long **)(pRVar10 + 0x28))[1];
    lVar13 = 0;
    uVar16 = 0;
    do {
      lVar5 = RegisterAllocationData::GetOrCreateLiveRangeFor(this_00,*(int *)(lVar5 + uVar16 * 4));
      if ((*(byte *)(*(long *)(lVar5 + 0x20) + 4) >> 6 & 1) != 0) {
        plVar8 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
        lVar1 = *plVar8;
        uVar7 = (ulong)*(int *)(*(long *)(lVar15 + 0x20) + uVar16 * 4);
        if ((ulong)(plVar8[1] - lVar1 >> 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar5 != 0) {
          iVar2 = *(int *)(*(long *)(lVar1 + uVar7 * 8) + 0x74) * 4 + -2;
          piVar9 = *(int **)(lVar5 + 0x10);
          if (piVar9 != (int *)0x0) goto LAB_016626e8;
          do {
            do {
              lVar5 = *(long *)(lVar5 + 0x28);
              if (lVar5 == 0) goto LAB_01662718;
              piVar9 = *(int **)(lVar5 + 0x10);
            } while (piVar9 == (int *)0x0);
LAB_016626e8:
          } while ((iVar2 < *piVar9) || (*(int *)(*(long *)(lVar5 + 8) + 4) <= iVar2));
          if (((*(byte *)(lVar5 + 4) & 1) != 0) && (*(long *)(lVar5 + 0x50) == lVar12)) {
            lVar13 = lVar13 + 1;
          }
        }
      }
LAB_01662718:
      lVar5 = *(long *)(lVar14 + 0x10);
      uVar16 = uVar16 + 1;
      uVar7 = *(long *)(lVar14 + 0x18) - lVar5 >> 2;
      if (uVar7 <= uVar16) goto LAB_01662738;
      this_00 = *(RegisterAllocationData **)this;
    } while( true );
  }
  lVar13 = 0;
  uVar7 = 0;
LAB_01662738:
  if ((ulong)(lVar13 << 1) <= uVar7) {
    return 0;
  }
  lVar12 = *(long *)(param_1 + 0x38);
  uVar3 = **(uint **)(param_1 + 0x10);
  uVar4 = uVar3 + 2 & 0xfffffffe;
  if ((uVar3 & 2) != 0) {
    uVar4 = uVar3;
  }
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x18) <= (int)uVar4)) goto LAB_01662774;
  lVar12 = *(long *)(param_1 + 0x18);
  do {
    if (lVar12 == 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB_016627a4:
      RegisterAllocator::Spill((RegisterAllocator *)this,param_1,0);
      return 1;
    }
LAB_01662774:
    if ((int)uVar4 <= *(int *)(lVar12 + 0x18)) {
      *(long *)(param_1 + 0x38) = lVar12;
      do {
        if ((*(byte *)(lVar12 + 0x1c) >> 5 & 1) != 0) {
          uVar4 = **(uint **)(param_1 + 0x10);
          if ((int)(uVar4 + 2 & 0xfffffffe) < *(int *)(lVar12 + 0x18)) {
            SpillBetweenUntil(this,param_1,uVar4,uVar4,*(int *)(lVar12 + 0x18),0);
            return 1;
          }
          return 0;
        }
        lVar12 = *(long *)(lVar12 + 0x10);
      } while (lVar12 != 0);
      goto LAB_016627a4;
    }
    lVar12 = *(long *)(lVar12 + 0x10);
  } while( true );
}

