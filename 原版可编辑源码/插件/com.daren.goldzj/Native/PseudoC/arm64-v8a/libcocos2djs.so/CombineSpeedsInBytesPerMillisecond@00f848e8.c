
/* v8::internal::GCTracer::CombineSpeedsInBytesPerMillisecond(double, double) */

double v8::internal::GCTracer::CombineSpeedsInBytesPerMillisecond(double param_1,double param_2)

{
  if (0.5 <= param_2) {
    param_1 = (param_1 * param_2) / (param_1 + param_2);
  }
  return param_1;
}

