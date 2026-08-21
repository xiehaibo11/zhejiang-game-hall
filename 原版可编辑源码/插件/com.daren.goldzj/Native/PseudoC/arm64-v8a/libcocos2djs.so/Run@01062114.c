
/* v8::internal::SamplingThread::Run() */

void __thiscall v8::internal::SamplingThread::Run(SamplingThread *this)

{
  Sampler SVar1;
  Sampler *this_00;
  
  this_00 = *(Sampler **)(this + 0x30);
  SVar1 = this_00[0x20];
  while (((byte)SVar1 & 1) != 0) {
    sampler::Sampler::DoSample(this_00);
    base::OS::Sleep((long)*(int *)(this + 0x38));
    this_00 = *(Sampler **)(this + 0x30);
    SVar1 = this_00[0x20];
  }
  return;
}

