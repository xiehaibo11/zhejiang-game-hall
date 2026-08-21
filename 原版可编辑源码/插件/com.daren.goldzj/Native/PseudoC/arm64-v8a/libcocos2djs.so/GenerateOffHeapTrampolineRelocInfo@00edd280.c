
/* v8::internal::Builtins::GenerateOffHeapTrampolineRelocInfo(v8::internal::Isolate*) */

long * v8::internal::Builtins::GenerateOffHeapTrampolineRelocInfo(Isolate *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined8 local_318;
  Isolate *local_308 [33];
  MacroAssembler aMStack_200 [400];
  undefined1 local_70;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00edd184(local_308,param_1);
  local_70 = 1;
  MacroAssembler::JumpToInstructionStream(aMStack_200,0);
  local_318 = 0;
  uStack_358 = 0;
  local_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  local_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  local_320 = 0;
  Assembler::GetCode((Assembler *)aMStack_200,local_308[0],(CodeDesc *)&local_360,
                     (SafepointTableBuilder *)0x0,0);
  plVar4 = (long *)Factory::NewByteArray((Factory *)param_1,uStack_330._4_4_,4);
  uVar6 = (ulong)(int)uStack_330._4_4_;
  if (uStack_330._4_4_ != 0) {
    if (uStack_330._4_4_ < 8) {
      lVar7 = -uVar6;
      puVar5 = (undefined1 *)(*plVar4 + 7);
      do {
        puVar1 = (undefined1 *)(local_360 + (int)uStack_358 + lVar7);
        bVar3 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      } while (bVar3);
    }
    else {
      MemCopy((undefined1 *)(*plVar4 + 7),(void *)((local_360 + (int)uStack_358) - uVar6),uVar6);
    }
  }
  Assembler::~Assembler((Assembler *)aMStack_200);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar4;
}

