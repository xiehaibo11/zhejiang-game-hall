
/* v8::internal::interpreter::CreateClosureFlags::Encode(bool, bool, bool) */

byte v8::internal::interpreter::CreateClosureFlags::Encode(bool param_1,bool param_2,bool param_3)

{
  if ((!param_1 && !param_3) && ((param_2 ^ 0xffU) & 1) == 0) {
    param_1 = (bool)(param_1 | 2);
  }
  return param_1;
}

