
/* ResKey::~ResKey() */

void __thiscall ResKey::~ResKey(ResKey *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    *(undefined8 *)this = 0;
  }
  return;
}

