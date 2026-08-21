
/* v8::internal::compiler::PipelineStatistics::~PipelineStatistics() */

void __thiscall
v8::internal::compiler::PipelineStatistics::~PipelineStatistics(PipelineStatistics *this)

{
  CommonStats *this_00;
  StatsScope *pSVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  
  if (*(long *)(this + 0x60) != 0) {
    EndPhaseKind(this);
  }
  this_00 = (CommonStats *)(this + 0x30);
  local_40 = (void *)0x0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  CommonStats::End(this_00,this,(BasicStats *)&local_70);
  CompilationStatistics::RecordTotalStats
            (*(CompilationStatistics **)(this + 0x10),*(ulong *)(this + 0x50),
             (BasicStats *)&local_70);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  pSVar1 = *(StatsScope **)(this + 0x88);
  *(undefined8 *)(this + 0x88) = 0;
  if (pSVar1 != (StatsScope *)0x0) {
    ZoneStats::StatsScope::~StatsScope(pSVar1);
    operator_delete(pSVar1);
  }
  pSVar1 = *(StatsScope **)(this + 0x60);
  *(undefined8 *)(this + 0x60) = 0;
  if (pSVar1 != (StatsScope *)0x0) {
    ZoneStats::StatsScope::~StatsScope(pSVar1);
    operator_delete(pSVar1);
  }
  pSVar1 = *(StatsScope **)this_00;
  *(undefined8 *)this_00 = 0;
  if (pSVar1 != (StatsScope *)0x0) {
    ZoneStats::StatsScope::~StatsScope(pSVar1);
    operator_delete(pSVar1);
  }
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  return;
}

