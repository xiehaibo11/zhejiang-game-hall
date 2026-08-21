
/* v8::internal::IncrementalMarking::Deactivate() */

void v8::internal::IncrementalMarking::Deactivate(void)

{
  IncrementalMarking *in_x0;
  
  DeactivateIncrementalWriteBarrier(in_x0);
  return;
}

