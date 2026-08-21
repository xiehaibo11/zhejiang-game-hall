
/* v8::internal::wasm::CompilationState::AddCallback(std::__ndk1::function<void
   (v8::internal::wasm::CompilationEvent)>) */

void __thiscall
v8::internal::wasm::CompilationState::AddCallback(CompilationState *this,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = alStack_70;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)param_2[4];
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_2 == plVar3) {
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
    param_2[4] = 0;
    local_50 = plVar3;
  }
  base::Mutex::Lock((Mutex *)(this + 0x158));
  uVar1 = *(ulong *)(this + 0x188);
  if (uVar1 < *(ulong *)(this + 400)) {
    if (local_50 == (long *)0x0) {
      *(undefined8 *)(uVar1 + 0x20) = 0;
    }
    else if (alStack_70 == local_50) {
      *(ulong *)(uVar1 + 0x20) = uVar1;
      (**(code **)(*local_50 + 0x18))();
    }
    else {
      *(long **)(uVar1 + 0x20) = local_50;
      local_50 = (long *)0x0;
    }
    *(long *)(this + 0x188) = *(long *)(this + 0x188) + 0x30;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
    ::__emplace_back_slow_path<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>
              ((vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
                *)(this + 0x180),(function *)alStack_70);
  }
  base::Mutex::Unlock((Mutex *)(this + 0x158));
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_015e0df4;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_015e0df4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

