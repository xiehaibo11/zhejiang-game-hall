
/* v8::internal::GCTracer::FetchBackgroundMarkCompactCounters() */

void __thiscall v8::internal::GCTracer::FetchBackgroundMarkCompactCounters(GCTracer *this)

{
  base::Mutex::Lock((Mutex *)(this + 0x1130));
  *(double *)(this + 0x3b0) = *(double *)(this + 0x1170) + *(double *)(this + 0x3b0);
  *(double *)(this + 0x3b8) = *(double *)(this + 0x1178) + *(double *)(this + 0x3b8);
  *(undefined8 *)(this + 0x1178) = 0;
  *(undefined8 *)(this + 0x1170) = 0;
  *(double *)(this + 0x3c0) = *(double *)(this + 0x1180) + *(double *)(this + 0x3c0);
  *(double *)(this + 0x3c8) = *(double *)(this + 0x1188) + *(double *)(this + 0x3c8);
  *(undefined8 *)(this + 0x1188) = 0;
  *(undefined8 *)(this + 0x1180) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x1130));
  Histogram::AddSample((int)*(undefined8 *)(*(long *)this + 0xcd0) + 0x30);
  Histogram::AddSample((int)*(undefined8 *)(*(long *)this + 0xcd0) + 0x80);
  return;
}

