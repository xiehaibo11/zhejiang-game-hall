
/* v8::internal::GCIdleTimeHandler::Compute(double, v8::internal::GCIdleTimeHeapState) */

undefined8 __thiscall
v8::internal::GCIdleTimeHandler::Compute(double param_1,undefined8 param_2,int *param_3)

{
  if ((int)param_1 < 1) {
    if (((((char)param_3[6] != '\0') && (*(ulong *)(param_3 + 4) < 0x6400001)) &&
        (*(double *)(param_3 + 2) < 100.0)) && ((0 < *param_3 && (0.0 < *(double *)(param_3 + 2)))))
    {
      return 2;
    }
  }
  else if ((FLAG_incremental_marking != '\0') && ((char)param_3[6] == '\0')) {
    return 1;
  }
  return 0;
}

