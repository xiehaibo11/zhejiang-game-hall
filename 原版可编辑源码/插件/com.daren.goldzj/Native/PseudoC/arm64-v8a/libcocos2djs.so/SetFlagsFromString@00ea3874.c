
/* v8::V8::SetFlagsFromString(char const*, unsigned long) */

void v8::V8::SetFlagsFromString(char *param_1,ulong param_2)

{
  internal::FlagList::SetFlagsFromString(param_1,param_2);
  internal::FlagList::EnforceFlagImplications();
  return;
}

