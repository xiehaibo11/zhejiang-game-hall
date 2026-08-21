
/* v8::internal::Heap::ComputeMutatorUtilization(char const*, double, double) */

undefined1  [16] __thiscall
v8::internal::Heap::ComputeMutatorUtilization
          (Heap *this,char *param_1,double param_2,double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined8 uVar3;
  
  dVar2 = 0.0;
  if (param_2 != 0.0) {
    dVar2 = 200000.0;
    if (param_3 != 0.0) {
      dVar2 = param_3;
    }
    dVar2 = dVar2 / (dVar2 + param_2);
  }
  uVar3 = 0;
  if (FLAG_trace_mutator_utilization != '\0') {
    Isolate::PrintWithTimestamp
              ((char *)(this + -0x8850),dVar2,
               "%s mutator utilization = %.3f (mutator_speed=%.f, gc_speed=%.f)\n",param_1);
  }
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = dVar2;
  return auVar1;
}

