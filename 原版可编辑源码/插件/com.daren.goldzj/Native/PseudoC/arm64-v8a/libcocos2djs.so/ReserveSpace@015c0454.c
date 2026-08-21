
/* v8::internal::DeserializerAllocator::ReserveSpace() */

bool __thiscall v8::internal::DeserializerAllocator::ReserveSpace(DeserializerAllocator *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Heap::ReserveSpace(*(Heap **)(this + 0x100),(vector *)this,(vector *)(this + 0xd0));
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(undefined8 *)(this + 0xa0) = *(undefined8 *)(*(long *)this + 8);
    *(undefined8 *)(this + 0xa8) = *(undefined8 *)(*(long *)(this + 0x18) + 8);
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(*(long *)(this + 0x30) + 8);
    *(undefined8 *)(this + 0xb8) = *(undefined8 *)(*(long *)(this + 0x48) + 8);
  }
  return bVar1;
}

