
/* v8::internal::DateCache::TimeClip(double) */

undefined1  [16] v8::internal::DateCache::TimeClip(double param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  
  dVar2 = NAN;
  if ((-8.64e+15 <= param_1) && (param_1 <= 8.64e+15)) {
    if ((param_1 != 0.0) && ((ABS(param_1) != INFINITY && (!NAN(ABS(param_1)))))) {
      param_1 = (double)(long)param_1;
    }
    dVar2 = param_1 + 0.0;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar2;
  return auVar1;
}

