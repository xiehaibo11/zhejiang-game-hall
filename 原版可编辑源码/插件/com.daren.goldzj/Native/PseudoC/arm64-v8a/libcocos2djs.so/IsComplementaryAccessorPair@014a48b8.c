
/* v8::internal::IsComplementaryAccessorPair(v8::internal::VariableMode, v8::internal::VariableMode)
    */

bool v8::internal::IsComplementaryAccessorPair(char param_1,char param_2)

{
  if (param_1 == '\b') {
    return param_2 == '\t';
  }
  if (param_1 == '\t') {
    return param_2 == '\b';
  }
  return false;
}

