
/* v8::internal::CpuSampler::~CpuSampler() */

void __thiscall v8::internal::CpuSampler::~CpuSampler(CpuSampler *this)

{
  sampler::Sampler::~Sampler((Sampler *)this);
  operator_delete(this);
  return;
}

