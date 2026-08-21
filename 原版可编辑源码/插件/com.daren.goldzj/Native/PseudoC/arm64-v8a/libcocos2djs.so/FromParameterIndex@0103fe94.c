
/* v8::internal::interpreter::Register::FromParameterIndex(int, int) */

int v8::internal::interpreter::Register::FromParameterIndex(int param_1,int param_2)

{
  return (param_1 - param_2) + -6;
}

