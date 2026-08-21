
/* v8::internal::DebugFeatureTracker::Track(v8::internal::DebugFeatureTracker::Feature) */

void __thiscall v8::internal::DebugFeatureTracker::Track(DebugFeatureTracker *this,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if ((*(uint *)(this + 8) & uVar1) == 0) {
    Histogram::AddSample((int)*(undefined8 *)(*(long *)this + 0x9520) + 0xf8);
    *(uint *)(this + 8) = *(uint *)(this + 8) | uVar1;
  }
  return;
}

