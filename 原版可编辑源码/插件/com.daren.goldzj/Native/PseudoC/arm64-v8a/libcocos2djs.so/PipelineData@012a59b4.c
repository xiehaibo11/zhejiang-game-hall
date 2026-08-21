
/* v8::internal::compiler::PipelineData::PipelineData(v8::internal::compiler::ZoneStats*,
   v8::internal::OptimizedCompilationInfo*, v8::internal::Isolate*,
   v8::internal::AccountingAllocator*, v8::internal::compiler::Graph*,
   v8::internal::compiler::Schedule*, v8::internal::compiler::SourcePositionTable*,
   v8::internal::compiler::NodeOriginTable*, v8::internal::JumpOptimizationInfo*,
   v8::internal::AssemblerOptions const&) */

void __thiscall
v8::internal::compiler::PipelineData::PipelineData
          (PipelineData *this,ZoneStats *param_1,OptimizedCompilationInfo *param_2,Isolate *param_3,
          AccountingAllocator *param_4,Graph *param_5,Schedule *param_6,SourcePositionTable *param_7
          ,NodeOriginTable *param_8,JumpOptimizationInfo *param_9,AssemblerOptions *param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Zone *pZVar3;
  SimplifiedOperatorBuilder *this_00;
  MachineOperatorBuilder *pMVar4;
  CommonOperatorBuilder *this_01;
  JSOperatorBuilder *this_02;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  *(Isolate **)this = param_3;
  *(undefined8 *)(this + 8) = 0;
  *(AccountingAllocator **)(this + 0x10) = param_4;
  *(OptimizedCompilationInfo **)(this + 0x18) = param_2;
  OptimizedCompilationInfo::GetDebugName();
  this[0x28] = (PipelineData)0x1;
  *(ZoneStats **)(this + 0x30) = param_1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  this[0x48] = (PipelineData)0x0;
  this[0x50] = (PipelineData)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x75) = 0;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(char **)(this + 0x80) = "graph-zone";
  *(ZoneStats **)(this + 0x88) = param_1;
  *(undefined8 *)(this + 0x90) = 0;
  uVar2 = ZoneStats::NewEmptyZone(param_1,"graph-zone");
  *(undefined8 *)(this + 0x90) = uVar2;
  *(undefined8 *)(this + 0x98) = uVar2;
  *(Graph **)(this + 0xa0) = param_5;
  *(SourcePositionTable **)(this + 0xa8) = param_7;
  *(NodeOriginTable **)(this + 0xb0) = param_8;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(Schedule **)(this + 0xe8) = param_6;
  *(char **)(this + 0xf0) = "instruction-zone";
  *(ZoneStats **)(this + 0xf8) = *(ZoneStats **)(this + 0x30);
  *(undefined8 *)(this + 0x100) = 0;
  uVar2 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x30),"instruction-zone");
  *(undefined8 *)(this + 0x100) = uVar2;
  *(undefined8 *)(this + 0x108) = uVar2;
  *(undefined8 *)(this + 0x110) = 0;
  *(char **)(this + 0x118) = "codegen-zone";
  *(ZoneStats **)(this + 0x120) = *(ZoneStats **)(this + 0x30);
  *(undefined8 *)(this + 0x128) = 0;
  uVar2 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x30),"codegen-zone");
  *(undefined8 *)(this + 0x128) = uVar2;
  *(undefined8 *)(this + 0x130) = uVar2;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(char **)(this + 0x150) = "register-allocation-zone";
  *(ZoneStats **)(this + 0x158) = *(ZoneStats **)(this + 0x30);
  *(undefined8 *)(this + 0x160) = 0;
  uVar2 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x30),"register-allocation-zone");
  *(undefined8 *)(this + 0x160) = uVar2;
  *(undefined8 *)(this + 0x168) = uVar2;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(JumpOptimizationInfo **)(this + 0x198) = param_9;
  uVar6 = *(undefined8 *)(param_10 + 0x10);
  uVar2 = *(undefined8 *)param_10;
  uVar8 = *(undefined8 *)(param_10 + 8);
  pZVar3 = *(Zone **)(this + 0x98);
  this[0x1b8] = (PipelineData)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1a8) = uVar8;
  *(undefined8 *)(this + 0x1a0) = uVar2;
  *(undefined8 *)(this + 0x1b0) = uVar6;
  this_00 = *(SimplifiedOperatorBuilder **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this_00) < 0x10) {
    this_00 = (SimplifiedOperatorBuilder *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(SimplifiedOperatorBuilder **)(pZVar3 + 0x10) = this_00 + 0x10;
  }
  SimplifiedOperatorBuilder::SimplifiedOperatorBuilder(this_00,*(Zone **)(this + 0x98));
  pZVar3 = *(Zone **)(this + 0x98);
  *(SimplifiedOperatorBuilder **)(this + 0xb8) = this_00;
  pMVar4 = *(MachineOperatorBuilder **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pMVar4) < 0x28) {
    pMVar4 = (MachineOperatorBuilder *)Zone::NewExpand(pZVar3,0x28);
  }
  else {
    *(MachineOperatorBuilder **)(pZVar3 + 0x10) = pMVar4 + 0x28;
  }
  uVar2 = *(undefined8 *)(this + 0x98);
  uVar1 = InstructionSelector::SupportedMachineOperatorFlags();
  auVar10 = InstructionSelector::AlignmentRequirements();
  MachineOperatorBuilder::MachineOperatorBuilder
            (pMVar4,uVar2,5,uVar1,auVar10._0_8_,auVar10._8_8_ & 0xffffffff);
  pZVar3 = *(Zone **)(this + 0x98);
  *(MachineOperatorBuilder **)(this + 0xc0) = pMVar4;
  this_01 = *(CommonOperatorBuilder **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this_01) < 0x10) {
    this_01 = (CommonOperatorBuilder *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(CommonOperatorBuilder **)(pZVar3 + 0x10) = this_01 + 0x10;
  }
  CommonOperatorBuilder::CommonOperatorBuilder(this_01,*(Zone **)(this + 0x98));
  pZVar3 = *(Zone **)(this + 0x98);
  *(CommonOperatorBuilder **)(this + 200) = this_01;
  this_02 = *(JSOperatorBuilder **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this_02) < 0x10) {
    this_02 = (JSOperatorBuilder *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(JSOperatorBuilder **)(pZVar3 + 0x10) = this_02 + 0x10;
  }
  JSOperatorBuilder::JSOperatorBuilder(this_02,*(Zone **)(this + 0x98));
  pZVar3 = *(Zone **)(this + 0x98);
  *(JSOperatorBuilder **)(this + 0xd0) = this_02;
  puVar5 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < 0x278) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,0x278);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar5 + 0x4f;
  }
  puVar7 = *(undefined8 **)(this + 0xa0);
  uVar2 = *(undefined8 *)this;
  uVar6 = *(undefined8 *)(this + 0xd0);
  auVar10 = NEON_ext(*(undefined1 (*) [16])(this + 0xc0),*(undefined1 (*) [16])(this + 0xc0),8,1);
  uVar9 = *(undefined8 *)(this + 0xb8);
  puVar5[2] = auVar10._8_8_;
  puVar5[1] = auVar10._0_8_;
  *puVar5 = puVar7;
  uVar8 = *puVar7;
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
  puVar5[0x2d] = uVar2;
  puVar5[0x2e] = uVar6;
  puVar5[0x2f] = uVar9;
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
  puVar5[0x2b] = uVar8;
  puVar5[0x2c] = 0;
  *(undefined8 **)(this + 0xd8) = puVar5;
  return;
}

