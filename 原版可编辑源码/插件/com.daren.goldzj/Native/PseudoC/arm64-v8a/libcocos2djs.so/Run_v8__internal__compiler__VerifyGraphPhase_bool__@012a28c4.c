
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,
   bool&>(bool&) */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool&>
          (PipelineImpl *this,bool *param_1)

{
  uint uVar1;
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar2;
  long lVar3;
  undefined4 uVar4;
  ZoneStats *this_01;
  long lVar5;
  long lVar6;
  undefined8 local_60;
  RuntimeCallStats *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar6 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar6 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFVerifyGraph");
  }
  this_01 = *(ZoneStats **)(lVar6 + 0x30);
  lVar5 = *(long *)(lVar6 + 0xb0);
  if (lVar5 != 0) {
    local_60 = *(undefined8 *)(lVar5 + 0x30);
    *(char **)(lVar5 + 0x30) = "V8.TFVerifyGraph";
  }
  pRVar2 = *(RuntimeCallStats **)(lVar6 + 0x1d8);
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (RuntimeCallStats *)0x0;
  if ((pRVar2 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar6 = *(long *)this;
  }
  else {
    uVar4 = 0x49f;
    if (*(int *)(pRVar2 + 0x14) == 1) {
      uVar4 = 0x4a0;
    }
    RuntimeCallStats::Enter(pRVar2,(RuntimeCallTimer *)&uStack_50,uVar4);
    lVar6 = *(long *)this;
    local_58 = pRVar2;
  }
  lVar3 = ZoneStats::NewEmptyZone(this_01,"V8.TFVerifyGraph");
  uVar1 = *(int *)(*(long *)(lVar6 + 0x18) + 8) - 5;
  if (uVar1 < 7) {
    uVar4 = *(undefined4 *)(&DAT_019fd968 + (long)(int)uVar1 * 4);
  }
  else {
    uVar4 = 0;
  }
  Verifier::Run(*(undefined8 *)(lVar6 + 0xa0),*param_1,1,uVar4);
  if (local_58 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_58,(RuntimeCallTimer *)&uStack_50);
  }
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x30) = local_60;
  }
  if (lVar3 != 0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

