
/* v8::internal::GCIdleTimeHandler::EstimateFinalIncrementalMarkCompactTime(unsigned long, double)
    */

undefined1  [16]
v8::internal::GCIdleTimeHandler::EstimateFinalIncrementalMarkCompactTime
          (ulong param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = 2097152.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  auVar2._0_8_ = NEON_fminnm((double)param_1 / dVar1,0x408f400000000000);
  auVar2._8_8_ = 0;
  return auVar2;
}

