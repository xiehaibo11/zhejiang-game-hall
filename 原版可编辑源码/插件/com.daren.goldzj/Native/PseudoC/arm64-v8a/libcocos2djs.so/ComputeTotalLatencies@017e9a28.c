
/* v8::internal::compiler::InstructionScheduler::ComputeTotalLatencies() */

void __thiscall
v8::internal::compiler::InstructionScheduler::ComputeTotalLatencies(InstructionScheduler *this)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  
  plVar3 = *(long **)(this + 0x10);
  plVar5 = *(long **)(this + 0x18);
  do {
    if (plVar5 == plVar3) {
      return;
    }
    plVar5 = plVar5 + -1;
    lVar6 = *plVar5;
    uVar8 = *(ulong *)(lVar6 + 0x38);
    lVar4 = *(long *)(lVar6 + 0x10);
    plVar7 = (long *)(lVar4 + (uVar8 >> 6 & 0x3fffffffffffff8));
    if (*(long *)(lVar6 + 0x18) == lVar4) {
LAB_017e9a38:
      iVar11 = 0;
    }
    else {
      uVar1 = *(long *)(lVar6 + 0x40) + uVar8;
      plVar9 = (long *)(*plVar7 + (uVar8 & 0x1ff) * 8);
      plVar2 = (long *)(*(long *)(lVar4 + (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
      if (plVar9 == plVar2) goto LAB_017e9a38;
      iVar12 = 0;
      do {
        plVar10 = plVar9 + 1;
        iVar11 = *(int *)(*plVar9 + 0x60);
        if (*(int *)(*plVar9 + 0x60) <= iVar12) {
          iVar11 = iVar12;
        }
        if ((long)plVar10 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          plVar10 = (long *)*plVar7;
        }
        plVar9 = plVar10;
        iVar12 = iVar11;
      } while (plVar10 != plVar2);
    }
    *(int *)(lVar6 + 0x60) = *(int *)(lVar6 + 0x5c) + iVar11;
  } while( true );
}

