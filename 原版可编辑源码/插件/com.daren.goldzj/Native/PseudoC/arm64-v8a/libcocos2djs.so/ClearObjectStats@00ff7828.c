
/* v8::internal::ObjectStats::ClearObjectStats(bool) */

void __thiscall v8::internal::ObjectStats::ClearObjectStats(ObjectStats *this,bool param_1)

{
  memset(this + 8,0,0x2448);
  memset(this + 0x4898,0,0x2448);
  memset(this + 0x9128,0,0x2448);
  memset(this + 0xb570,0,0x24480);
  memset(this + 0x2f9f0,0,0x24480);
  if (param_1) {
    memset(this + 0x2450,0,0x2448);
    memset(this + 0x6ce0,0,0x2448);
  }
  *(undefined8 *)(this + 0x53ea0) = 0;
  *(undefined8 *)(this + 0x53e88) = 0;
  *(undefined8 *)(this + 0x53e80) = 0;
  *(undefined8 *)(this + 0x53e98) = 0;
  *(undefined8 *)(this + 0x53e90) = 0;
  *(undefined8 *)(this + 0x53e78) = 0;
  *(undefined8 *)(this + 0x53e70) = 0;
  return;
}

