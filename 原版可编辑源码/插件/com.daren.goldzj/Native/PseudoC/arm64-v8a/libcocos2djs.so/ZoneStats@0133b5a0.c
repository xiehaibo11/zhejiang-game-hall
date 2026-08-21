
/* v8::internal::compiler::ZoneStats::ZoneStats(v8::internal::AccountingAllocator*) */

void __thiscall
v8::internal::compiler::ZoneStats::ZoneStats(ZoneStats *this,AccountingAllocator *param_1)

{
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(AccountingAllocator **)(this + 0x40) = param_1;
  return;
}

