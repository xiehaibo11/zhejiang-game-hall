
/* v8::internal::TurboAssemblerBase::IsAddressableThroughRootRegister(v8::internal::Isolate*,
   v8::internal::ExternalReference const&) */

bool v8::internal::TurboAssemblerBase::IsAddressableThroughRootRegister
               (Isolate *param_1,ExternalReference *param_2)

{
  return (ulong)(*(long *)param_2 - (long)param_1) < 0x8848;
}

