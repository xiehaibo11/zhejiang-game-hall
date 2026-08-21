
/* v8::internal::compiler::KeyedAccessMode::IsStore() const */

bool __thiscall v8::internal::compiler::KeyedAccessMode::IsStore(KeyedAccessMode *this)

{
  return *(int *)this - 1U < 2;
}

