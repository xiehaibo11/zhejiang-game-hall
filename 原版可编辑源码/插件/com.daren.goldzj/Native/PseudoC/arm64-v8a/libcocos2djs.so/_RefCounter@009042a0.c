
/* se::RefCounter::~RefCounter() */

void __thiscall se::RefCounter::~RefCounter(RefCounter *this)

{
  operator_delete(this);
  return;
}

