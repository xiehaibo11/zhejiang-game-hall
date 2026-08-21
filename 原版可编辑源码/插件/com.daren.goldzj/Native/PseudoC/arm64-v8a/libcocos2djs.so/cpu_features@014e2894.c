
/* v8::internal::ExternalReference::cpu_features() */

undefined4 * v8::internal::ExternalReference::cpu_features(void)

{
  return &CpuFeatures::supported_;
}

