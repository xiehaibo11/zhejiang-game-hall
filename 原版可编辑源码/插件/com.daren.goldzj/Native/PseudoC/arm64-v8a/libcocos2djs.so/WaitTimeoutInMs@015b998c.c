
/* v8::internal::WaitTimeoutInMs(double) */

undefined1  [16] v8::internal::WaitTimeoutInMs(double param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = INFINITY;
  if (0.0 <= param_1) {
    dVar1 = param_1 / 1000000.0;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar1;
  return auVar2;
}

