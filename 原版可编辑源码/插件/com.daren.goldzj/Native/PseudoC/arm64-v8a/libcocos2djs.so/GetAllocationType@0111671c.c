
/* v8::internal::AllocationSite::GetAllocationType() const */

bool __thiscall v8::internal::AllocationSite::GetAllocationType(AllocationSite *this)

{
  return (*(uint *)(*(long *)this + 0xf) & 0x1c000000) == 0xc000000;
}

