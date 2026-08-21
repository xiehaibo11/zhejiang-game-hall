
/* v8::internal::wasm::AsyncCompileJob::CompileStep::Run(v8::internal::wasm::AsyncCompileJob*, bool)
    */

void __thiscall
v8::internal::wasm::AsyncCompileJob::CompileStep::Run
          (CompileStep *this,AsyncCompileJob *param_1,bool param_2)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  SaveAndSwitchContext aSStack_58 [24];
  
  if (param_2) {
    pIVar3 = *(Isolate **)param_1;
    uVar1 = *(undefined8 *)(pIVar3 + 0x95a0);
    lVar2 = *(long *)(pIVar3 + 0x95a8);
    *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + 1;
    SaveAndSwitchContext::SaveAndSwitchContext
              (aSStack_58,*(undefined8 *)param_1,**(undefined8 **)(param_1 + 0x38));
    (**(code **)(*(long *)this + 0x10))(this,param_1);
    SaveContext::~SaveContext((SaveContext *)aSStack_58);
    if (pIVar3 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar3 + 0x95a0) = uVar1;
      *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + -1;
      if (*(long *)(pIVar3 + 0x95a8) != lVar2) {
        *(long *)(pIVar3 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(pIVar3);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x015ebda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this,param_1);
  return;
}

