
/* v8::internal::Heap::ConfigureInitialOldGenerationSize() */

void __thiscall v8::internal::Heap::ConfigureInitialOldGenerationSize(Heap *this)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  if ((this[0x88] == (Heap)0x0) &&
     (uVar2 = GCTracer::SurvivalEventsRecorded(*(GCTracer **)(this + 0x7f8)), (uVar2 & 1) != 0)) {
    uVar1 = 2;
    if ((((byte)this[0xad4] & 1) == 0) && (FLAG_stress_compaction == '\0')) {
      if ((((FLAG_optimize_for_size == '\0') && (this[0x2e6c] == (Heap)0x0)) &&
          (this[0x2e6d] == (Heap)0x0)) &&
         ((*(int *)(this + 0xc0) == 0 &&
          (uVar2 = CanExpandOldGeneration(this,*(ulong *)(this + 0x58) >> 3), (uVar2 & 1) != 0)))) {
        uVar1 = 3;
        if ((*(int *)(*(long *)(this + 0x848) + 0x18) == 0) &&
           (uVar1 = 0, *(int *)(*(long *)(this + 0x848) + 0x1c) < 1)) {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    lVar3 = MemoryController<v8::internal::V8HeapTrait>::MinimumAllocationLimitGrowingStep(uVar1);
    plVar5 = *(long **)(this + 0xf0);
    lVar8 = 0;
    if (plVar5 != (long *)0x0) {
      iVar9 = 3;
LAB_00f90b00:
      do {
        lVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
        lVar8 = lVar4 + lVar8;
        switch(iVar9) {
        case 0:
        case 1:
          goto switchD_00f90b2c_caseD_0;
        case 2:
          plVar5 = *(long **)(this + 0xf0);
          iVar9 = iVar9 + 1;
          if (plVar5 == (long *)0x0) goto switchD_00f90b2c_default;
          goto LAB_00f90b00;
        case 3:
          plVar5 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar5 = *(long **)(this + 0x100);
          break;
        default:
          goto switchD_00f90b2c_default;
        }
        iVar9 = iVar9 + 1;
      } while (plVar5 != (long *)0x0);
    }
switchD_00f90b2c_default:
    lVar4 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    uVar2 = lVar8 + lVar3 + lVar4;
    dVar11 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x5d0));
    dVar10 = (double)GCTracer::AverageSurvivalRatio(*(GCTracer **)(this + 0x7f8));
    uVar6 = (ulong)((dVar10 / 100.0) * dVar11);
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    if (uVar6 < *(ulong *)(this + 0x5d0)) {
      *(ulong *)(this + 0x5d0) = uVar6;
    }
    else {
      this[0x88] = (Heap)0x1;
    }
    if ((FLAG_global_gc_scheduling != '\0') && (*(long *)(this + 0x870) != 0)) {
      plVar5 = *(long **)(this + 0xf0);
      if (plVar5 == (long *)0x0) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        iVar9 = 3;
LAB_00f90bf0:
        do {
          lVar4 = (**(code **)(*plVar5 + 0x50))();
          lVar8 = lVar4 + lVar8;
          switch(iVar9) {
          case 0:
          case 1:
            goto switchD_00f90b2c_caseD_0;
          case 2:
            plVar5 = *(long **)(this + 0xf0);
            iVar9 = iVar9 + 1;
            if (plVar5 == (long *)0x0) goto switchD_00f90c18_default;
            goto LAB_00f90bf0;
          case 3:
            plVar5 = *(long **)(this + 0xf8);
            break;
          case 4:
            plVar5 = *(long **)(this + 0x100);
            break;
          default:
            goto switchD_00f90c18_default;
          }
          iVar9 = iVar9 + 1;
        } while (plVar5 != (long *)0x0);
      }
switchD_00f90c18_default:
      lVar4 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
      if (*(long *)(this + 0x870) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(*(long *)(this + 0x870) + 0x20);
      }
      uVar2 = lVar8 + lVar3 + lVar4 + lVar7;
      dVar11 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x5d8));
      dVar10 = (double)GCTracer::AverageSurvivalRatio(*(GCTracer **)(this + 0x7f8));
      uVar6 = (ulong)((dVar10 / 100.0) * dVar11);
      if (uVar6 <= uVar2) {
        uVar6 = uVar2;
      }
      if (uVar6 < *(ulong *)(this + 0x5d8)) {
        *(ulong *)(this + 0x5d8) = uVar6;
      }
    }
  }
  return;
switchD_00f90b2c_caseD_0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

