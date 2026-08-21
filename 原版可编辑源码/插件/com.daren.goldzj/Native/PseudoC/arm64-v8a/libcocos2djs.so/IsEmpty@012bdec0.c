
/* v8::internal::compiler::Hints::IsEmpty() const */

bool __thiscall v8::internal::compiler::Hints::IsEmpty(Hints *this)

{
  long *plVar1;
  
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
    return true;
  }
  if (*plVar1 != 0) {
    return false;
  }
  if (plVar1[1] != 0) {
    return false;
  }
  if (plVar1[2] != 0) {
    return false;
  }
  if (plVar1[3] != 0) {
    return false;
  }
  return plVar1[4] == 0;
}

