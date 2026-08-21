
/* v8::internal::compiler::FieldConstnessDependency::IsValid() const */

uint __thiscall
v8::internal::compiler::FieldConstnessDependency::IsValid(FieldConstnessDependency *this)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)MapRef::object((MapRef *)(this + 8));
  return *(uint *)((*(long *)(this + 0x18) * 0xc00000000 + 0x1000000000 >> 0x20 | 3U) +
                  (*puVar1 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar1 + 0x17))) >> 3 & 1;
}

