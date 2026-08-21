
/* v8::internal::GCTracer::FetchBackgroundGeneralCounters() */

void __thiscall v8::internal::GCTracer::FetchBackgroundGeneralCounters(GCTracer *this)

{
  double dVar1;
  double dVar2;
  
  base::Mutex::Lock((Mutex *)(this + 0x1130));
  dVar2 = *(double *)(this + 0x1160);
  dVar1 = *(double *)(this + 0x1158);
  *(undefined8 *)(this + 0x1160) = 0;
  *(undefined8 *)(this + 0x1158) = 0;
  *(double *)(this + 0x3a0) = dVar2 + *(double *)(this + 0x3a0);
  *(double *)(this + 0x398) = dVar1 + *(double *)(this + 0x398);
  dVar1 = *(double *)(this + 0x1168);
  *(undefined8 *)(this + 0x1168) = 0;
  *(double *)(this + 0x3a8) = dVar1 + *(double *)(this + 0x3a8);
  base::Mutex::Unlock((Mutex *)(this + 0x1130));
  return;
}

