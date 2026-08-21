
/* v8::internal::interpreter::Register::AreContiguous(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register, v8::internal::interpreter::Register,
   v8::internal::interpreter::Register, v8::internal::interpreter::Register) */

bool v8::internal::interpreter::Register::AreContiguous
               (int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (((param_1 + 1 == param_2) && ((param_3 == 0x7fffffff || (param_2 + 1 == param_3)))) &&
     ((param_4 == 0x7fffffff || (param_3 + 1 == param_4)))) {
    return param_5 == 0x7fffffff || param_4 + 1 == param_5;
  }
  return false;
}

