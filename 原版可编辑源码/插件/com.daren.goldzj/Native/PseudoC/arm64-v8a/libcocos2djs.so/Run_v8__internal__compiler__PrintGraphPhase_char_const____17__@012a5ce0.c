
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase, char
   const (&) [17]>(char const (&) [17]) */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const(&)[17]>
          (PipelineImpl *this,char *param_1)

{
  RuntimeCallStats *pRVar1;
  undefined4 uVar2;
  long lVar3;
  PipelineData *pPVar4;
  PrintGraphPhase aPStack_90 [8];
  PipelineStatistics *local_88;
  char *local_80;
  ZoneStats *local_78;
  Zone *local_70;
  long local_68;
  undefined8 local_60;
  RuntimeCallStats *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar3 = *(long *)this;
  local_88 = *(PipelineStatistics **)(lVar3 + 0x38);
  if (local_88 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(local_88,"V8.TFPrintGraph");
  }
  local_78 = *(ZoneStats **)(lVar3 + 0x30);
  local_80 = "V8.TFPrintGraph";
  local_68 = *(long *)(lVar3 + 0xb0);
  local_70 = (Zone *)0x0;
  if (local_68 != 0) {
    local_60 = *(undefined8 *)(local_68 + 0x30);
    *(char **)(local_68 + 0x30) = "V8.TFPrintGraph";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar3 + 0x1d8);
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    pPVar4 = *(PipelineData **)this;
  }
  else {
    uVar2 = 0x483;
    if (*(int *)(pRVar1 + 0x14) == 1) {
      uVar2 = 0x484;
    }
    local_58 = pRVar1;
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_50,uVar2);
    pPVar4 = *(PipelineData **)this;
    if (local_70 != (Zone *)0x0) goto LAB_012a5d84;
  }
  local_70 = (Zone *)ZoneStats::NewEmptyZone(local_78,local_80);
LAB_012a5d84:
  PrintGraphPhase::Run(aPStack_90,pPVar4,local_70,param_1);
  if (local_58 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_58,(RuntimeCallTimer *)&uStack_50);
  }
  if (local_68 != 0) {
    *(undefined8 *)(local_68 + 0x30) = local_60;
  }
  if (local_70 != (Zone *)0x0) {
    ZoneStats::ReturnZone((Zone *)local_78);
  }
  local_70 = (Zone *)0x0;
  if (local_88 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(local_88);
  }
  return;
}

