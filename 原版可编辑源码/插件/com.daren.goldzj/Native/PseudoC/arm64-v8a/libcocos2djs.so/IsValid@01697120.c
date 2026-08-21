
/* v8::internal::compiler::ProtectorDependency::IsValid() const */

bool __thiscall v8::internal::compiler::ProtectorDependency::IsValid(ProtectorDependency *this)

{
  long *plVar1;
  
  plVar1 = (long *)PropertyCellRef::object((PropertyCellRef *)(this + 8));
  return *(int *)(*plVar1 + 0xb) == 2;
}

