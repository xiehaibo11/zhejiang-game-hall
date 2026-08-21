
/* v8::internal::PreparseDataBuilder::HasDataForParent() const */

bool __thiscall v8::internal::PreparseDataBuilder::HasDataForParent(PreparseDataBuilder *this)

{
  if (((byte)this[0x4c] & 3) == 2) {
    return true;
  }
  return *(long *)(this + 0x38) != 0;
}

