
/* v8::internal::compiler::KeyedAccessMode::IsLoad() const */

bool __thiscall v8::internal::compiler::KeyedAccessMode::IsLoad(KeyedAccessMode *this)

{
  return *(int *)this == 0 || *(int *)this == 3;
}

