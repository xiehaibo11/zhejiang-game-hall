
/* v8::debug::GetStackFrameId(v8::Local<v8::StackFrame>) */

int v8::debug::GetStackFrameId(long *param_1)

{
  return *(int *)(*param_1 + 0xf) >> 1;
}

