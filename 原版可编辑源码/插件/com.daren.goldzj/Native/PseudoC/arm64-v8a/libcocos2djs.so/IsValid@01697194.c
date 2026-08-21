
/* v8::internal::compiler::ElementsKindDependency::IsValid() const */

bool __thiscall
v8::internal::compiler::ElementsKindDependency::IsValid(ElementsKindDependency *this)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)AllocationSiteRef::object((AllocationSiteRef *)(this + 8));
  uVar2 = *(uint *)(*puVar1 + 3);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar2 >> 1 & 0x1f;
  }
  else {
    uVar3 = *puVar1 & 0xffffffff00000000;
    uVar2 = (uint)(*(byte *)((uVar3 | 10) + (ulong)*(uint *)((uVar3 | uVar2) - 1)) >> 3);
  }
  return (byte)this[0x18] == uVar2;
}

