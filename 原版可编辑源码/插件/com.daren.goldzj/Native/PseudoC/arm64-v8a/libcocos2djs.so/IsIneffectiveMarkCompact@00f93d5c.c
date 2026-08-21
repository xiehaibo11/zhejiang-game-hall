
/* v8::internal::Heap::IsIneffectiveMarkCompact(unsigned long, double) */

bool __thiscall
v8::internal::Heap::IsIneffectiveMarkCompact(Heap *this,ulong param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x58));
  return param_2 < 0.4 && dVar1 * 0.8 <= (double)param_1;
}

