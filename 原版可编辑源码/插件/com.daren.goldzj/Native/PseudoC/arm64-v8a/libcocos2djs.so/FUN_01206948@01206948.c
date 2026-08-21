
void FUN_01206948(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  Thread *this;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  this = (Thread *)
         v8::internal::wasm::WasmInterpreter::GetThread((WasmInterpreter *)(param_1 + 0x10),0);
  uVar5 = *(ulong *)(param_1 + 0x68);
  if ((uVar5 & uVar5 - 1) == 0) {
    uVar3 = uVar5 - 1 & param_2;
  }
  else {
    uVar3 = param_2;
    if (uVar5 <= param_2) {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = param_2 / uVar5;
      }
      uVar3 = param_2 - uVar3 * uVar5;
    }
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x60) + uVar3 * 8);
  do {
    do {
      plVar4 = (long *)*plVar4;
    } while (plVar4[1] != param_2);
  } while (plVar4[2] != param_2);
  uVar1 = *(uint *)(plVar4 + 3);
  iVar2 = *(int *)(param_1 + 0x78);
  v8::internal::wasm::WasmInterpreter::Thread::ActivationFrameBase(this,uVar1);
  if (uVar1 == iVar2 - 1U) {
    v8::internal::wasm::WasmInterpreter::Thread::GetFrameCount(this);
  }
  else {
    v8::internal::wasm::WasmInterpreter::Thread::ActivationFrameBase(this,uVar1 + 1);
  }
  v8::internal::wasm::WasmInterpreter::Thread::GetFrame((int)this);
  return;
}

