
/* v8::internal::DoubleToBoolean(double) */

undefined8 v8::internal::DoubleToBoolean(double param_1)

{
  if (((ulong)param_1 >> 0x34 & 0x7ff) == 0) {
    if (((ulong)param_1 & 0xfffff00000000) != 0 || SUB84(param_1,0) != 0) {
      return 1;
    }
  }
  else if ((((uint)((ulong)param_1 >> 0x34) & 0x7ff) != 0x7ff) ||
          (((ulong)param_1 & 0xfffff00000000) == 0 && SUB84(param_1,0) == 0)) {
    return 1;
  }
  return 0;
}

