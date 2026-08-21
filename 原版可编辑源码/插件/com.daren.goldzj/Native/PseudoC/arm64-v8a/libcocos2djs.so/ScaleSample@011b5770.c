
/* v8::internal::SamplingHeapProfiler::ScaleSample(unsigned long, unsigned int) const */

uint v8::internal::SamplingHeapProfiler::ScaleSample(ulong param_1,uint param_2)

{
  double dVar1;
  
  dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0xe0));
  exp(-(double)param_2 / dVar1);
  return param_2;
}

