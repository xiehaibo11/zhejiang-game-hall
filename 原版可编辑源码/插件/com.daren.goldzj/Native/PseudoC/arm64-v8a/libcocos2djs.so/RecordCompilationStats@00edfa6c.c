
/* v8::internal::OptimizedCompilationJob::RecordCompilationStats(v8::internal::OptimizedCompilationJob::CompilationMode,
   v8::internal::Isolate*) const */

void __thiscall
v8::internal::OptimizedCompilationJob::RecordCompilationStats
          (OptimizedCompilationJob *this,int param_2,long param_3)

{
  TimeDelta *this_00;
  TimeDelta *this_01;
  int iVar1;
  long lVar2;
  TimeDelta *pTVar3;
  ulong uVar4;
  int iVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long local_88;
  long local_80;
  ulong local_78;
  
  pTVar3 = (TimeDelta *)(this + 0x20);
  puVar6 = *(ulong **)(*(long *)(this + 0x18) + 0x20);
  dVar7 = (double)base::TimeDelta::InMillisecondsF(pTVar3);
  this_00 = (TimeDelta *)(this + 0x28);
  dVar8 = (double)base::TimeDelta::InMillisecondsF(this_00);
  this_01 = (TimeDelta *)(this + 0x30);
  dVar9 = (double)base::TimeDelta::InMillisecondsF(this_01);
  if (FLAG_trace_opt != '\0') {
    PrintF("[optimizing ");
    local_78 = *puVar6;
    Object::ShortPrint((Object *)&local_78,(__sFILE *)waitpid);
    PrintF(" - took %0.3f, %0.3f, %0.3f ms]\n",dVar7,dVar8,dVar9);
  }
  if (FLAG_trace_opt_stats != '\0') {
    DAT_01d3ebb0 = dVar7 + dVar8 + dVar9 + DAT_01d3ebb0;
    DAT_01d3ebb8 = DAT_01d3ebb8 + 1;
    uVar4 = *puVar6;
    local_78 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
    iVar1 = SharedFunctionInfo::SourceSize((SharedFunctionInfo *)&local_78);
    DAT_01d3ebbc = DAT_01d3ebbc + iVar1;
    PrintF("Compiled: %d functions with %d byte source size in %fms.\n",DAT_01d3ebb0,
           (ulong)DAT_01d3ebb8);
  }
  uVar4 = base::TimeTicks::IsHighResolution();
  if ((uVar4 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x9520);
    if (*(int *)(*(long *)(this + 0x18) + 0x38) == -1) {
      base::TimeDelta::InMicroseconds(pTVar3);
      Histogram::AddSample(iVar1 + 0xe50);
      base::TimeDelta::InMicroseconds(this_00);
      Histogram::AddSample(iVar1 + 0xe80);
      base::TimeDelta::InMicroseconds(this_01);
      Histogram::AddSample(iVar1 + 0xeb0);
      lVar2 = base::TimeTicks::HighResolutionNow();
      local_78 = lVar2 - *(long *)(this + 0x10);
      base::TimeDelta::InMicroseconds((TimeDelta *)&local_78);
      Histogram::AddSample(iVar1 + 0xf40);
      local_78 = 0;
      local_80 = *(long *)(this + 0x30) + *(long *)(this + 0x20);
      if (param_2 == 1) {
        local_88 = base::TimeTicks::HighResolutionNow();
        local_88 = local_88 - *(long *)(this + 0x10);
        base::TimeDelta::InMicroseconds((TimeDelta *)&local_88);
        Histogram::AddSample(iVar1 + 0xf70);
        local_80 = local_80 + *(long *)(this + 0x28);
      }
      else if (param_2 == 0) {
        local_78 = *(ulong *)(this + 0x28);
        local_88 = base::TimeTicks::HighResolutionNow();
        local_88 = local_88 - *(long *)(this + 0x10);
        base::TimeDelta::InMicroseconds((TimeDelta *)&local_88);
        Histogram::AddSample(iVar1 + 4000);
      }
      base::TimeDelta::InMicroseconds((TimeDelta *)&local_78);
      Histogram::AddSample(iVar1 + 0xf10);
      iVar5 = iVar1 + 0xee0;
      pTVar3 = (TimeDelta *)&local_80;
    }
    else {
      base::TimeDelta::InMicroseconds(pTVar3);
      Histogram::AddSample(iVar1 + 0xfd0);
      base::TimeDelta::InMicroseconds(this_00);
      Histogram::AddSample(iVar1 + 0x1000);
      base::TimeDelta::InMicroseconds(this_01);
      Histogram::AddSample(iVar1 + 0x1030);
      iVar5 = iVar1 + 0x1060;
      lVar2 = base::TimeTicks::HighResolutionNow();
      local_78 = lVar2 - *(long *)(this + 0x10);
      pTVar3 = (TimeDelta *)&local_78;
    }
    base::TimeDelta::InMicroseconds(pTVar3);
    Histogram::AddSample(iVar5);
    Histogram::AddSample(iVar1 + 0x878);
  }
  return;
}

