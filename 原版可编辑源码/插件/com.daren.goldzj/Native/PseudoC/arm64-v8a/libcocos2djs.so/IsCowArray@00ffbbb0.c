
/* v8::internal::ObjectStatsCollectorImpl::IsCowArray(v8::internal::FixedArrayBase) */

bool __thiscall
v8::internal::ObjectStatsCollectorImpl::IsCowArray(ObjectStatsCollectorImpl *this,long param_2)

{
  return *(int *)(param_2 + -1) == *(int *)(*(long *)this + -0x8768);
}

