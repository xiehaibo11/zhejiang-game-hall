
/* v8::internal::compiler::PipelineStatistics::CommonStats::Begin(v8::internal::compiler::PipelineStatistics*)
    */

void __thiscall
v8::internal::compiler::PipelineStatistics::CommonStats::Begin
          (CommonStats *this,PipelineStatistics *param_1)

{
  StatsScope *this_00;
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  StatsScope *this_01;
  
  this_00 = operator_new(0x30);
  ZoneStats::StatsScope::StatsScope(this_00,*(ZoneStats **)(param_1 + 8));
  this_01 = *(StatsScope **)this;
  *(StatsScope **)this = this_00;
  if (this_01 != (StatsScope *)0x0) {
    ZoneStats::StatsScope::~StatsScope(this_01);
    operator_delete(this_01);
  }
  uVar1 = base::TimeTicks::HighResolutionNow();
  *(undefined8 *)(this + 8) = uVar1;
  plVar3 = *(long **)param_1;
  lVar5 = 0;
  if (plVar3[5] != 0) {
    lVar5 = (plVar3[2] - plVar3[5]) + -0x18;
  }
  lVar4 = *plVar3;
  *(long *)(this + 0x10) = lVar4 + lVar5;
  lVar6 = *(long *)(param_1 + 0x40);
  lVar2 = ZoneStats::GetCurrentAllocatedBytes();
  *(long *)(this + 0x18) = ((lVar4 + lVar5) - lVar6) + lVar2;
  return;
}

