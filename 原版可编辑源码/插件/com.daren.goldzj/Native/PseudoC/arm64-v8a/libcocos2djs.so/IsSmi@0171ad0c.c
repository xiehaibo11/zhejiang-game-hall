
/* v8::internal::compiler::ObjectRef::IsSmi() const */

bool __thiscall v8::internal::compiler::ObjectRef::IsSmi(ObjectRef *this)

{
  long lVar1;
  
  lVar1 = data(this);
  return *(int *)(lVar1 + 8) == 0;
}

