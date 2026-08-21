
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualJSGlobalObjectDetails(v8::internal::JSGlobalObject)
    */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualJSGlobalObjectDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_28;
  
  uVar6 = param_2 & 0xffffffff00000000;
  uVar5 = uVar6 | *(uint *)(param_2 + 3);
  uVar1 = *(uint *)(uVar5 + 0xf);
  uVar2 = *(uint *)(uVar5 + 7);
  uVar3 = *(uint *)(uVar5 + 0xb);
  local_28 = uVar5;
  iVar4 = HeapObject::SizeFromMap((HeapObject *)&local_28,uVar6 | *(uint *)(uVar5 - 1));
  RecordVirtualObjectStats
            (this,param_2,uVar5,0x27,(long)iVar4,
             (long)(int)((((uVar1 >> 1) - (uVar2 >> 1)) - (uVar3 >> 1)) * 4),0);
  uVar5 = uVar6 | *(uint *)(param_2 + 7);
  local_28 = uVar5;
  iVar4 = HeapObject::SizeFromMap((HeapObject *)&local_28,uVar6 | *(uint *)(uVar5 - 1));
  RecordVirtualObjectStats(this,param_2,uVar5,0x26,(long)iVar4,0,0);
  return;
}

