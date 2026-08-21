
/* v8::internal::Heap::RecomputeLimits(v8::internal::GarbageCollector) */

void __thiscall v8::internal::Heap::RecomputeLimits(Heap *this,int param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (param_2 != 1) {
    dVar15 = 0.0;
    dVar11 = (double)GCTracer::NewSpaceAllocationThroughputInBytesPerMillisecond
                               (*(GCTracer **)(this + 0x7f8),0.0);
    dVar12 = (double)GCTracer::ScavengeSpeedInBytesPerMillisecond(*(GCTracer **)(this + 0x7f8),1);
    if (dVar11 != 0.0) {
      dVar15 = 200000.0;
      if (dVar12 != 0.0) {
        dVar15 = dVar12;
      }
      dVar15 = dVar15 / (dVar11 + dVar15);
    }
    if (FLAG_trace_mutator_utilization != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(this + -0x8850),dVar15,dVar11,
                 "%s mutator utilization = %.3f (mutator_speed=%.f, gc_speed=%.f)\n",
                 "Young generation");
    }
    if (dVar15 <= 0.993) {
      return;
    }
    if (this[0x88] == (Heap)0x0) {
      return;
    }
  }
  dVar15 = (double)GCTracer::CombinedMarkCompactSpeedInBytesPerMillisecond
                             (*(GCTracer **)(this + 0x7f8));
  dVar11 = (double)GCTracer::CurrentOldGenerationAllocationThroughputInBytesPerMillisecond
                             (*(GCTracer **)(this + 0x7f8));
  dVar11 = (double)MemoryController<v8::internal::V8HeapTrait>::GrowingFactor
                             (this,*(ulong *)(this + 0x58),dVar15,dVar11);
  dVar15 = 0.0;
  if ((FLAG_global_gc_scheduling != '\0') && (*(long *)(this + 0x870) != 0)) {
    dVar12 = (double)GCTracer::EmbedderSpeedInBytesPerMillisecond(*(GCTracer **)(this + 0x7f8));
    dVar13 = (double)GCTracer::CurrentEmbedderAllocationThroughputInBytesPerMillisecond
                               (*(GCTracer **)(this + 0x7f8));
    dVar15 = 0.0;
    if ((0.0 < dVar12) && (0.0 < dVar13)) {
      dVar15 = (double)MemoryController<v8::internal::GlobalMemoryTrait>::GrowingFactor
                                 (this,*(ulong *)(this + 0x68),dVar12,dVar13);
    }
    if (dVar15 <= dVar11) {
      dVar15 = dVar11;
    }
  }
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    iVar9 = 3;
LAB_00f90f3c:
    do {
      lVar2 = (**(code **)(*plVar1 + 0x50))();
      lVar8 = lVar2 + lVar8;
      switch(iVar9) {
      case 0:
      case 1:
        goto switchD_00f90f64_caseD_0;
      case 2:
        plVar1 = *(long **)(this + 0xf0);
        iVar9 = iVar9 + 1;
        if (plVar1 == (long *)0x0) goto switchD_00f90f64_default;
        goto LAB_00f90f3c;
      case 3:
        plVar1 = *(long **)(this + 0xf8);
        break;
      case 4:
        plVar1 = *(long **)(this + 0x100);
        break;
      default:
        goto switchD_00f90f64_default;
      }
      iVar9 = iVar9 + 1;
    } while (plVar1 != (long *)0x0);
  }
