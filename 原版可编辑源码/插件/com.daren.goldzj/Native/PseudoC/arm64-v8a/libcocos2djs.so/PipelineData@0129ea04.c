
/* v8::internal::compiler::PipelineData::PipelineData(v8::internal::compiler::ZoneStats*,
   v8::internal::Isolate*, v8::internal::OptimizedCompilationInfo*,
   v8::internal::compiler::PipelineStatistics*) */

void __thiscall
v8::internal::compiler::PipelineData::PipelineData
          (PipelineData *this,ZoneStats *param_1,Isolate *param_2,OptimizedCompilationInfo *param_3,
          PipelineStatistics *param_4)

{
  PipelineData PVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  JSHeapBroker *this_00;
  Graph *this_01;
  SourcePositionTable *this_02;
  SimplifiedOperatorBuilder *this_03;
  MachineOperatorBuilder *pMVar4;
  CommonOperatorBuilder *this_04;
  JSOperatorBuilder *this_05;
  undefined8 *puVar5;
  CompilationDependencies *this_06;
  undefined1 uVar6;
  Zone *pZVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  NodeOriginTable *this_07;
  undefined1 auVar12 [16];
  
  *(Isolate **)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 0x95d0);
  *(OptimizedCompilationInfo **)(this + 0x18) = param_3;
  OptimizedCompilationInfo::GetDebugName();
  this[0x28] = (PipelineData)0x0;
  *(ZoneStats **)(this + 0x30) = param_1;
  *(PipelineStatistics **)(this + 0x38) = param_4;
  *(undefined2 *)(this + 0x40) = 0;
  this[0x48] = (PipelineData)0x0;
  this[0x50] = (PipelineData)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0x78) = 0;
  PVar1 = (PipelineData)0x0;
  if (param_2[0xb6b8] == (Isolate)0x0) {
    PVar1 = (PipelineData)(*(long *)(param_2 + 0xc678) == 0);
  }
  this[0x7c] = PVar1;
  *(char **)(this + 0x80) = "graph-zone";
  *(ZoneStats **)(this + 0x88) = param_1;
  *(undefined8 *)(this + 0x90) = 0;
  uVar3 = ZoneStats::NewEmptyZone(param_1,"graph-zone");
  *(undefined8 *)(this + 0x90) = uVar3;
  *(undefined8 *)(this + 0x98) = uVar3;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(char **)(this + 0xf0) = "instruction-zone";
  *(ZoneStats **)(this + 0xf8) = *(ZoneStats **)(this + 0x30);
  *(undefined8 *)(this + 0x100) = 0;
  uVar3 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x30),"instruction-zone");
  *(undefined8 *)(this + 0x100) = uVar3;
  *(undefined8 *)(this + 0x108) = uVar3;
  *(undefined8 *)(this + 0x110) = 0;
  *(char **)(this + 0x118) = "codegen-zone";
  *(ZoneStats **)(this + 0x120) = *(ZoneStats **)(this + 0x30);
  *(undefined8 *)(this + 0x128) = 0;
  uVar3 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x30),"codegen-zone");
  *(undefined8 *)(this + 0x128) = uVar3;
  *(undefined8 *)(this + 0x130) = uVar3;
  *(undefined8 *)(this + 0x138) = 0;
  this_00 = operator_new(0x268);
  pZVar7 = *(Zone **)(*(uint **)(this + 0x18) + 0x10);
  JSHeapBroker::JSHeapBroker
            (this_00,*(Isolate **)this,pZVar7,(bool)((byte)(**(uint **)(this + 0x18) >> 0x11) & 1));
  uVar6 = SUB81(pZVar7,0);
  *(JSHeapBroker **)(this + 0x140) = this_00;
  *(undefined8 *)(this + 0x148) = 0;
  *(char **)(this + 0x150) = "register-allocation-zone";
  *(ZoneStats **)(this + 0x158) = *(ZoneStats **)(this + 0x30);
  *(undefined8 *)(this + 0x160) = 0;
  uVar3 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x30),"register-allocation-zone");
  *(undefined8 *)(this + 0x160) = uVar3;
  *(undefined8 *)(this + 0x168) = uVar3;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  AssemblerOptions::Default((AssemblerOptions *)param_2,(Isolate *)0x0,(bool)uVar6);
  this[0x1b8] = (PipelineData)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  if (param_4 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(param_4,"V8.TFInitPipelineData");
  }
  pZVar7 = *(Zone **)(this + 0x98);
  this_01 = *(Graph **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_01) < 0x40) {
    this_01 = (Graph *)Zone::NewExpand(pZVar7,0x40);
  }
  else {
    *(Graph **)(pZVar7 + 0x10) = this_01 + 0x40;
  }
  Graph::Graph(this_01,*(Zone **)(this + 0x98));
  pZVar7 = *(Zone **)(this + 0x98);
  *(Graph **)(this + 0xa0) = this_01;
  this_02 = *(SourcePositionTable **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_02) < 0x38) {
    this_02 = (SourcePositionTable *)Zone::NewExpand(pZVar7,0x38);
  }
  else {
    *(SourcePositionTable **)(pZVar7 + 0x10) = this_02 + 0x38;
  }
  SourcePositionTable::SourcePositionTable(this_02,*(Graph **)(this + 0xa0));
  *(SourcePositionTable **)(this + 0xa8) = this_02;
  if (((byte)param_3[1] >> 5 & 1) == 0) {
    this_07 = (NodeOriginTable *)0x0;
  }
  else {
    pZVar7 = *(Zone **)(this + 0x98);
    this_07 = *(NodeOriginTable **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_07) < 0x58) {
      this_07 = (NodeOriginTable *)Zone::NewExpand(pZVar7,0x58);
    }
    else {
      *(NodeOriginTable **)(pZVar7 + 0x10) = this_07 + 0x58;
    }
    NodeOriginTable::NodeOriginTable(this_07,*(Graph **)(this + 0xa0));
  }
  pZVar7 = *(Zone **)(this + 0x98);
  *(NodeOriginTable **)(this + 0xb0) = this_07;
  this_03 = *(SimplifiedOperatorBuilder **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_03) < 0x10) {
    this_03 = (SimplifiedOperatorBuilder *)Zone::NewExpand(pZVar7,0x10);
  }
  else {
    *(SimplifiedOperatorBuilder **)(pZVar7 + 0x10) = this_03 + 0x10;
  }
  SimplifiedOperatorBuilder::SimplifiedOperatorBuilder(this_03,*(Zone **)(this + 0x98));
  pZVar7 = *(Zone **)(this + 0x98);
  *(SimplifiedOperatorBuilder **)(this + 0xb8) = this_03;
  pMVar4 = *(MachineOperatorBuilder **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pMVar4) < 0x28) {
    pMVar4 = (MachineOperatorBuilder *)Zone::NewExpand(pZVar7,0x28);
  }
  else {
    *(MachineOperatorBuilder **)(pZVar7 + 0x10) = pMVar4 + 0x28;
  }
  uVar3 = *(undefined8 *)(this + 0x98);
  uVar2 = InstructionSelector::SupportedMachineOperatorFlags();
  auVar12 = InstructionSelector::AlignmentRequirements();
  MachineOperatorBuilder::MachineOperatorBuilder
            (pMVar4,uVar3,5,uVar2,auVar12._0_8_,auVar12._8_8_ & 0xffffffff);
  pZVar7 = *(Zone **)(this + 0x98);
  *(MachineOperatorBuilder **)(this + 0xc0) = pMVar4;
  this_04 = *(CommonOperatorBuilder **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_04) < 0x10) {
    this_04 = (CommonOperatorBuilder *)Zone::NewExpand(pZVar7,0x10);
  }
  else {
    *(CommonOperatorBuilder **)(pZVar7 + 0x10) = this_04 + 0x10;
  }
  CommonOperatorBuilder::CommonOperatorBuilder(this_04,*(Zone **)(this + 0x98));
  pZVar7 = *(Zone **)(this + 0x98);
  *(CommonOperatorBuilder **)(this + 200) = this_04;
  this_05 = *(JSOperatorBuilder **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_05) < 0x10) {
    this_05 = (JSOperatorBuilder *)Zone::NewExpand(pZVar7,0x10);
  }
  else {
    *(JSOperatorBuilder **)(pZVar7 + 0x10) = this_05 + 0x10;
  }
  JSOperatorBuilder::JSOperatorBuilder(this_05,*(Zone **)(this + 0x98));
  pZVar7 = *(Zone **)(this + 0x98);
  *(JSOperatorBuilder **)(this + 0xd0) = this_05;
  puVar5 = *(undefined8 **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)puVar5) < 0x278) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar7,0x278);
  }
  else {
    *(undefined8 **)(pZVar7 + 0x10) = puVar5 + 0x4f;
  }
  puVar8 = *(undefined8 **)(this + 0xa0);
  uVar3 = *(undefined8 *)this;
  uVar10 = *(undefined8 *)(this + 0xd0);
  auVar12 = NEON_ext(*(undefined1 (*) [16])(this + 0xc0),*(undefined1 (*) [16])(this + 0xc0),8,1);
  uVar11 = *(undefined8 *)(this + 0xb8);
  puVar5[2] = auVar12._8_8_;
  puVar5[1] = auVar12._0_8_;
  *puVar5 = puVar8;
  uVar9 = *puVar8;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0x100;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0x100;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0x100;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0x100;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0x100;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0x100;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1d] = 0x100;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  puVar5[0x21] = 0x100;
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0x100;
  puVar5[0x27] = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0x100;
  puVar5[0x2d] = uVar3;
  puVar5[0x2e] = uVar10;
  puVar5[0x2f] = uVar11;
  puVar5[0x4e] = 0;
  puVar5[0x4b] = 0;
  puVar5[0x4a] = 0;
  puVar5[0x4d] = 0;
  puVar5[0x4c] = 0;
  puVar5[0x47] = 0;
  puVar5[0x46] = 0;
  puVar5[0x49] = 0;
  puVar5[0x48] = 0;
  puVar5[0x43] = 0;
  puVar5[0x42] = 0;
  puVar5[0x45] = 0;
  puVar5[0x44] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x41] = 0;
  puVar5[0x40] = 0;
  puVar5[0x3b] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3c] = 0;
  puVar5[0x37] = 0;
  puVar5[0x36] = 0;
  puVar5[0x39] = 0;
  puVar5[0x38] = 0;
  puVar5[0x33] = 0;
  puVar5[0x32] = 0;
  puVar5[0x35] = 0;
  puVar5[0x34] = 0;
  puVar5[0x31] = 0;
  puVar5[0x30] = 0;
  puVar5[0x2b] = uVar9;
  puVar5[0x2c] = 0;
  *(undefined8 **)(this + 0xd8) = puVar5;
  pZVar7 = *(Zone **)(*(long *)(this + 0x18) + 0x40);
  this_06 = *(CompilationDependencies **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_06) < 0x20) {
    this_06 = (CompilationDependencies *)Zone::NewExpand(pZVar7,0x20);
  }
  else {
    *(CompilationDependencies **)(pZVar7 + 0x10) = this_06 + 0x20;
  }
  CompilationDependencies::CompilationDependencies
            (this_06,*(JSHeapBroker **)(this + 0x140),*(Zone **)(*(long *)(this + 0x18) + 0x40));
  *(CompilationDependencies **)(this + 0x138) = this_06;
  if (param_4 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(param_4);
    return;
  }
  return;
}

