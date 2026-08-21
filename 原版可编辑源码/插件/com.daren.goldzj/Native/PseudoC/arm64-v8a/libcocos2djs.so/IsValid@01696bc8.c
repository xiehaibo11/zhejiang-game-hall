
/* v8::internal::compiler::InitialMapDependency::IsValid() const */

bool __thiscall v8::internal::compiler::InitialMapDependency::IsValid(InitialMapDependency *this)

{
  uint uVar1;
  bool bVar2;
  ulong *puVar3;
  uint *puVar4;
  ulong uVar5;
  
  puVar3 = (ulong *)JSFunctionRef::object((JSFunctionRef *)(this + 8));
  uVar1 = *(uint *)(*puVar3 + 0x1b);
  uVar5 = *puVar3 & 0xffffffff00000000;
  if (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar1) - 1)) == 0xa2) {
    puVar4 = (uint *)MapRef::object((MapRef *)(this + 0x18));
    bVar2 = uVar1 == *puVar4;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

