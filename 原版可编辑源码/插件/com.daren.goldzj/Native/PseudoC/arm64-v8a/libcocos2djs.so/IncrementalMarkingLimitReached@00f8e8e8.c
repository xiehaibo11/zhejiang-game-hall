
/* v8::internal::Heap::IncrementalMarkingLimitReached() */

undefined4 __thiscall v8::internal::Heap::IncrementalMarkingLimitReached(Heap *this)

{
  Heap *pHVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  RandomNumberGenerator *this_00;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double local_68;
  
  uVar3 = IncrementalMarking::CanBeActivated(*(IncrementalMarking **)(this + 0x828));
  if (((uVar3 & 1) == 0) || (*(long *)(this + 0xb8) != 0)) {
LAB_00f8e928:
    uVar2 = 0;
  }
  else {
    if (FLAG_stress_incremental_marking == '\0') {
      uVar3 = IncrementalMarking::IsBelowActivationThresholds
                        (*(IncrementalMarking **)(this + 0x828));
      if ((uVar3 & 1) != 0) goto LAB_00f8e928;
      if (((FLAG_stress_compaction == '\0') || (((byte)this[0x1b4] & 1) == 0)) &&
         (*(int *)(this + 0xc0) == 0)) {
        if (0 < FLAG_stress_marking) {
          plVar4 = *(long **)(this + 0xf0);
          if (plVar4 == (long *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            iVar10 = 3;
LAB_00f8e9c4:
            do {
              lVar5 = (**(code **)(*plVar4 + 0x50))();
              lVar11 = lVar5 + lVar11;
              switch(iVar10) {
              case 0:
              case 1:
                goto switchD_00f8e9ec_caseD_0;
              case 2:
                plVar4 = *(long **)(this + 0xf0);
                iVar10 = iVar10 + 1;
                if (plVar4 == (long *)0x0) goto switchD_00f8e9ec_default;
                goto LAB_00f8e9c4;
              case 3:
                plVar4 = *(long **)(this + 0xf8);
                break;
              case 4:
                plVar4 = *(long **)(this + 0x100);
                break;
              default:
                goto switchD_00f8e9ec_default;
              }
              iVar10 = iVar10 + 1;
            } while (plVar4 != (long *)0x0);
          }
switchD_00f8e9ec_default:
          lVar6 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
          lVar12 = *(long *)(this + 0x890);
          plVar4 = *(long **)(this + 0xf0);
          lVar13 = *(long *)(this + -0x8830);
          lVar14 = *(long *)(this + -0x8820);
          lVar5 = 0;
          if (plVar4 != (long *)0x0) {
            iVar10 = 3;
LAB_00f8ea64:
            do {
              lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4);
              lVar5 = lVar7 + lVar5;
              switch(iVar10) {
              case 0:
              case 1:
                goto switchD_00f8e9ec_caseD_0;
              case 2:
                plVar4 = *(long **)(this + 0xf0);
                iVar10 = iVar10 + 1;
                if (plVar4 == (long *)0x0) goto switchD_00f8ea90_default;
                goto LAB_00f8ea64;
              case 3:
                plVar4 = *(long **)(this + 0xf8);
                break;
              case 4:
                plVar4 = *(long **)(this + 0x100);
                break;
              default:
                goto switchD_00f8ea90_default;
              }
              iVar10 = iVar10 + 1;
            } while (plVar4 != (long *)0x0);
          }
switchD_00f8ea90_default:
          dVar16 = (double)(ulong)((((lVar6 + lVar11) - lVar12) + lVar13) - lVar14);
          lVar6 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
          lVar11 = *(long *)(this + -0x8830) - *(long *)(this + -0x8820);
          if (lVar11 == 0 || *(long *)(this + -0x8830) < *(long *)(this + -0x8820)) {
            lVar11 = 0;
          }
          dVar15 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x5d0));
          dVar15 = (dVar16 - (double)(ulong)(lVar6 + lVar5 + lVar11)) + dVar15;
          if (0.0 < dVar15) {
            dVar16 = (dVar16 / dVar15) * 100.0;
            local_68 = dVar16;
            if (FLAG_trace_stress_marking != '\0') {
              Isolate::PrintWithTimestamp
                        ((char *)(this + -0x8850),dVar16,
                         "[IncrementalMarking] %.2lf%% of the memory limit reached\n");
            }
            if (FLAG_fuzzer_gc_analysis == '\0') {
              if (*(int *)(this + 0x188) <= (int)dVar16) {
                this_00 = (RandomNumberGenerator *)Isolate::fuzzer_rng((Isolate *)(this + -0x8850));
                uVar2 = base::RandomNumberGenerator::NextInt(this_00,FLAG_stress_marking + 1);
                *(undefined4 *)(this + 0x188) = uVar2;
                return 2;
              }
            }
            else if (dVar16 < 100.0) {
              pHVar1 = (Heap *)&local_68;
              if (dVar16 <= *(double *)(this + 0x1a8)) {
                pHVar1 = this + 0x1a8;
              }
              *(double *)(this + 0x1a8) = *(double *)pHVar1;
            }
          }
        }
        uVar3 = OldGenerationSpaceAvailable(this);
        uVar8 = GlobalMemoryAvailable(this);
        uVar9 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
        lVar11 = MemoryChunkLayout::AllocatableMemoryInDataPage();
        if (((uVar9 >> 0x12) * lVar11 < uVar3) &&
           (uVar9 = *(ulong *)(*(long *)(this + 0xe8) + 0x138),
           lVar11 = MemoryChunkLayout::AllocatableMemoryInDataPage(),
           (uVar9 >> 0x12) * lVar11 < uVar8)) goto LAB_00f8e928;
        if ((((FLAG_optimize_for_size == '\0') &&
             ((this[0x2e6c] == (Heap)0x0 && (this[0x2e6d] == (Heap)0x0)))) &&
            (*(int *)(this + 0xc0) == 0)) &&
           (uVar9 = CanExpandOldGeneration(this,*(ulong *)(this + 0x58) >> 3), (uVar9 & 1) != 0)) {
          if ((*(int *)(this + 0x2e00) == 3) &&
             (uVar9 = AllocationLimitOvershotByLargeMargin(this), (uVar9 & 1) == 0)) {
            plVar4 = (long *)V8::GetCurrentPlatform();
            dVar16 = (double)(**(code **)(*plVar4 + 0x78))();
            dVar15 = (double)Isolate::LoadStartTimeMs((Isolate *)(this + -0x8850));
            if (dVar16 * 1000.0 < dVar15 + 7000.0) goto LAB_00f8e928;
          }
          if (uVar3 != 0) {
            if (uVar8 != 0) {
              return 1;
            }
            return 2;
          }
        }
      }
    }
    uVar2 = 2;
  }
  return uVar2;
switchD_00f8e9ec_caseD_0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

