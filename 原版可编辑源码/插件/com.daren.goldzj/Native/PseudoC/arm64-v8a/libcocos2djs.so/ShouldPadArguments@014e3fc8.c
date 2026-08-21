
/* v8::internal::ShouldPadArguments(int) */

uint v8::internal::ShouldPadArguments(int param_1)

{
  return param_1 & 1;
}

