
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualScriptDetails(v8::internal::Script) */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualScriptDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_28;
  
  uVar6 = param_2 & 0xffffffff00000000;
  if ((*(uint *)(param_2 + 0x17) & 0xfffffffe) == 6) {
    uVar4 = *(ulong *)(uVar6 + 0x420);
  }
  else {
    uVar4 = uVar6 | *(uint *)(param_2 + 0x2b);
  }
  local_28 = uVar4;
  iVar1 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_28,
                     uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1));
  RecordVirtualObjectStats(this,param_2,uVar4,0x42,(long)iVar1,0,0);
  if ((*(uint *)(param_2 + 3) & 1) != 0) {
    uVar5 = uVar6 | *(uint *)(param_2 + 3);
    uVar4 = uVar6 | 7;
    local_28 = uVar5;
    if ((*(ushort *)(uVar4 + *(uint *)(uVar5 - 1)) < 0x40) &&
       ((*(ushort *)(uVar4 + *(uint *)(uVar5 - 1)) & 7) == 2)) {
      uVar3 = *(undefined8 *)(uVar5 + 0xb);
      iVar1 = ExternalString::ExternalPayloadSize((ExternalString *)&local_28);
      uVar2 = 0x43;
      if ((*(ushort *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) & 8) ==
          0) {
        uVar2 = 0x44;
      }
      RecordExternalResourceStats(this,uVar3,uVar2,(long)iVar1);
    }
    else if (*(ushort *)(uVar4 + *(uint *)(uVar5 - 1)) < 0x40) {
      uVar2 = 0x45;
      if ((*(ushort *)(uVar4 + *(uint *)(uVar5 - 1)) & 8) == 0) {
        uVar2 = 0x46;
      }
      iVar1 = HeapObject::SizeFromMap((HeapObject *)&local_28,uVar6 | *(uint *)(uVar5 - 1));
      RecordVirtualObjectStats(this,param_2,uVar5,uVar2,(long)iVar1,0,0);
    }
  }
  return;
}

