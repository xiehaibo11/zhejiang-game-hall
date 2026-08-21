
/* v8::internal::compiler::Hints::virtual_contexts() const */

undefined8 __thiscall v8::internal::compiler::Hints::virtual_contexts(Hints *this)

{
  if (*(long *)this != 0) {
    return *(undefined8 *)(*(long *)this + 0x18);
  }
  return 0;
}

