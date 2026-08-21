
/* v8::internal::ObjectStatsCollectorImpl::CanRecordFixedArray(v8::internal::FixedArrayBase) */

bool __thiscall
v8::internal::ObjectStatsCollectorImpl::CanRecordFixedArray
          (ObjectStatsCollectorImpl *this,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (param_2 == *(int *)(lVar1 + -0x86e8)) {
    return false;
  }
  if (param_2 == *(int *)(lVar1 + -0x8470)) {
    return false;
  }
  if (param_2 == *(int *)(lVar1 + -0x8468)) {
    return false;
  }
  return param_2 != *(int *)(lVar1 + -0x8440);
}

