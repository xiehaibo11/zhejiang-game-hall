
/* v8::internal::compiler::CodeGenerator::CodeGenerator(v8::internal::Zone*,
   v8::internal::compiler::Frame*, v8::internal::compiler::Linkage*,
   v8::internal::compiler::InstructionSequence*, v8::internal::OptimizedCompilationInfo*,
   v8::internal::Isolate*, v8::base::Optional<v8::internal::compiler::OsrHelper>, int,
   v8::internal::JumpOptimizationInfo*, v8::internal::PoisoningMitigationLevel,
   v8::internal::AssemblerOptions const&, int, unsigned long,
   std::__ndk1::unique_ptr<v8::internal::AssemblerBuffer,
   std::__ndk1::default_delete<v8::internal::AssemblerBuffer> >) */

void __thiscall
v8::internal::compiler::CodeGenerator::CodeGenerator
          (CodeGenerator *this,Zone *param_1,Frame *param_2,undefined8 param_3,long param_4,
          long param_5,undefined8 param_6,undefined8 *param_8,int param_9,undefined8 param_10,
          undefined4 param_11,undefined8 param_12,undefined4 param_13,undefined8 param_14,
          undefined8 *param_15)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Zone *pZVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  long *local_68;
  
  *(undefined8 *)(this + 0x10) = param_6;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = param_3;
  *(long *)(this + 0x28) = param_4;
  *(undefined ***)this = &PTR__CodeGenerator_01cca578;
  *(Zone **)(this + 8) = param_1;
  *(Zone **)(this + 0x30) = param_1;
  EhFrameWriter::EhFrameWriter((EhFrameWriter *)(this + 0x38),param_1);
  *(undefined2 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(Zone **)(this + 0x98) = param_1;
  if (FLAG_perf_prof_unwinding_info != '\0') {
    EhFrameWriter::Initialize((EhFrameWriter *)(this + 0x38));
  }
  *(long *)(this + 0xa0) = param_5;
  pZVar4 = *(Zone **)(this + 8);
  lVar5 = *(long *)(pZVar4 + 0x10);
  uVar3 = (((*(long **)(param_4 + 0x10))[1] - **(long **)(param_4 + 0x10)) * 0x20000000 >> 0x20) * 8
  ;
  if (uVar3 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar5) ||
      uVar3 - (*(long *)(pZVar4 + 0x18) - lVar5) == 0) {
    *(ulong *)(pZVar4 + 0x10) = uVar3 + lVar5;
  }
  else {
    lVar5 = Zone::NewExpand(pZVar4,uVar3);
  }
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  *(long *)(this + 0xa8) = lVar5;
  *(undefined8 *)(this + 0xb0) = 0;
  *(ulong *)(this + 0xc0) =
       (-(ulong)(param_9 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_9 + 1U) << 1) &
       0xffff80007fffffff;
  *(undefined8 *)(this + 200) = 0;
  local_68 = (long *)*param_15;
  *param_15 = 0;
  TurboAssemblerBase::TurboAssemblerBase
            ((TurboAssemblerBase *)(this + 0xd0),param_6,param_12,0,&local_68);
  *(undefined ***)(this + 0xd0) = &PTR__Assembler_01cbd510;
  auVar8 = TurboAssembler::DefaultTmpList();
  *(undefined1 (*) [16])(this + 0x268) = auVar8;
  auVar8 = TurboAssembler::DefaultFPTmpList();
  plVar1 = local_68;
  *(undefined1 (*) [16])(this + 0x278) = auVar8;
  local_68 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  uVar6 = *(undefined8 *)(this + 8);
  this[0x290] = (CodeGenerator)0xd;
  *(CodeGenerator **)(this + 0x288) = this;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = uVar6;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  this[700] = (CodeGenerator)0x0;
  *(undefined8 *)(this + 0x2c0) = uVar6;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e0) = uVar6;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x310) = uVar6;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x330) = uVar6;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x360) = uVar6;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x380) = uVar6;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x398) = uVar6;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3c0) = param_14;
  this[0x3c8] = (CodeGenerator)0x0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  uVar7 = *param_8;
  uVar6 = param_8[2];
  *(undefined8 *)(this + 1000) = param_8[1];
  *(undefined8 *)(this + 0x3e0) = uVar7;
  *(undefined8 *)(this + 0x3f8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x3f0) = uVar6;
  SourcePositionTableBuilder::SourcePositionTableBuilder
            ((SourcePositionTableBuilder *)(this + 0x400),2);
  uVar6 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined4 *)(this + 0x458) = 0;
  *(undefined4 *)(this + 0x45c) = param_11;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x488) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x480) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x498) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x490) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x450) = uVar6;
  *(undefined8 *)(this + 0x478) = uVar6;
  *(undefined8 *)(this + 0x4b8) = uVar6;
  if (0 < (int)((ulong)((*(long **)(param_4 + 0x10))[1] - **(long **)(param_4 + 0x10)) >> 3)) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*(long *)(this + 0xa8) + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)((ulong)((*(long **)(param_4 + 0x10))[1] - **(long **)(param_4 + 0x10)) >>
                          3));
  }
  FinishFrame(this,param_2);
  pZVar4 = *(Zone **)(this + 8);
  puVar2 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar2) < 0x18) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar2 + 3;
  }
  *puVar2 = param_2;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 0xc) = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *(undefined8 **)(this + 0x18) = puVar2;
  if ((*(int *)(param_5 + 0x38) == -1) != (this[0x3e0] != (CodeGenerator)0x0)) {
    *(undefined8 *)(this + 0x198) = param_10;
    if ((*(int *)(param_5 + 8) - 5U < 4) || (*(int *)(param_5 + 8) == 10)) {
      this[0x25a] = (CodeGenerator)0x1;
    }
    *(undefined4 *)(this + 0x25c) = param_13;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","info->is_osr() == osr_helper_.has_value()");
}

