
/* v8::internal::GCIdleTimeHandler::EstimateMarkingStepSize(double, double) */

long v8::internal::GCIdleTimeHandler::EstimateMarkingStepSize(double param_1,double param_2)

{
  long lVar1;
  double dVar2;
  
  dVar2 = 102400.0;
  if (param_2 != 0.0) {
    dVar2 = param_2;
  }
  lVar1 = (long)(dVar2 * param_1 * 0.9);
  if (734003200.0 <= dVar2 * param_1) {
    lVar1 = 0x2bc00000;
  }
  return lVar1;
}

