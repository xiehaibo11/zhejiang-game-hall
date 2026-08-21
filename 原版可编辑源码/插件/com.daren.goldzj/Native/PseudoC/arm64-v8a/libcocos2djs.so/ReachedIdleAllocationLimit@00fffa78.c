
/* v8::internal::ScavengeJob::ReachedIdleAllocationLimit(double, unsigned long, unsigned long) */

bool v8::internal::ScavengeJob::ReachedIdleAllocationLimit
               (double param_1,ulong param_2,ulong param_3)

{
  double dVar1;
  
  dVar1 = 1310720.0;
  if (param_1 != 0.0) {
    dVar1 = param_1 * 5.0;
  }
  if ((double)param_3 * 0.8 <= dVar1) {
    dVar1 = (double)param_3 * 0.8;
  }
  dVar1 = dVar1 + -1048576.0;
  if (dVar1 <= 524288.0) {
    dVar1 = 524288.0;
  }
  return dVar1 <= (double)param_2;
}

