
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualAllocationSiteDetails(v8::internal::AllocationSite)
    */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualAllocationSiteDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  ulong local_18;
  
  if ((*(uint *)(param_2 + 3) & 1) != 0) {
    uVar5 = param_2 & 0xffffffff00000000;
    uVar6 = uVar5 | *(uint *)(param_2 + 3);
    local_38 = uVar6;
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x423) {
      local_18 = uVar6;
      iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_18,uVar5 | *(uint *)(uVar6 - 1));
      lVar4 = (long)iVar2;
      uVar3 = 0x28;
    }
    else {
      iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_38,uVar5 | *(uint *)(uVar6 - 1));
      RecordVirtualObjectStats(this,param_2,uVar6,0x2a,(long)iVar2,0,0);
      uVar6 = local_38 & 0xffffffff00000000;
      if ((*(uint *)((uVar6 | 0xb) + (ulong)*(uint *)(local_38 - 1)) >> 0x15 & 1) == 0) {
        uVar1 = *(uint *)(local_38 + 3);
        if (((uVar1 & 1) == 0) || (uVar1 == *(uint *)(uVar6 + 0x168))) {
          uVar6 = *(ulong *)(uVar6 + 0x3b8);
        }
        else {
          uVar6 = uVar6 | uVar1;
        }
        local_18 = uVar6;
        iVar2 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_18,
                           uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1));
        lVar4 = (long)iVar2;
        uVar3 = 0x10;
      }
      else {
        if ((*(uint *)(local_38 + 3) & 1) == 0) {
          uVar6 = *(ulong *)(uVar6 + 0x410);
        }
        else {
          uVar6 = uVar6 | *(uint *)(local_38 + 3);
        }
        local_18 = uVar6;
        iVar2 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_18,
                           uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1));
        lVar4 = (long)iVar2;
        uVar3 = 0x11;
      }
    }
    RecordVirtualObjectStats(this,param_2,uVar6,uVar3,lVar4,0,0);
    uVar5 = local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 7);
    local_18 = uVar5;
    iVar2 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_18,
                       local_38 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1));
    RecordVirtualObjectStats(this,param_2,uVar5,0xf,(long)iVar2,0,0);
  }
  return;
}

