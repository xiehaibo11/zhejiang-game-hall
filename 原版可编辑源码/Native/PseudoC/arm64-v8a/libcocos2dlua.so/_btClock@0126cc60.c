
/* btClock::~btClock() */

void __thiscall btClock::~btClock(btClock *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}

