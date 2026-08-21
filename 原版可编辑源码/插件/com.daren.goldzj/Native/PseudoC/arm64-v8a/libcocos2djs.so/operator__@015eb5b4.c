
/* v8::internal::wasm::AsyncCompileJob::CompilationStateCallback::TEMPNAMEPLACEHOLDERVALUE(v8::internal::wasm::CompilationEvent)
    */

void __thiscall
v8::internal::wasm::AsyncCompileJob::CompilationStateCallback::operator()
          (CompilationStateCallback *this,char param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  CancelableTask *pCVar7;
  undefined *puVar8;
  long *plVar9;
  CancelableTask *local_28;
  
  if (param_2 == '\x02') {
    piVar1 = (int *)(*(long *)this + 0x110);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) {
      return;
    }
    plVar9 = *(long **)this;
    puVar5 = operator_new(8);
    puVar8 = &CompileFailed::vtable;
  }
  else {
    if (param_2 == '\x01') {
      return;
    }
    if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    piVar1 = (int *)(*(long *)this + 0x110);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) {
      return;
    }
    plVar9 = *(long **)this;
    puVar5 = operator_new(8);
    puVar8 = &CompileFinished::vtable;
  }
  *puVar5 = puVar8 + 0x10;
  plVar6 = (long *)plVar9[0xd];
  plVar9[0xd] = (long)puVar5;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  pCVar7 = operator_new(0x38);
  CancelableTask::CancelableTask(pCVar7,*(CancelableTaskManager **)(*plVar9 + 0xc700));
  *(undefined ***)pCVar7 = &PTR__CompileTask_01cc9d78;
  local_28 = pCVar7 + 0x20;
  *(undefined **)local_28 = &DAT_01cc9da8;
  *(long **)(pCVar7 + 0x28) = plVar9;
  pCVar7[0x30] = (CancelableTask)0x1;
  plVar9[0x23] = (long)pCVar7;
  (*(code *)**(undefined8 **)plVar9[0x20])((undefined8 *)plVar9[0x20],&local_28);
  pCVar7 = local_28;
  local_28 = (CancelableTask *)0x0;
  if (pCVar7 != (CancelableTask *)0x0) {
    (**(code **)(*(long *)pCVar7 + 8))();
  }
  return;
}

