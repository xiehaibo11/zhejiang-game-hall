
/* v8::internal::Heap::ShouldExpandOldGenerationOnSlowAllocation() */

uint __thiscall v8::internal::Heap::ShouldExpandOldGenerationOnSlowAllocation(Heap *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  double dVar6;
  double dVar7;
  
  if ((*(long *)(this + 0xb8) == 0) && (lVar3 = OldGenerationSpaceAvailable(this), lVar3 == 0)) {
    if ((FLAG_optimize_for_size != '\0') ||
       ((((this[0x2e6c] != (Heap)0x0 || (this[0x2e6d] != (Heap)0x0)) || (*(int *)(this + 0xc0) != 0)
         ) || (uVar4 = CanExpandOldGeneration(this,*(ulong *)(this + 0x58) >> 3), (uVar4 & 1) == 0))
       )) {
LAB_00f96ec4:
      uVar1 = 0;
      goto LAB_00f96dc0;
    }
    if ((*(int *)(this + 0x2e00) == 3) &&
       (uVar4 = AllocationLimitOvershotByLargeMargin(this), (uVar4 & 1) == 0)) {
      plVar5 = (long *)V8::GetCurrentPlatform();
      dVar6 = (double)(**(code **)(*plVar5 + 0x78))();
      dVar7 = (double)Isolate::LoadStartTimeMs((Isolate *)(this + -0x8850));
      if (dVar6 * 1000.0 < dVar7 + 7000.0) goto LAB_00f96dbc;
    }
    iVar2 = *(int *)(*(long *)(this + 0x828) + 0x58);
    if (iVar2 < 2) {
      if ((iVar2 == 0) && (iVar2 = IncrementalMarkingLimitReached(this), iVar2 == 0))
      goto LAB_00f96ec4;
    }
    else if (*(int *)(*(long *)(this + 0x828) + 100) - 1U < 2) {
      uVar1 = AllocationLimitOvershotByLargeMargin(this);
      uVar1 = uVar1 ^ 1;
      goto LAB_00f96dc0;
    }
  }
LAB_00f96dbc:
  uVar1 = 1;
LAB_00f96dc0:
  return uVar1 & 1;
}

