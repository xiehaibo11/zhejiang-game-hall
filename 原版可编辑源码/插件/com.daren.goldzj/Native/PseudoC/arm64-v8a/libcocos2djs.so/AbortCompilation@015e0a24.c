
/* v8::internal::wasm::CompilationState::AbortCompilation() */

void __thiscall v8::internal::wasm::CompilationState::AbortCompilation(CompilationState *this)

{
  long *plVar1;
  __shared_weak_count *this_00;
  long *plVar2;
  code *pcVar3;
  SharedMutex *this_01;
  long *plVar4;
  
  this_01 = *(SharedMutex **)(this + 8);
  base::SharedMutex::LockExclusive(this_01);
  this_00 = *(__shared_weak_count **)(this_01 + 0x40);
  *(undefined8 *)(this_01 + 0x38) = 0;
  *(undefined8 *)(this_01 + 0x40) = 0;
  if (this_00 != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak(this_00);
  }
  base::SharedMutex::UnlockExclusive(this_01);
  base::Mutex::Lock((Mutex *)(this + 0x158));
  plVar1 = *(long **)(this + 0x180);
  plVar4 = *(long **)(this + 0x188);
joined_r0x015e0a70:
  if (plVar4 == plVar1) {
    *(long **)(this + 0x188) = plVar1;
    base::Mutex::Unlock((Mutex *)(this + 0x158));
    return;
  }
  plVar2 = (long *)plVar4[-2];
  plVar4 = plVar4 + -6;
  if (plVar4 != plVar2) goto code_r0x015e0a9c;
  pcVar3 = *(code **)(*plVar2 + 0x20);
  goto LAB_015e0a80;
code_r0x015e0a9c:
  if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
LAB_015e0a80:
    (*pcVar3)();
  }
  goto joined_r0x015e0a70;
}

