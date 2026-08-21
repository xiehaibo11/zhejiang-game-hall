
/* v8::internal::compiler::TransitionDependency::IsValid() const */

bool __thiscall v8::internal::compiler::TransitionDependency::IsValid(TransitionDependency *this)

{
  long *plVar1;
  
  plVar1 = (long *)MapRef::object((MapRef *)(this + 8));
  return (*(uint *)(*plVar1 + 0xb) & 0x1000000) == 0;
}

