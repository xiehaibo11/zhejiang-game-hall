
/* v8::internal::compiler::CodeGenerator::FinalizeCode() */

long * __thiscall v8::internal::compiler::CodeGenerator::FinalizeCode(CodeGenerator *this)

{
  Assembler *this_00;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  Logger *pLVar6;
  long *plVar7;
  long lVar8;
  CodeBuilder aCStack_d0 [32];
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined1 local_95;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  
  if (*(int *)(this + 0x458) == 0) {
    puVar2 = (undefined8 *)
             SourcePositionTableBuilder::ToSourcePositionTable
                       ((SourcePositionTableBuilder *)(this + 0x400),*(Isolate **)(this + 0x10));
    uVar3 = GenerateDeoptimizationData(this);
    local_48 = 0;
    local_50 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    this_00 = (Assembler *)(this + 0xd0);
    Assembler::GetCode(this_00,*(Isolate **)(this + 0x10),(CodeDesc *)&local_90,
                       (SafepointTableBuilder *)(this + 0x298),*(int *)(this + 0x3b8));
    if (FLAG_perf_prof_unwinding_info != '\0') {
      EhFrameWriter::GetEhFrame((EhFrameWriter *)(this + 0x38),(CodeDesc *)&local_90);
    }
    Factory::CodeBuilder::CodeBuilder
              (aCStack_d0,*(undefined8 *)(this + 0x10),&local_90,
               *(undefined4 *)(*(long *)(this + 0xa0) + 8));
    local_b0 = *(undefined4 *)(*(long *)(this + 0xa0) + 0xc);
    local_95 = 1;
    local_94 = *(undefined4 *)(**(long **)(this + 0x18) + 4);
    local_a8 = puVar2;
    uStack_a0 = uVar3;
    plVar7 = (long *)Factory::CodeBuilder::TryBuild(aCStack_d0);
    if (plVar7 == (long *)0x0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 0x10) + 0x9520);
      iVar1 = *(int *)(*plVar7 + 0x13);
      if (*(char *)(lVar8 + 0x1a98) == '\0') {
        *(char *)(lVar8 + 0x1a98) = '\x01';
        piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar8 + 0x1a80));
        *(int **)(lVar8 + 0x1a90) = piVar4;
      }
      else {
        piVar4 = *(int **)(lVar8 + 0x1a90);
      }
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + iVar1;
      }
      pLVar6 = *(Logger **)(*(long *)(this + 0x10) + 0x9558);
      uVar5 = (**(code **)(*(long *)pLVar6 + 0x88))(pLVar6);
      if ((uVar5 & 1) != 0) {
        Logger::CodeLinePosInfoRecordEvent(pLVar6,*plVar7 + 0x3f,*puVar2);
      }
    }
  }
  else {
    (**(code **)(*(long *)(this + 0xd0) + 0x10))(this + 0xd0);
    plVar7 = (long *)0x0;
  }
  return plVar7;
}

