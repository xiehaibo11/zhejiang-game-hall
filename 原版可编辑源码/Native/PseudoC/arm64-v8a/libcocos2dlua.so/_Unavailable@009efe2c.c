
/* universe::core::Unavailable<void*, (void*)0>::~Unavailable() */

void __thiscall
universe::core::Unavailable<void*,(void*)0>::~Unavailable(Unavailable<void*,(void*)0> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}

