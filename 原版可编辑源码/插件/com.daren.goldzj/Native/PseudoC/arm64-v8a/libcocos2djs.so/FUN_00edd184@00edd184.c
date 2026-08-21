
/* WARNING: Removing unreachable block (ram,0x00edd24c) */

void FUN_00edd184(undefined8 *param_1,AssemblerOptions *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *local_60;
  long *local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = param_2;
  v8::internal::ExternalAssemblerBuffer((internal *)(param_1 + 1),(void *)0x100,(int)param_3);
  v8::internal::AssemblerOptions::Default(param_2,(Isolate *)0x0,SUB81(param_3,0));
  local_58 = local_60;
  v8::internal::TurboAssemblerBase::TurboAssemblerBase
            ((TurboAssemblerBase *)(param_1 + 0x21),param_2,auStack_50,1,&local_58);
  plVar2 = local_58;
  local_58 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[0x21] = &PTR__Assembler_01cbd510;
  auVar3 = v8::internal::TurboAssembler::DefaultTmpList();
  *(undefined1 (*) [16])(param_1 + 0x54) = auVar3;
  auVar3 = v8::internal::TurboAssembler::DefaultFPTmpList();
  *(undefined1 (*) [16])(param_1 + 0x56) = auVar3;
  param_1[0x21] = &PTR__Assembler_01ca1048;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

