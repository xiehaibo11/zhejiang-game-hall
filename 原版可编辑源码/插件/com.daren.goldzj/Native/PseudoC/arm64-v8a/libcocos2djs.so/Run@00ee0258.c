
/* v8::internal::BackgroundCompileTask::Run() */

void __thiscall v8::internal::BackgroundCompileTask::Run(BackgroundCompileTask *this)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  RuntimeCallStats *pRVar7;
  Parser *this_00;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  ParseInfo *this_01;
  Parser *this_02;
  RuntimeCallStats *local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  byte **local_138;
  byte *local_130;
  char *local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  TimedHistogram *local_f0;
  Isolate *local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_f0 = *(TimedHistogram **)(this + 0x38);
  local_e8 = (Isolate *)0x0;
  local_f8 = 0;
  TimedHistogram::Start(local_f0,(ElapsedTimer *)&local_f8,(Isolate *)0x0);
  local_118 = *(long *)this;
  iVar2 = *(int *)(this + 0x20);
  local_110 = *(undefined8 *)(local_118 + 0x88);
  local_108 = *(undefined8 *)(local_118 + 0x20);
  WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_100,
             *(WorkerThreadRuntimeCallStats **)(this + 0x28));
  lVar11 = local_118;
  *(undefined8 *)(local_118 + 0x88) = local_100;
  lVar4 = GetCurrentStackPosition();
  *(long *)(lVar11 + 0x20) = lVar4 + (long)iVar2 * -0x400;
  if (DAT_01d3ebc0 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ebc0 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3ebc0;
  local_138 = (byte **)0x0;
  if ((*DAT_01d3ebc0 & 5) != 0) {
    local_90 = (RuntimeCallStats *)0x0;
    plStack_88 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"BackgroundCompileTask::Run",0,0,0,0,0,0,0,&local_90,0);
    plVar5 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    pRVar7 = local_90;
    local_90 = (RuntimeCallStats *)0x0;
    if (pRVar7 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar7 + 8))();
    }
    local_138 = &local_130;
    local_128 = "BackgroundCompileTask::Run";
    local_130 = pbVar3;
    local_120 = uVar6;
  }
  lVar11 = *(long *)this;
  pRVar7 = *(RuntimeCallStats **)(lVar11 + 0x88);
  local_140 = 0;
  uStack_158 = 0;
  local_160 = (RuntimeCallStats *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  if ((pRVar7 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    local_160 = pRVar7;
    RuntimeCallStats::Enter(pRVar7,(RuntimeCallTimer *)((ulong)&local_160 | 8),0x75);
    lVar11 = *(long *)this;
  }
  *(undefined8 *)(*(long *)(lVar11 + 0x60) + 0x28) = *(undefined8 *)(lVar11 + 0x88);
  this_00 = operator_new(0x4b0);
  Parser::Parser(this_00,*(ParseInfo **)this);
  this_02 = *(Parser **)(this + 8);
  *(Parser **)(this + 8) = this_00;
  if (this_02 != (Parser *)0x0) {
    Parser::~Parser(this_02);
    operator_delete(this_02);
    this_00 = *(Parser **)(this + 8);
  }
  Parser::InitializeEmptyScopeChain(this_00,*(ParseInfo **)this);
  Parser::ParseOnBackground(*(Parser **)(this + 8),*(ParseInfo **)this);
  this_01 = *(ParseInfo **)this;
  if (*(long *)(this_01 + 0xa8) == 0) goto LAB_00ee0670;
  uVar6 = *(undefined8 *)(this + 0x30);
  if (DAT_01d3ebf8 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ebf8 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3ebf8;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3ebf8 & 5) != 0) {
    local_90 = (RuntimeCallStats *)0x0;
    plStack_88 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.CompileCodeBackground",0,0,0,0,0,0,0,&local_90,0);
    plVar5 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    pRVar7 = local_90;
    local_90 = (RuntimeCallStats *)0x0;
    if (pRVar7 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar7 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.CompileCodeBackground";
    local_a8 = pbVar3;
    local_98 = uVar8;
  }
  pRVar7 = *(RuntimeCallStats **)(this_01 + 0x88);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if ((pRVar7 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar10 = 0x43c;
    if ((*(uint *)(this_01 + 8) & 4) != 0) {
      uVar10 = 0x432;
    }
    uVar1 = 0x434;
    if ((*(uint *)(this_01 + 8) & 1) != 0) {
      uVar1 = uVar10;
    }
    local_e0 = pRVar7;
    RuntimeCallStats::Enter(pRVar7,(RuntimeCallTimer *)((ulong)&local_e0 | 8),uVar1);
    pRVar7 = *(RuntimeCallStats **)(this_01 + 0x88);
  }
  local_70 = 0;
  plStack_88 = (long *)0x0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((pRVar7 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar10 = 0x42f;
    if (*(int *)(pRVar7 + 0x14) == 1) {
      uVar10 = 0x430;
    }
    local_90 = pRVar7;
    RuntimeCallStats::Enter(pRVar7,(RuntimeCallTimer *)((ulong)&local_90 | 8),uVar10);
  }
  uVar9 = Rewriter::Rewrite(this_01);
  if ((uVar9 & 1) == 0) {
    uVar9 = 0;
    if (local_90 != (RuntimeCallStats *)0x0) goto LAB_00ee0608;
LAB_00ee0578:
    if ((uVar9 & 1) == 0) goto LAB_00ee0614;
LAB_00ee057c:
    FUN_00ee6ca4(&local_90,this_01,*(undefined8 *)(this_01 + 0xa8),uVar6,this + 0x18);
    pRVar7 = local_90;
  }
  else {
    uVar9 = DeclarationScope::Analyze(this_01);
    uVar9 = uVar9 & 0xffffffff;
    if (local_90 == (RuntimeCallStats *)0x0) goto LAB_00ee0578;
LAB_00ee0608:
    RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
    if ((uVar9 & 1) != 0) goto LAB_00ee057c;
LAB_00ee0614:
    pRVar7 = (RuntimeCallStats *)0x0;
  }
  ParseInfo::ResetCharacterStream(this_01);
  if (local_e0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_a8,local_a0,local_98);
  }
  plVar5 = *(long **)(this + 0x10);
  *(RuntimeCallStats **)(this + 0x10) = pRVar7;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
LAB_00ee0670:
  if (local_160 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_160,(RuntimeCallTimer *)((ulong)&local_160 | 8));
  }
  if ((local_138 != (byte **)0x0) && (*local_130 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_130,local_128,local_120);
  }
  *(undefined8 *)(local_118 + 0x20) = local_108;
  *(undefined8 *)(local_118 + 0x88) = local_110;
  WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_100);
  TimedHistogram::Stop(local_f0,(ElapsedTimer *)&local_f8,local_e8);
  return;
}

