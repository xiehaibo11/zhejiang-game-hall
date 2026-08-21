
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualContext(v8::internal::Context) */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualContext
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_30;
  ulong local_28;
  
  uVar3 = param_2 & 0xffffffff00000000;
  local_30 = param_2;
  if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x8f) {
    iVar1 = HeapObject::SizeFromMap((HeapObject *)&local_30);
    uVar2 = 0x8f;
  }
  else {
    if (*(short *)((uVar3 | *(uint *)(param_2 - 1)) + 7) != 0x8d) {
      local_28 = param_2;
      iVar1 = HeapObject::SizeFromMap((HeapObject *)&local_28,uVar3 | *(uint *)(param_2 - 1));
      RecordVirtualObjectStats(this,0,param_2,0x39,(long)iVar1,0,0);
      return;
    }
    iVar1 = HeapObject::SizeFromMap((HeapObject *)&local_30,uVar3 | *(uint *)(param_2 - 1));
    uVar2 = 0x8d;
  }
  RecordObjectStats(this,param_2,uVar2,(long)iVar1,0);
  return;
}

