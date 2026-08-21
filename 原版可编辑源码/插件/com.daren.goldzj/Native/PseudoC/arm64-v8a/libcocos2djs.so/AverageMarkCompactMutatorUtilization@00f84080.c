
/* v8::internal::GCTracer::AverageMarkCompactMutatorUtilization() const */

undefined1  [16] __thiscall
v8::internal::GCTracer::AverageMarkCompactMutatorUtilization(GCTracer *this)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = *(double *)(this + 0xb28) + *(double *)(this + 0xb20);
  dVar2 = 1.0;
  if (dVar1 != 0.0) {
    dVar2 = *(double *)(this + 0xb20) / dVar1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2;
  return auVar3;
}

