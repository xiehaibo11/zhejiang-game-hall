
/* v8::internal::Sweeper::FilterSweepingPagesScope::~FilterSweepingPagesScope() */

void __thiscall
v8::internal::Sweeper::FilterSweepingPagesScope::~FilterSweepingPagesScope
          (FilterSweepingPagesScope *this)

{
  void *pvVar1;
  long lVar2;
  
  if (this[0x28] == (FilterSweepingPagesScope)0x0) {
    pvVar1 = *(void **)(this + 8);
    if (pvVar1 != (void *)0x0) {
      *(void **)(this + 0x10) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
  }
  else {
    lVar2 = *(long *)this;
    pvVar1 = *(void **)(lVar2 + 0xb0);
    if (pvVar1 != (void *)0x0) {
      *(void **)(lVar2 + 0xb8) = pvVar1;
      operator_delete(pvVar1);
      *(undefined8 *)(lVar2 + 0xb0) = 0;
      *(undefined8 *)(lVar2 + 0xb8) = 0;
      *(undefined8 *)(lVar2 + 0xc0) = 0;
    }
    *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)(this + 8);
    *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

