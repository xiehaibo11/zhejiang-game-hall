
/* v8::internal::AllocationTracker::UnresolvedLocation::~UnresolvedLocation() */

void __thiscall
v8::internal::AllocationTracker::UnresolvedLocation::~UnresolvedLocation(UnresolvedLocation *this)

{
  if (*(ulong **)this != (ulong *)0x0) {
    GlobalHandles::Destroy(*(ulong **)this);
    return;
  }
  return;
}

