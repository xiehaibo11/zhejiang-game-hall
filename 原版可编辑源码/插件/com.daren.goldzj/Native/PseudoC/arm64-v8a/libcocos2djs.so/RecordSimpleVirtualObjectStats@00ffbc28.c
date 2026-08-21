
/* v8::internal::ObjectStatsCollectorImpl::RecordSimpleVirtualObjectStats(v8::internal::HeapObject,
   v8::internal::HeapObject, v8::internal::ObjectStats::VirtualInstanceType) */

uint __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordSimpleVirtualObjectStats
          (ObjectStatsCollectorImpl *this,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  ulong local_38;
  
  local_38 = param_3;
  iVar1 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_38,
                     param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 - 1));
  uVar2 = RecordVirtualObjectStats(this,param_2,param_3,param_4,(long)iVar1,0,0);
  return uVar2 & 1;
}

