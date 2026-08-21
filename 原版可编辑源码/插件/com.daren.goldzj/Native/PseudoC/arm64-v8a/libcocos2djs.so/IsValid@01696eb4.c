
/* v8::internal::compiler::StableMapDependency::IsValid() const */

bool __thiscall v8::internal::compiler::StableMapDependency::IsValid(StableMapDependency *this)

{
  long *plVar1;
  
  plVar1 = (long *)MapRef::object((MapRef *)(this + 8));
  return (*(uint *)(*plVar1 + 0xb) & 0x2000000) == 0;
}

