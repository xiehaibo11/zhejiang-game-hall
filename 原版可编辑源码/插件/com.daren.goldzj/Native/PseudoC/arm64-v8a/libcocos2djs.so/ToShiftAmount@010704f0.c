
/* v8::internal::MutableBigInt::ToShiftAmount(v8::internal::Handle<v8::internal::BigIntBase>) */

bool v8::internal::MutableBigInt::ToShiftAmount(long *param_1)

{
  if ((*(uint *)(*param_1 + 3) & 0x7ffffffc) != 0) {
    return false;
  }
  return *(ulong *)(*param_1 + 7) < 0x40000001;
}

