
/* v8::internal::FixedArrayBuilder::capacity() */

int __thiscall v8::internal::FixedArrayBuilder::capacity(FixedArrayBuilder *this)

{
  return *(int *)(**(long **)this + 3) >> 1;
}

