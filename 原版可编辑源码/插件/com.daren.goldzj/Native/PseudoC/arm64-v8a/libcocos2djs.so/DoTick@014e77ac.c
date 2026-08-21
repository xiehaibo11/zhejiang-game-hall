
/* v8::internal::TickCounter::DoTick() */

void __thiscall v8::internal::TickCounter::DoTick(TickCounter *this)

{
  *(long *)this = *(long *)this + 1;
  return;
}

