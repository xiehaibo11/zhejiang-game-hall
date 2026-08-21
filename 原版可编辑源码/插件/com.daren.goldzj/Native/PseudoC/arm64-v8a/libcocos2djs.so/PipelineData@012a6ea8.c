
/* v8::internal::compiler::PipelineData::PipelineData(v8::internal::compiler::ZoneStats*,
   v8::internal::wasm::WasmEngine*, v8::internal::OptimizedCompilationInfo*,
   v8::internal::compiler::MachineGraph*, v8::internal::compiler::PipelineStatistics*,
   v8::internal::compiler::SourcePositionTable*, v8::internal::compiler::NodeOriginTable*,
   v8::internal::AssemblerOptions const&) */

void __thiscall
v8::internal::compiler::PipelineData::PipelineData
          (PipelineData *this,ZoneStats *param_1,WasmEngine *param_2,
          OptimizedCompilationInfo *param_3,MachineGraph *param_4,PipelineStatistics *param_5,
          SourcePositionTable *param_6,NodeOriginTable *param_7,AssemblerOptions *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)this = 0;
  *(WasmEngine **)(this + 8) = param_2;
  *(WasmEngine **)(this + 0x10) = param_2 + 0x58;
  *(OptimizedCompilationInfo **)(this + 0x18) = param_3;
  OptimizedCompilationInfo::GetDebugName();
  this[0x28] = (PipelineData)0x0;
  *(ZoneStats **)(this + 0x30) = param_1;
  *(PipelineStatistics **)(this + 0x38) = param_5;
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
  uVar1 = ZoneStats::NewEmptyZone(param_1,"graph-zone");
  *(undefined8 *)(this + 0x90) = uVar1;
  *(undefined8 *)(this + 0x98) = uVar1;
  uVar1 = *(undefined8 *)param_4;
  *(NodeOriginTable **)(this + 0xb0) = param_7;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xa0) = uVar1;
  *(SourcePositionTable **)(this + 0xa8) = param_6;
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_4 + 0x10);
  uVar1 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0xd8) = 0;
  *(MachineGraph **)(this + 0xe0) = param_4;
  *(undefined8 *)(this + 0xe8) = 0;
  *(char **)(this + 0xf0) = "instruction-zone";
  *(ZoneStats **)(this + 0xf8) = *(ZoneStats **)(this + 0x30);
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 200) = uVar1;
  *(undefined8 *)(this + 0xd0) = 0;
  uVar1 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x30),"instruction-zone");
  *(undefined8 *)(this + 0x100) = uVar1;
  *(undefined8 *)(this + 0x108) = uVar1;
  *(undefined8 *)(this + 0x110) = 0;
  *(char **)(this + 0x118) = "codegen-zone";
  *(ZoneStats **)(this + 0x120) = *(ZoneStats **)(this + 0x30);
  *(undefined8 *)(this + 0x128) = 0;
  uVar1 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x30),"codegen-zone");
  *(undefined8 *)(this + 0x128) = uVar1;
  *(undefined8 *)(this + 0x130) = uVar1;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(char **)(this + 0x150) = "register-allocation-zone";
  *(ZoneStats **)(this + 0x158) = *(ZoneStats **)(this + 0x30);
  *(undefined8 *)(this + 0x160) = 0;
  uVar1 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x30),"register-allocation-zone");
  *(undefined8 *)(this + 0x160) = uVar1;
  *(undefined8 *)(this + 0x168) = uVar1;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  uVar3 = *(undefined8 *)(param_8 + 8);
  uVar2 = *(undefined8 *)param_8;
  uVar1 = *(undefined8 *)(param_8 + 0x10);
  this[0x1b8] = (PipelineData)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1a8) = uVar3;
  *(undefined8 *)(this + 0x1a0) = uVar2;
  *(undefined8 *)(this + 0x1b0) = uVar1;
  return;
}

