
/* v8::debug::SetContextId(v8::Local<v8::Context>, int) */

void v8::debug::SetContextId(long *param_1,int param_2)

{
  *(int *)(*param_1 + 0xab) = param_2 << 1;
  return;
}

