
/* v8::internal::ScavengeJob::EnoughIdleTimeForScavenge(double, double, unsigned long) */

bool v8::internal::ScavengeJob::EnoughIdleTimeForScavenge
               (double param_1,double param_2,ulong param_3)

{
  double dVar1;
  
  dVar1 = 262144.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  return (double)param_3 <= dVar1 * param_1;
}

