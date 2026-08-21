
/* void 
   v8::internal::wasm::AsyncCompileJob::DoImmediately<v8::internal::wasm::AsyncCompileJob::PrepareAndStartCompile,
   std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule> const&, bool, unsigned
   long&>(std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule> const&, bool&&, unsigned long&) */

void __thiscall
v8::internal::wasm::AsyncCompileJob::
DoImmediately<v8::internal::wasm::AsyncCompileJob::PrepareAndStartCompile,std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule>const&,bool,unsigned_long&>
          (AsyncCompileJob *this,shared_ptr *param_1,bool *param_2,ulong *param_3)

{
  CancelableTask *pCVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  CancelableTask *this_00;
  long *plVar7;
  ulong uVar8;
  
  puVar6 = operator_new(0x28);
  uVar2 = *(undefined8 *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    plVar7 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  bVar5 = *param_2;
  uVar8 = *param_3;
  puVar6[1] = uVar2;
  puVar6[2] = lVar3;
  *(bool *)(puVar6 + 3) = bVar5;
  puVar6[4] = uVar8;
  *puVar6 = &PTR__PrepareAndStartCompile_01cc9be8;
  plVar7 = *(long **)(this + 0x68);
  *(undefined8 **)(this + 0x68) = puVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  this_00 = operator_new(0x38);
  CancelableTask::CancelableTask(this_00,*(CancelableTaskManager **)(*(long *)this + 0xc700));
  pCVar1 = this_00 + 0x10;
  this_00[0x30] = (CancelableTask)0x1;
  *(undefined **)(this_00 + 0x20) = &DAT_01cc9da8;
  *(AsyncCompileJob **)(this_00 + 0x28) = this;
  *(undefined ***)this_00 = &PTR__CompileTask_01cc9d78;
  *(CancelableTask **)(this + 0x118) = this_00;
  do {
    if (*(int *)pCVar1 != 0) {
      ClearExclusiveLocal();
      goto LAB_015e47e0;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pCVar1,0x10);
    if (bVar5) {
      *(int *)pCVar1 = 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  (**(code **)(*(long *)this_00 + 0x18))(this_00);
LAB_015e47e0:
                    /* WARNING: Could not recover jumptable at 0x015e47f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this_00 + 8))(this_00);
  return;
}

