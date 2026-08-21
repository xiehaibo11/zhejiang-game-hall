
/* universe::core::Unavailable<unsigned char*, (unsigned char*)0>::~Unavailable() */

void __thiscall
universe::core::Unavailable<unsigned_char*,(unsigned_char*)0>::~Unavailable
          (Unavailable<unsigned_char*,(unsigned_char*)0> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}

