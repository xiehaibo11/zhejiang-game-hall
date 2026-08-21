
/* v8::internal::ICStats::Begin() */

void __thiscall v8::internal::ICStats::Begin(ICStats *this)

{
  if (TracingFlags::ic_stats == 0) {
    return;
  }
  *(undefined4 *)(this + 4) = 1;
  return;
}

