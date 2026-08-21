
/* btQuantizedBvh::calculateSerializeBufferSize() const */

int __thiscall btQuantizedBvh::calculateSerializeBufferSize(btQuantizedBvh *this)

{
  uint uVar1;
  
  uVar1 = 6;
  if (this[0x40] != (btQuantizedBvh)0x0) {
    uVar1 = 4;
  }
  return (*(int *)(this + 0x3c) << (ulong)uVar1) + *(int *)(this + 0xf0) * 0x20 + 0xf8;
}

