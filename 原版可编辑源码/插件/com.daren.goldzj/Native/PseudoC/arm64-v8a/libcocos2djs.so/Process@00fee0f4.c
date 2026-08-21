
/* v8::internal::ToSpaceUpdatingItem<v8::internal::MinorNonAtomicMarkingState>::Process() */

void __thiscall
v8::internal::ToSpaceUpdatingItem<v8::internal::MinorNonAtomicMarkingState>::Process
          (ToSpaceUpdatingItem<v8::internal::MinorNonAtomicMarkingState> *this)

{
  if ((*(byte *)(*(long *)(this + 0x10) + 9) >> 2 & 1) == 0) {
    ProcessVisitAll(this);
    return;
  }
  ProcessVisitLive(this);
  return;
}

