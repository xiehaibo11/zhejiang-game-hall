
/* v8::internal::Builtins::GenerateOffHeapTrampolineFor(v8::internal::Isolate*, unsigned long, int,
   bool) */

undefined8
v8::internal::Builtins::GenerateOffHeapTrampolineFor
          (Isolate *param_1,ulong param_2,int param_3,bool param_4)

{
  long lVar1;
  undefined8 uVar2;
  CodeBuilder aCStack_3b0 [24];
  undefined8 local_398;
  int local_38c;
  undefined1 local_378;
  undefined1 local_377;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 local_330;
  undefined8 local_328;
  Isolate *local_318 [33];
  MacroAssembler aMStack_210 [384];
  undefined8 local_90;
  undefined1 local_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00edd184(local_318,param_1);
  local_80 = 1;
  if (param_4) {
    MacroAssembler::JumpToInstructionStream(aMStack_210,param_2);
  }
  else {
    TurboAssembler::Trap((TurboAssembler *)aMStack_210);
  }
  local_328 = 0;
  uStack_368 = 0;
  local_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  local_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  local_330 = 0;
  Assembler::GetCode((Assembler *)aMStack_210,local_318[0],(CodeDesc *)&local_370,
                     (SafepointTableBuilder *)0x0,0);
  Factory::CodeBuilder::CodeBuilder(aCStack_3b0,param_1,&local_370,3);
  local_377 = 1;
  local_398 = local_90;
  local_38c = param_3;
  local_378 = param_4;
  uVar2 = Factory::CodeBuilder::Build(aCStack_3b0);
  Assembler::~Assembler((Assembler *)aMStack_210);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

