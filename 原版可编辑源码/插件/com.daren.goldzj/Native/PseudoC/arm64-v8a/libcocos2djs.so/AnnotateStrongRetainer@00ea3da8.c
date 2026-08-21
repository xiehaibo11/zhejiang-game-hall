
/* v8::V8::AnnotateStrongRetainer(unsigned long*, char const*) */

void v8::V8::AnnotateStrongRetainer(ulong *param_1,char *param_2)

{
  internal::GlobalHandles::AnnotateStrongRetainer(param_1,param_2);
  return;
}

