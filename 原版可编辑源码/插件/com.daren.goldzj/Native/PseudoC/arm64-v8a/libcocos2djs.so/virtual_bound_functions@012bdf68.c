
/* v8::internal::compiler::Hints::virtual_bound_functions() const */

undefined8 __thiscall v8::internal::compiler::Hints::virtual_bound_functions(Hints *this)

{
  if (*(long *)this != 0) {
    return *(undefined8 *)(*(long *)this + 0x20);
  }
  return 0;
}

