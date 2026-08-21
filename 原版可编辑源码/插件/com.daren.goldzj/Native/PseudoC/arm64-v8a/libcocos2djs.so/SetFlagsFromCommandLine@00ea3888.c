
/* v8::V8::SetFlagsFromCommandLine(int*, char**, bool) */

void v8::V8::SetFlagsFromCommandLine(int *param_1,char **param_2,bool param_3)

{
  internal::FlagList::SetFlagsFromCommandLine(param_1,param_2,param_3);
  return;
}

