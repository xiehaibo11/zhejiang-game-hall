
/* v8::base::Time::FromJsTime(double) */

long v8::base::Time::FromJsTime(double param_1)

{
  long lVar1;
  
  lVar1 = 0x7fffffffffffffff;
  if (param_1 != 1.7976931348623157e+308) {
    lVar1 = (long)(param_1 * 1000.0);
  }
  return lVar1;
}

