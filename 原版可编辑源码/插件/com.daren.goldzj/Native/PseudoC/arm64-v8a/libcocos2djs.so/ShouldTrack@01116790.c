
/* v8::internal::AllocationSite::ShouldTrack(v8::internal::ElementsKind, v8::internal::ElementsKind)
    */

void v8::internal::AllocationSite::ShouldTrack(void)

{
  IsMoreGeneralElementsKindTransition();
  return;
}

