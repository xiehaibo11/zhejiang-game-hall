
/* v8::internal::ObjectStatsCollectorImpl::ShouldRecordObject(v8::internal::HeapObject,
   v8::internal::ObjectStatsCollectorImpl::CowMode) */

bool __thiscall
v8::internal::ObjectStatsCollectorImpl::ShouldRecordObject
          (ObjectStatsCollectorImpl *this,ulong param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = (int)param_2;
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x76) {
    return iVar2 != *(int *)(*(long *)this + -0x8498);
  }
  if (param_3 == 1) {
    lVar3 = *(long *)this;
    bVar1 = true;
  }
  else {
    lVar3 = *(long *)this;
    bVar1 = *(int *)(param_2 - 1) != *(int *)(lVar3 + -0x8768);
  }
  if (iVar2 == *(int *)(lVar3 + -0x86e8)) {
    return false;
  }
  if (iVar2 == *(int *)(lVar3 + -0x8470)) {
    return false;
  }
  if (iVar2 == *(int *)(lVar3 + -0x8468)) {
    return false;
  }
  return (bool)(bVar1 & iVar2 != *(int *)(lVar3 + -0x8440));
}

