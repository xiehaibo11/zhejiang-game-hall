
/* v8::internal::ExternalReference::try_internalize_string_function() */

code * v8::internal::ExternalReference::try_internalize_string_function(void)

{
  return StringTable::LookupStringIfExists_NoAllocate;
}

