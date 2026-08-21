
/* v8::internal::LookupIterator::HolderIsReceiver() const */

bool __thiscall v8::internal::LookupIterator::HolderIsReceiver(LookupIterator *this)

{
  if (((byte)*this >> 1 & 1) == 0) {
    return true;
  }
  return **(int **)(this + 0x30) == **(int **)(this + 0x38);
}

