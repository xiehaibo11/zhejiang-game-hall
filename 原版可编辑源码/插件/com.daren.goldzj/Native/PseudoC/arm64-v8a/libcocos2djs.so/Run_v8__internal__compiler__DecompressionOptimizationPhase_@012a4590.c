
/* void 
   v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::DecompressionOptimizationPhase>()
    */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::DecompressionOptimizationPhase>
          (PipelineImpl *this)

{
  long lVar1;
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar2;
  Zone *pZVar3;
  undefined4 uVar4;
  ZoneStats *this_01;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_f0;
  RuntimeCallStats *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  DecompressionOptimizer aDStack_c0 [32];
  long *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long local_88;
  long *local_78;
  ulong local_70;
  long local_68;
  long local_58;
  long local_50;
  long local_48;
  
  lVar10 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar10 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFDecompressionOptimization");
  }
  this_01 = *(ZoneStats **)(lVar10 + 0x30);
  lVar5 = *(long *)(lVar10 + 0xb0);
  if (lVar5 != 0) {
    local_f0 = *(undefined8 *)(lVar5 + 0x30);
    *(char **)(lVar5 + 0x30) = "V8.TFDecompressionOptimization";
  }
  pRVar2 = *(RuntimeCallStats **)(lVar10 + 0x1d8);
  local_c8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
  local_e8 = (RuntimeCallStats *)0x0;
  if ((pRVar2 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar10 = *(long *)this;
  }
  else {
    uVar4 = 0x455;
    if (*(int *)(pRVar2 + 0x14) == 1) {
      uVar4 = 0x456;
    }
    RuntimeCallStats::Enter(pRVar2,(RuntimeCallTimer *)&uStack_e0,uVar4);
    lVar10 = *(long *)this;
    local_e8 = pRVar2;
  }
  pZVar3 = (Zone *)ZoneStats::NewEmptyZone(this_01,"V8.TFDecompressionOptimization");
  DecompressionOptimizer::DecompressionOptimizer
            (aDStack_c0,pZVar3,*(Graph **)(lVar10 + 0xa0),*(CommonOperatorBuilder **)(lVar10 + 200),
             *(MachineOperatorBuilder **)(lVar10 + 0xc0));
  DecompressionOptimizer::Reduce(aDStack_c0);
  if (local_50 != 0) {
    local_48 = local_50;
  }
  if ((long)local_90 - (long)local_98 != 0) {
    plVar7 = (long *)((long)local_98 + (local_70 >> 6 & 0x3fffffffffffff8));
    lVar10 = *plVar7 + (local_70 & 0x1ff) * 8;
    lVar1 = *(long *)((long)local_98 + (local_68 + local_70 >> 6 & 0x3fffffffffffff8)) +
            (local_68 + local_70 & 0x1ff) * 8;
    while (lVar1 != lVar10) {
      while (lVar10 = lVar10 + 8, lVar10 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        lVar10 = *plVar7;
        if (lVar1 == lVar10) goto LAB_012a46bc;
      }
    }
  }
LAB_012a46bc:
  uVar8 = (long)local_90 - (long)local_98 >> 3;
  local_68 = 0;
  if (2 < uVar8) {
    plVar9 = (long *)*local_98;
    plVar7 = (long *)local_58;
    if (local_58 != 0) goto LAB_012a4714;
    do {
      plVar7 = plVar9;
      plVar7[1] = 0x200;
      *plVar7 = local_58;
      local_58 = (long)plVar7;
      do {
        local_98 = local_98 + 1;
        uVar8 = (long)local_90 - (long)local_98 >> 3;
        if (uVar8 < 3) goto LAB_012a4724;
        plVar9 = (long *)*local_98;
        if (plVar7 == (long *)0x0) break;
LAB_012a4714:
      } while (0x200 < *(ulong *)((long)plVar7 + 8));
    } while( true );
  }
LAB_012a4724:
  if (uVar8 == 1) {
    local_70 = 0x100;
  }
  else if (uVar8 == 2) {
    local_70 = 0x200;
  }
  if (local_98 == local_90) {
LAB_012a47b4:
    if (((local_a0 != (long *)0x0) && (0xf < (ulong)(local_88 - (long)local_a0))) &&
       ((uVar8 = local_88 - (long)local_a0 >> 3, local_78 == (long *)0x0 ||
        ((ulong)local_78[1] <= uVar8)))) {
      local_a0[1] = uVar8;
      *local_a0 = (long)local_78;
      local_78 = local_a0;
    }
    if (local_e8 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_e8,(RuntimeCallTimer *)&uStack_e0);
    }
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x30) = local_f0;
    }
    if (pZVar3 != (Zone *)0x0) {
      ZoneStats::ReturnZone((Zone *)this_01);
    }
    if (this_00 != (PipelineStatistics *)0x0) {
      PipelineStatistics::EndPhase(this_00);
    }
    return;
  }
  plVar9 = (long *)*local_98;
  puVar6 = local_98;
  plVar7 = (long *)local_58;
  if (local_58 != 0) goto LAB_012a4784;
  do {
    plVar7 = plVar9;
    plVar7[1] = 0x200;
    *plVar7 = local_58;
    local_58 = (long)plVar7;
    do {
      puVar6 = puVar6 + 1;
      if (local_90 == puVar6) {
        if ((long)local_90 - (long)local_98 != 0) {
          local_90 = local_90 + (((long)local_90 - (long)local_98) - 8U >> 3 ^ 0xffffffffffffffff);
        }
        goto LAB_012a47b4;
      }
      plVar9 = (long *)*puVar6;
      if (plVar7 == (long *)0x0) break;
LAB_012a4784:
    } while (0x200 < *(ulong *)((long)plVar7 + 8));
  } while( true );
}

