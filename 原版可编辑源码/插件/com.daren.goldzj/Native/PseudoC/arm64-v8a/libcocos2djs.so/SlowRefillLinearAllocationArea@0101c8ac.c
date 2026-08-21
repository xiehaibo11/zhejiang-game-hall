
/* v8::internal::CompactionSpace::SlowRefillLinearAllocationArea(int,
   v8::internal::AllocationOrigin) */

void v8::internal::CompactionSpace::SlowRefillLinearAllocationArea(void)

{
  PagedSpace::RawSlowRefillLinearAllocationArea();
  return;
}

