
/* bool v8::internal::JsonStringifier::DoNotEscape<unsigned char>(unsigned char) */

bool v8::internal::JsonStringifier::DoNotEscape<unsigned_char>(uchar param_1)

{
  return param_1 != '\\' && (byte)(param_1 - 0x23) < 0x5c;
}

