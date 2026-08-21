
/* v8::internal::wasm::CompilationState::top_tier_compilation_finished() const */

bool __thiscall
v8::internal::wasm::CompilationState::top_tier_compilation_finished(CompilationState *this)

{
  int iVar1;
  
  base::Mutex::Lock((Mutex *)(this + 0x158));
  iVar1 = *(int *)(this + 0x19c);
  base::Mutex::Unlock((Mutex *)(this + 0x158));
  return iVar1 == 0;
}