switchD_00f90f64_default:
  lVar2 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
  uVar3 = lVar2 + lVar8;
  uVar7 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
  lVar8 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  lVar8 = (uVar7 >> 0x12) * lVar8;
  uVar10 = 2;
  if ((((byte)this[0xad4] & 1) == 0) && (FLAG_stress_compaction == '\0')) {
    if ((FLAG_optimize_for_size == '\0') &&
       (((this[0x2e6c] == (Heap)0x0 && (this[0x2e6d] == (Heap)0x0)) && (*(int *)(this + 0xc0) == 0))
       )) {
      uVar7 = CanExpandOldGeneration(this,*(ulong *)(this + 0x58) >> 3);
      if ((uVar7 & 1) == 0) {
        uVar10 = 1;
      }
      else {
        uVar10 = 3;
        if ((*(int *)(*(long *)(this + 0x848) + 0x18) == 0) &&
           (uVar10 = 0, *(int *)(*(long *)(this + 0x848) + 0x1c) < 1)) {
          uVar10 = 3;
        }
      }
    }
    else {
      uVar10 = 1;
    }
  }
  if (param_2 == 1) {
    *(long *)(this + -0x8820) = *(long *)(this + -0x8830);
    *(long *)(this + -0x8828) = *(long *)(this + -0x8830) + 0x4000000;
    uVar6 = MemoryController<v8::internal::V8HeapTrait>::CalculateAllocationLimit
                      (dVar11,this,uVar3,*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58),
                       lVar8,uVar10);
    *(undefined8 *)(this + 0x5d0) = uVar6;
    if ((FLAG_global_gc_scheduling != '\0') && (*(long *)(this + 0x870) != 0)) {
      plVar1 = *(long **)(this + 0xf0);
      if (plVar1 == (long *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        iVar9 = 3;
LAB_00f91270:
        do {
          lVar4 = (**(code **)(*plVar1 + 0x50))();
          lVar2 = lVar4 + lVar2;
          switch(iVar9) {
          case 0:
          case 1:
            goto switchD_00f90f64_caseD_0;
          case 2:
            plVar1 = *(long **)(this + 0xf0);
            iVar9 = iVar9 + 1;
            if (plVar1 == (long *)0x0) goto switchD_00f91298_default;
            goto LAB_00f91270;
          case 3:
            plVar1 = *(long **)(this + 0xf8);
            break;
          case 4:
            plVar1 = *(long **)(this + 0x100);
            break;
          default:
            goto switchD_00f91298_default;
          }
          iVar9 = iVar9 + 1;
        } while (plVar1 != (long *)0x0);
      }
switchD_00f91298_default:
      lVar5 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
      lVar4 = 0;
      if (*(long *)(this + 0x870) != 0) {
        lVar4 = *(long *)(*(long *)(this + 0x870) + 0x20);
      }
      uVar6 = MemoryController<v8::internal::GlobalMemoryTrait>::CalculateAllocationLimit
                        (dVar15,this,lVar5 + lVar2 + lVar4,*(undefined8 *)(this + 0x60),
                         *(undefined8 *)(this + 0x68),lVar8,uVar10);
      *(undefined8 *)(this + 0x5d8) = uVar6;
    }
    dVar15 = (double)GCTracer::AverageMarkCompactMutatorUtilization(*(GCTracer **)(this + 0x7f8));
    if (FLAG_detect_ineffective_gcs_near_heap_limit != '\0') {
      if ((dVar15 < 0.4) &&
         (dVar15 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x58)), dVar15 * 0.8 <= (double)uVar3))
      {
        iVar9 = *(int *)(this + 0x1b8);
        *(int *)(this + 0x1b8) = iVar9 + 1;
        if (iVar9 + 1 != 4) {
          return;
        }
        uVar3 = InvokeNearHeapLimitCallback(this);
        if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FatalProcessOutOfMemory(this,"Ineffective mark-compacts near heap limit");
        }
      }
      *(undefined4 *)(this + 0x1b8) = 0;
    }
  }
  else {
    dVar12 = 0.0;
    dVar13 = (double)GCTracer::NewSpaceAllocationThroughputInBytesPerMillisecond
                               (*(GCTracer **)(this + 0x7f8),0.0);
    dVar14 = (double)GCTracer::ScavengeSpeedInBytesPerMillisecond(*(GCTracer **)(this + 0x7f8),1);
    if (dVar13 != 0.0) {
      dVar12 = 200000.0;
      if (dVar14 != 0.0) {
        dVar12 = dVar14;
      }
      dVar12 = dVar12 / (dVar13 + dVar12);
    }
    if (FLAG_trace_mutator_utilization != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(this + -0x8850),dVar12,dVar13,
                 "%s mutator utilization = %.3f (mutator_speed=%.f, gc_speed=%.f)\n",
                 "Young generation");
    }
    if ((0.993 < dVar12) && (this[0x88] != (Heap)0x0)) {
      uVar3 = MemoryController<v8::internal::V8HeapTrait>::CalculateAllocationLimit
                        (dVar11,this,uVar3,*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58)
                         ,lVar8,uVar10);
      if (uVar3 < *(ulong *)(this + 0x5d0)) {
        *(ulong *)(this + 0x5d0) = uVar3;
      }
      if ((FLAG_global_gc_scheduling != '\0') && (*(long *)(this + 0x870) != 0)) {
        plVar1 = *(long **)(this + 0xf0);
        if (plVar1 == (long *)0x0) {
          lVar2 = 0;
        }
        else {
          lVar2 = 0;
          iVar9 = 3;
LAB_00f91114:
          do {
            lVar4 = (**(code **)(*plVar1 + 0x50))();
            lVar2 = lVar4 + lVar2;
            switch(iVar9) {
            case 0:
            case 1:
              goto switchD_00f90f64_caseD_0;
            case 2:
              plVar1 = *(long **)(this + 0xf0);
              iVar9 = iVar9 + 1;
              if (plVar1 == (long *)0x0) goto switchD_00f9113c_default;
              goto LAB_00f91114;
            case 3:
              plVar1 = *(long **)(this + 0xf8);
              break;
            case 4:
              plVar1 = *(long **)(this + 0x100);
              break;
            default:
              goto switchD_00f9113c_default;
            }
            iVar9 = iVar9 + 1;
          } while (plVar1 != (long *)0x0);
        }
switchD_00f9113c_default:
        lVar5 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
        lVar4 = 0;
        if (*(long *)(this + 0x870) != 0) {
          lVar4 = *(long *)(*(long *)(this + 0x870) + 0x20);
        }
        uVar3 = MemoryController<v8::internal::GlobalMemoryTrait>::CalculateAllocationLimit
                          (dVar15,this,lVar5 + lVar2 + lVar4,*(undefined8 *)(this + 0x60),
                           *(undefined8 *)(this + 0x68),lVar8,uVar10);
        if (uVar3 < *(ulong *)(this + 0x5d8)) {
          *(ulong *)(this + 0x5d8) = uVar3;
        }
      }
    }
  }
  return;
switchD_00f90f64_caseD_0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

