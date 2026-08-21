
/* v8::internal::compiler::Hints::virtual_closures() const */

undefined8 __thiscall v8::internal::compiler::Hints::virtual_closures(Hints *this)

{
  if (*(long *)this != 0) {
    return *(undefined8 *)(*(long *)this + 0x10);
  }
  return 0;
}

