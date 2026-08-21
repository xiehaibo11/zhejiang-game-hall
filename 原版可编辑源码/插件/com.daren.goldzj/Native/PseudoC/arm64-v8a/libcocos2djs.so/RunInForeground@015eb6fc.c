
/* v8::internal::wasm::AsyncCompileJob::CompileFinished::RunInForeground(v8::internal::wasm::AsyncCompileJob*)
    */

void __thiscall
v8::internal::wasm::AsyncCompileJob::CompileFinished::RunInForeground
          (CompileFinished *this,AsyncCompileJob *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  CompilationState *pCVar5;
  code *pcVar6;
  undefined **local_70;
  long lStack_68;
  long local_60;
  long *local_50;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  NativeModule::SampleCodeSize
            (*(NativeModule **)(param_1 + 0x58),*(undefined8 *)(*(long *)param_1 + 0x9520),0);
  lStack_68 = *(long *)(param_1 + 0x58);
  local_60 = *(long *)(param_1 + 0x60);
  pCVar5 = *(CompilationState **)(lStack_68 + 0x100);
  if (local_60 != 0) {
    plVar1 = (long *)(local_60 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_70 = &PTR_FUN_01cc9c90;
  local_50 = (long *)&local_70;
  CompilationState::AddCallback(pCVar5,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_015eb7a0;
    pcVar6 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar6)();
LAB_015eb7a0:
  FinishCompile(param_1);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

