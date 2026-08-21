
/* v8::internal::GCTracer::IncrementalMarkingSpeedInBytesPerMillisecond() const */

undefined1  [16] __thiscall
v8::internal::GCTracer::IncrementalMarkingSpeedInBytesPerMillisecond(GCTracer *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  
  auVar1._0_8_ = *(double *)(this + 0x9d0);
  if (auVar1._0_8_ != 0.0) {
    auVar1._8_8_ = 0;
    return auVar1;
  }
  if (*(double *)(this + 0x9c0) != 0.0) {
    dVar3 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x9b8));
    auVar2._0_8_ = dVar3 / *(double *)(this + 0x9c0);
    auVar2._8_8_ = 0;
    return auVar2;
  }
  return ZEXT816(0x4100000000000000);
}

