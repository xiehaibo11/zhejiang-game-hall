
/* v8::internal::GCIdleTimeHandler::ShouldDoFinalIncrementalMarkCompact(double, unsigned long,
   double) */

bool v8::internal::GCIdleTimeHandler::ShouldDoFinalIncrementalMarkCompact
               (double param_1,ulong param_2,double param_3)

{
  double dVar1;
  
  dVar1 = 2097152.0;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  dVar1 = (double)NEON_fminnm((double)param_2 / dVar1,0x408f400000000000);
  return dVar1 <= param_1;
}

