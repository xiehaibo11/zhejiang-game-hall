
/* v8::internal::SamplingEventsProcessor::~SamplingEventsProcessor() */

void __thiscall
v8::internal::SamplingEventsProcessor::~SamplingEventsProcessor(SamplingEventsProcessor *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR__SamplingEventsProcessor_01cb6338;
  *(undefined ***)(this + 0x30) = &PTR_CodeEventHandler_01cb6378;
  sampler::Sampler::Stop(*(Sampler **)(this + 0x80180));
  plVar1 = *(long **)(this + 0x80180);
  *(undefined8 *)(this + 0x80180) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ProfilerEventsProcessor::~ProfilerEventsProcessor((ProfilerEventsProcessor *)this);
  return;
}

