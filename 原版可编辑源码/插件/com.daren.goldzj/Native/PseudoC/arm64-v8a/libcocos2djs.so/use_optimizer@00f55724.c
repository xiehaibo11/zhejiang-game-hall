
/* v8::internal::Isolate::use_optimizer() */

bool __thiscall v8::internal::Isolate::use_optimizer(Isolate *this)

{
  if ((FLAG_opt != '\0') && (this[0xb6b8] == (Isolate)0x0)) {
    return *(int *)(this + 0xb810) != 1;
  }
  return false;
}

