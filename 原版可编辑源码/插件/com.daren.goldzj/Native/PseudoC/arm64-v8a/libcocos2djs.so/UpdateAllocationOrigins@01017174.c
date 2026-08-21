
/* v8::internal::SpaceWithLinearArea::UpdateAllocationOrigins(v8::internal::AllocationOrigin) */

void __thiscall
v8::internal::SpaceWithLinearArea::UpdateAllocationOrigins(SpaceWithLinearArea *this,int param_2)

{
  *(long *)(this + (long)param_2 * 8 + 0x80) = *(long *)(this + (long)param_2 * 8 + 0x80) + 1;
  return;
}

