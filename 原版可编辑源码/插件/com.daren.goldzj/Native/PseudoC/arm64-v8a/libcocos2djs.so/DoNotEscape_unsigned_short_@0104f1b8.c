
/* bool v8::internal::JsonStringifier::DoNotEscape<unsigned short>(unsigned short) */

bool v8::internal::JsonStringifier::DoNotEscape<unsigned_short>(ushort param_1)

{
  if (param_1 < 0x23) {
    return false;
  }
  if ((param_1 != 0x5c) && (param_1 != 0x7f)) {
    return param_1 >> 0xb != 0x1b;
  }
  return false;
}

