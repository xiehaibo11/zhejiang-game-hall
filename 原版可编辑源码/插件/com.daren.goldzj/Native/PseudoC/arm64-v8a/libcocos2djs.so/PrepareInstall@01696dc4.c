
/* v8::internal::compiler::PrototypePropertyDependency::PrepareInstall() const */

void __thiscall
v8::internal::compiler::PrototypePropertyDependency::PrepareInstall
          (PrototypePropertyDependency *this)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)JSFunctionRef::object((JSFunctionRef *)(this + 8));
  uVar2 = *puVar1 & 0xffffffff00000000;
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | *(uint *)(*puVar1 + 0x1b)) - 1)) == 0xa2) {
    return;
  }
  JSFunction::EnsureHasInitialMap();
  return;
}

