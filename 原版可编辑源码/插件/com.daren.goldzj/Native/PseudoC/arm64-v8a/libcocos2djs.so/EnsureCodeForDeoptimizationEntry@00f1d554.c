
/* v8::internal::Deoptimizer::EnsureCodeForDeoptimizationEntry(v8::internal::Isolate*,
   v8::internal::DeoptimizeKind) */

void __thiscall
v8::internal::Deoptimizer::EnsureCodeForDeoptimizationEntry
          (Deoptimizer *this,ulong param_1,undefined1 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *local_298 [7];
  undefined1 local_25e;
  long *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined **local_200 [24];
  undefined1 local_140;
  undefined8 local_88;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (2 < ((uint)param_1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kind == DeoptimizeKind::kEager || kind == DeoptimizeKind::kSoft || kind == DeoptimizeKind::kLazy"
            );
  }
  piVar5 = (int *)(*(long *)(this + 0x9570) + (param_1 & 0xff) * 8 + 8);
  if (*piVar5 == 0) {
    NewAssemblerBuffer((internal *)0x4000,(uint)param_1);
    AssemblerOptions::Default((AssemblerOptions *)this,(Isolate *)0x0,(bool)param_3);
    local_298[0] = local_258;
    local_258 = (long *)0x0;
    TurboAssemblerBase::TurboAssemblerBase
              ((TurboAssemblerBase *)local_200,this,&local_250,1,local_298);
    plVar2 = local_298[0];
    local_298[0] = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_200[0] = &PTR__Assembler_01cbd510;
    local_68 = TurboAssembler::DefaultTmpList();
    local_58 = TurboAssembler::DefaultFPTmpList();
    plVar2 = local_258;
    local_258 = (long *)0x0;
    local_200[0] = &PTR__Assembler_01ca1048;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_140 = 0;
    GenerateDeoptimizationEntries(local_200,local_88,param_1 & 0xffffffff);
    local_208 = 0;
    uStack_248 = 0;
    local_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    local_210 = 0;
    Assembler::GetCode((Assembler *)local_200,(Isolate *)this,(CodeDesc *)&local_250,
                       (SafepointTableBuilder *)0x0,0);
    Factory::CodeBuilder::CodeBuilder((CodeBuilder *)local_298,this,&local_250,2);
    local_25e = 0;
    puVar3 = (undefined8 *)Factory::CodeBuilder::Build((CodeBuilder *)local_298);
    uVar4 = Heap::IsImmovable((Heap *)(this + 0x8850),*puVar3);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","isolate->heap()->IsImmovable(*code)");
    }
    if (*piVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","data->deopt_entry_code(kind).is_null()");
    }
    *(undefined8 *)piVar5 = *puVar3;
    Assembler::~Assembler((Assembler *)local_200);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

