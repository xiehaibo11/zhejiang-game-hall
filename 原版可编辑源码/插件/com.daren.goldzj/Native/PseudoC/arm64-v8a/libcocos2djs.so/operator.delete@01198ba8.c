
/* v8::internal::SamplingEventsProcessor::operator delete(void*) */

void __thiscall
v8::internal::SamplingEventsProcessor::operator_delete(SamplingEventsProcessor *this,void *param_1)

{
  AlignedFree(this);
  return;
}

