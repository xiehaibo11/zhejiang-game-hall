
/* v8::internal::compiler::Pipeline::AllocateRegistersForTesting(v8::internal::RegisterConfiguration
   const*, v8::internal::compiler::InstructionSequence*, bool) */

bool v8::internal::compiler::Pipeline::AllocateRegistersForTesting
               (RegisterConfiguration *param_1,InstructionSequence *param_2,bool param_3)

{
  long lVar1;
  bool bVar2;
  Frame *this;
  undefined1 uVar3;
  AssemblerOptions *this_00;
  AssemblerOptions **local_338;
  ZoneStats aZStack_330 [72];
  OptimizedCompilationInfo aOStack_2e8 [160];
  AssemblerOptions *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  OptimizedCompilationInfo *pOStack_230;
  undefined1 local_220;
  ZoneStats *local_218;
  undefined8 uStack_210;
  undefined2 local_208;
  undefined4 local_204;
  undefined1 local_200;
  undefined1 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined5 local_1d8;
  undefined3 uStack_1d3;
  undefined5 uStack_1d0;
  char *local_1c8;
  ZoneStats *pZStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  char *local_158;
  ZoneStats *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  InstructionSequence *local_138;
  char *local_130;
  ZoneStats *local_128;
  Zone *local_120;
  Zone *local_118;
  undefined8 local_110;
  undefined8 local_108;
  Frame *local_100;
  char *local_f8;
  ZoneStats *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = 8;
  OptimizedCompilationInfo::OptimizedCompilationInfo
            (aOStack_2e8,"testing",8,*(undefined8 *)(param_2 + 8),2);
  ZoneStats::ZoneStats(aZStack_330,*(AccountingAllocator **)(*(long *)param_2 + 0x95d0));
  this_00 = *(AssemblerOptions **)param_2;
  uStack_240 = 0;
  local_238 = *(undefined8 *)(this_00 + 0x95d0);
  local_248 = this_00;
  pOStack_230 = aOStack_2e8;
  OptimizedCompilationInfo::GetDebugName();
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d3 = 0;
  uStack_1d0 = 0;
  local_220 = 1;
  local_1c8 = "graph-zone";
  local_204 = 0xffffffff;
  uStack_148 = 0;
  uStack_1a0 = 0;
  local_1a8 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  uStack_180 = 0;
  local_188 = 0;
  uStack_190 = 0;
  local_198 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_170 = 0;
  local_178 = 0;
  local_158 = "instruction-zone";
  local_140 = *(undefined8 *)(param_2 + 8);
  local_130 = "codegen-zone";
  local_120 = (Zone *)0x0;
  local_218 = aZStack_330;
  pZStack_1c0 = aZStack_330;
  local_150 = aZStack_330;
  local_138 = param_2;
  local_128 = aZStack_330;
  local_120 = (Zone *)ZoneStats::NewEmptyZone(aZStack_330,"codegen-zone");
  local_108 = 0;
  local_110 = 0;
  local_f8 = "register-allocation-zone";
  local_100 = (Frame *)0x0;
  local_e8 = 0;
  local_f0 = local_218;
  local_118 = local_120;
  local_e8 = ZoneStats::NewEmptyZone(local_218,"register-allocation-zone");
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  local_e0 = local_e8;
  AssemblerOptions::Default(this_00,(Isolate *)0x0,(bool)uVar3);
  local_90 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  this = *(Frame **)(local_118 + 0x10);
  if ((ulong)(*(long *)(local_118 + 0x18) - (long)this) < 0x20) {
    this = (Frame *)Zone::NewExpand(local_118,0x20);
  }
  else {
    *(Frame **)(local_118 + 0x10) = this + 0x20;
  }
  Frame::Frame(this,0);
  local_338 = &local_248;
  local_100 = this;
  PipelineImpl::AllocateRegisters((PipelineImpl *)&local_338,param_1,(CallDescriptor *)0x0,param_3);
  bVar2 = (char)local_208 == '\0';
  PipelineData::~PipelineData((PipelineData *)&local_248);
  ZoneStats::~ZoneStats(aZStack_330);
  OptimizedCompilationInfo::~OptimizedCompilationInfo(aOStack_2e8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

