
/* v8::internal::Heap::ObjectSizeAtLastGC(unsigned long) */

undefined8 __thiscall v8::internal::Heap::ObjectSizeAtLastGC(Heap *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 < 0x489) && (*(long *)(this + 0x850) != 0)) {
    uVar1 = *(undefined8 *)(*(long *)(this + 0x850) + param_1 * 8 + 0x6ce0);
  }
  return uVar1;
}

