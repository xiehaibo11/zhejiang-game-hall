
/* v8::internal::IncrementalStringBuilder::Length() const */

int __thiscall v8::internal::IncrementalStringBuilder::Length(IncrementalStringBuilder *this)

{
  return *(int *)(this + 0x14) + *(int *)(**(long **)(this + 0x18) + 7);
}

