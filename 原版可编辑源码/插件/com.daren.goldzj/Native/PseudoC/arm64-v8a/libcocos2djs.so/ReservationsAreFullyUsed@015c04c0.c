
/* v8::internal::DeserializerAllocator::ReservationsAreFullyUsed() const */

bool __thiscall
v8::internal::DeserializerAllocator::ReservationsAreFullyUsed(DeserializerAllocator *this)

{
  if (((*(long *)(this + 8) - *(long *)this >> 3) * -0x5555555555555555 -
       (ulong)(*(uint *)(this + 0x90) + 1) == 0) &&
     (*(long *)(*(long *)this + (ulong)*(uint *)(this + 0x90) * 0x18 + 0x10) ==
      *(long *)(this + 0xa0))) {
    if (((*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3) * -0x5555555555555555 -
         (ulong)(*(uint *)(this + 0x94) + 1) == 0) &&
       (*(long *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 0x94) * 0x18 + 0x10) ==
        *(long *)(this + 0xa8))) {
      if (((*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3) * -0x5555555555555555 -
           (ulong)(*(uint *)(this + 0x98) + 1) == 0) &&
         (*(long *)(*(long *)(this + 0x30) + (ulong)*(uint *)(this + 0x98) * 0x18 + 0x10) ==
          *(long *)(this + 0xb0))) {
        if (((*(long *)(this + 0x50) - *(long *)(this + 0x48) >> 3) * -0x5555555555555555 -
             (ulong)(*(uint *)(this + 0x9c) + 1) == 0) &&
           (*(long *)(*(long *)(this + 0x48) + (ulong)*(uint *)(this + 0x9c) * 0x18 + 0x10) ==
            *(long *)(this + 0xb8))) {
          return (ulong)*(uint *)(this + 200) ==
                 *(long *)(this + 0xd8) - *(long *)(this + 0xd0) >> 3;
        }
      }
    }
  }
  return false;
}

