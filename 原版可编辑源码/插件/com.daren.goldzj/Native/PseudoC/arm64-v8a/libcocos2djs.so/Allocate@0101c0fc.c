
/* v8::internal::FreeListManyCachedOrigin::Allocate(unsigned long, unsigned long*,
   v8::internal::AllocationOrigin) */

void v8::internal::FreeListManyCachedOrigin::Allocate(void)

{
  int in_w3;
  
  if (in_w3 == 2) {
    FreeListManyCached::Allocate();
    return;
  }
  FreeListManyCachedFastPath::Allocate();
  return;
}

