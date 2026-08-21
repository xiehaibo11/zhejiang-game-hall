
/* v8::internal::interpreter::StoreLookupSlotFlags::Encode(v8::internal::LanguageMode,
   v8::internal::LookupHoistingMode) */

uint v8::internal::interpreter::StoreLookupSlotFlags::Encode(uint param_1,int param_2)

{
  return param_1 & 1 | (uint)(param_2 != 0) << 1;
}

