
/* v8::internal::TurboAssemblerBase::RootRegisterOffsetForExternalReference(v8::internal::Isolate*,
   v8::internal::ExternalReference const&) */

long v8::internal::TurboAssemblerBase::RootRegisterOffsetForExternalReference
               (Isolate *param_1,ExternalReference *param_2)

{
  return *(long *)param_2 - (long)param_1;
}

