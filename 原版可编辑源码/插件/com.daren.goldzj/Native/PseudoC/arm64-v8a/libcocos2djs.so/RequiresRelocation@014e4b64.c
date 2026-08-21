
/* v8::internal::RelocInfo::RequiresRelocation(v8::internal::Code) */

bool v8::internal::RelocInfo::RequiresRelocation(undefined8 param_1)

{
  RelocIterator aRStack_50 [56];
  char local_18;
  
  RelocIterator::RelocIterator(aRStack_50,param_1,0x141);
  return local_18 == '\0';
}

