
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualSharedFunctionInfoDetails(v8::internal::SharedFunctionInfo)
    */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualSharedFunctionInfoDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong local_28;
  
  uVar1 = *(uint *)(param_2 + 3);
  uVar3 = param_2 & 0xffffffff00000000;
  if ((uVar1 == 0x84) ||
     (((uVar1 & 1) != 0 &&
      (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x95 < 2)))) {
    local_28 = param_2;
    iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_28,uVar3 | *(uint *)(param_2 - 1));
    RecordVirtualObjectStats(this,0,param_2,0x4d,(long)iVar2,0,0);
  }
  return;
}

