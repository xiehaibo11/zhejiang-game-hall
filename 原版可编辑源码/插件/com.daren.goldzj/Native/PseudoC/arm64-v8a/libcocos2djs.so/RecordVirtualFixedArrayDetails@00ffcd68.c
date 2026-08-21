
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualFixedArrayDetails(v8::internal::FixedArray)
    */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualFixedArrayDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  int iVar1;
  ulong local_28;
  
  if (*(int *)(param_2 - 1) == *(int *)(*(long *)this + -0x8768)) {
    local_28 = param_2;
    iVar1 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_28,
                       param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
    RecordVirtualObjectStats(this,0,param_2,0x14,(long)iVar1,0,1);
  }
  return;
}

