
/* v8::V8::SetFlagsFromString(char const*) */

void v8::V8::SetFlagsFromString(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  internal::FlagList::SetFlagsFromString(param_1,sVar1);
  internal::FlagList::EnforceFlagImplications();
  return;
}

