
/* v8::internal::FixedArrayBuilder::HasCapacity(int) */

bool __thiscall v8::internal::FixedArrayBuilder::HasCapacity(FixedArrayBuilder *this,int param_1)

{
  return *(int *)(this + 8) + param_1 <= *(int *)(**(long **)this + 3) >> 1;
}

