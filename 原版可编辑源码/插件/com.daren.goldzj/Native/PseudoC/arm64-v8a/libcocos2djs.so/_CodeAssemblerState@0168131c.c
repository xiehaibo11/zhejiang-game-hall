
/* v8::internal::compiler::CodeAssemblerState::~CodeAssemblerState() */

void __thiscall
v8::internal::compiler::CodeAssemblerState::~CodeAssemblerState(CodeAssemblerState *this)

{
  void *pvVar1;
  CodeAssemblerState *pCVar2;
  code *pcVar3;
  
  pvVar1 = *(void **)(this + 0xa0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar1;
    operator_delete(pvVar1);
  }
  pCVar2 = *(CodeAssemblerState **)(this + 0x90);
  if (this + 0x70 == pCVar2) {
    pcVar3 = *(code **)(*(long *)pCVar2 + 0x20);
LAB_01681364:
    (*pcVar3)();
  }
  else if (pCVar2 != (CodeAssemblerState *)0x0) {
    pcVar3 = *(code **)(*(long *)pCVar2 + 0x28);
    goto LAB_01681364;
  }
  pCVar2 = *(CodeAssemblerState **)(this + 0x60);
  if (this + 0x40 == pCVar2) {
    pcVar3 = *(code **)(*(long *)pCVar2 + 0x20);
  }
  else {
    if (pCVar2 == (CodeAssemblerState *)0x0) goto LAB_01681394;
    pcVar3 = *(code **)(*(long *)pCVar2 + 0x28);
  }
  (*pcVar3)();
LAB_01681394:
  std::__ndk1::
  __tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
  ::destroy((__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  pvVar1 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

