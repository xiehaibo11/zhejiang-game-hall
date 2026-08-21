
/* v8::internal::RelocInfo::HasTargetAddressAddress() const */

bool __thiscall v8::internal::RelocInfo::HasTargetAddressAddress(RelocInfo *this)

{
  return (1 << (ulong)((byte)this[8] & 0x1f) & 0x4dbU) != 0;
}

