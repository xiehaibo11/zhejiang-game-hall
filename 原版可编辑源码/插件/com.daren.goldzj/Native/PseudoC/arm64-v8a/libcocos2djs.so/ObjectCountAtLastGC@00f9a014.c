
/* v8::internal::Heap::ObjectCountAtLastGC(unsigned long) */

undefined8 __thiscall v8::internal::Heap::ObjectCountAtLastGC(Heap *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 < 0x489) && (*(long *)(this + 0x850) != 0)) {
    uVar1 = *(undefined8 *)(*(long *)(this + 0x850) + param_1 * 8 + 0x2450);
  }
  return uVar1;
}

