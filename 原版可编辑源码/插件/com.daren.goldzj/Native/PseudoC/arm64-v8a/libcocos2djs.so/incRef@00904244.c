
/* se::RefCounter::incRef() */

void __thiscall se::RefCounter::incRef(RefCounter *this)

{
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

