
/* v8::internal::Heap::AutomaticallyRestoreInitialHeapLimit(double) */

void __thiscall v8::internal::Heap::AutomaticallyRestoreInitialHeapLimit(Heap *this,double param_1)

{
  double dVar1;
  
  dVar1 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x70));
  *(long *)(this + 0x78) = (long)(dVar1 * param_1);
  return;
}

