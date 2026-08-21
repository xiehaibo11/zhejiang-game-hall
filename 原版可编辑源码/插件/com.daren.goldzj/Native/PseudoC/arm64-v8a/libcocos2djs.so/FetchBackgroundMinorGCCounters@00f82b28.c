
/* v8::internal::GCTracer::FetchBackgroundMinorGCCounters() */

void __thiscall v8::internal::GCTracer::FetchBackgroundMinorGCCounters(GCTracer *this)

{
  base::Mutex::Lock((Mutex *)(this + 0x1130));
  *(double *)(this + 0x3d0) = *(double *)(this + 0x1190) + *(double *)(this + 0x3d0);
  *(double *)(this + 0x3d8) = *(double *)(this + 0x1198) + *(double *)(this + 0x3d8);
  *(undefined8 *)(this + 0x1198) = 0;
  *(undefined8 *)(this + 0x1190) = 0;
  *(double *)(this + 0x3e0) = *(double *)(this + 0x11a0) + *(double *)(this + 0x3e0);
  *(double *)(this + 1000) = *(double *)(this + 0x11a8) + *(double *)(this + 1000);
  *(undefined8 *)(this + 0x11a8) = 0;
  *(undefined8 *)(this + 0x11a0) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x1130));
  Histogram::AddSample((int)*(undefined8 *)(*(long *)this + 0xcd0) + 0x58);
  return;
}

