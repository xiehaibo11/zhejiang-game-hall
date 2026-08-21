
/* v8::internal::Space::RemoveAllocationObserver(v8::internal::AllocationObserver*) */

void __thiscall
v8::internal::Space::RemoveAllocationObserver(Space *this,AllocationObserver *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)(this + 0x10);
  if ((__dest != puVar2) && ((AllocationObserver *)*__dest != param_1)) {
    puVar3 = __dest;
    do {
      __dest = puVar2;
      if (puVar2 + -1 == puVar3) break;
      puVar1 = puVar3 + 1;
      __dest = puVar3 + 1;
      puVar3 = __dest;
    } while ((AllocationObserver *)*puVar1 != param_1);
  }
  __n = (long)puVar2 - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x10) = __dest + ((long)__n >> 3);
                    /* WARNING: Could not recover jumptable at 0x01015d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x30))(this);
  return;
}

