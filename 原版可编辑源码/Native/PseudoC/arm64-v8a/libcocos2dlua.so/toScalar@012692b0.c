
/* btConvexHullInternal::Int128::toScalar() const */

float __thiscall btConvexHullInternal::Int128::toScalar(Int128 *this)

{
  float fVar1;
  long local_20;
  ulong uStack_18;
  
  uStack_18 = *(ulong *)(this + 8);
  if (-1 < (long)uStack_18) {
    return (float)uStack_18 * 1.8446744e+19 + (float)*(ulong *)this;
  }
  uStack_18 = ~uStack_18;
  local_20 = -*(long *)this;
  if (*(long *)this == 0) {
    uStack_18 = uStack_18 + 1;
  }
  fVar1 = (float)toScalar((Int128 *)&local_20);
  return -fVar1;
}

