
/* v8::internal::Heap::PrintMaxNewSpaceSizeReached() */

void __thiscall v8::internal::Heap::PrintMaxNewSpaceSizeReached(Heap *this)

{
  StressScavengeObserver::MaxNewSpaceSizeReached(*(StressScavengeObserver **)(this + 0x198));
  PrintF("\n### Maximum new space size reached = %.02lf\n");
  return;
}

