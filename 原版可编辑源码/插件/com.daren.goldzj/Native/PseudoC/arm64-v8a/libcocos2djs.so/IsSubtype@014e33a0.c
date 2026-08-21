
/* v8::internal::IsSubtype(v8::internal::MachineRepresentation, v8::internal::MachineRepresentation)
    */

bool v8::internal::IsSubtype(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  if (param_1 == (param_2 & 0xff)) {
    return true;
  }
  if (param_1 - 6 < 2) {
    return (param_2 & 0xff) == 8;
  }
  if (param_1 == 9) {
    return (param_2 & 0xff) == 10;
  }
  return false;
}

