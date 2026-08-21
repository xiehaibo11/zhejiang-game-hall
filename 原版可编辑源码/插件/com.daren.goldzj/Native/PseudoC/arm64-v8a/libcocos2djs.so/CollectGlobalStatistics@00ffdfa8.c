
/* v8::internal::ObjectStatsCollectorImpl::CollectGlobalStatistics() */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::CollectGlobalStatistics(ObjectStatsCollectorImpl *this)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong local_18;
  
  lVar3 = *(long *)this;
  uVar4 = *(ulong *)(lVar3 + 0x5f0);
  if ((uVar4 & 1) != 0) {
    do {
      if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x55) break;
      RecordVirtualAllocationSiteDetails(this,uVar4);
      puVar1 = (uint *)(uVar4 + 0x17);
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*puVar1;
    } while ((*puVar1 & 1) != 0);
    lVar3 = *(long *)this;
  }
  uVar4 = *(ulong *)(lVar3 + -0x78c8);
  local_18 = uVar4;
  iVar2 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_18,
                     uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1));
  RecordVirtualObjectStats(this,0,uVar4,0x47,(long)iVar2,0,0);
  uVar4 = *(ulong *)(*(long *)this + -31000);
  local_18 = uVar4;
  iVar2 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_18,
                     uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1));
  RecordVirtualObjectStats(this,0,uVar4,0x32,(long)iVar2,0,0);
  uVar4 = *(ulong *)(*(long *)this + -0x7938);
  local_18 = uVar4;
  iVar2 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_18,
                     uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1));
  RecordVirtualObjectStats(this,0,uVar4,0x48,(long)iVar2,0,0);
  uVar4 = *(ulong *)(*(long *)this + -0x7930);
  local_18 = uVar4;
  iVar2 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_18,
                     uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1));
  RecordVirtualObjectStats(this,0,uVar4,0x49,(long)iVar2,0,0);
  uVar4 = *(ulong *)(*(long *)this + -0x7928);
  local_18 = uVar4;
  iVar2 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_18,
                     uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1));
  RecordVirtualObjectStats(this,0,uVar4,0x3e,(long)iVar2,0,0);
  uVar4 = *(ulong *)(*(long *)this + -0x78d8);
  local_18 = uVar4;
  iVar2 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_18,
                     uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1));
  RecordVirtualObjectStats(this,0,uVar4,0x40,(long)iVar2,0,0);
  uVar4 = *(ulong *)(*(long *)this + -0x78f8);
  local_18 = uVar4;
  iVar2 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_18,
                     uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1));
  RecordVirtualObjectStats(this,0,uVar4,0x41,(long)iVar2,0,0);
  return;
}

