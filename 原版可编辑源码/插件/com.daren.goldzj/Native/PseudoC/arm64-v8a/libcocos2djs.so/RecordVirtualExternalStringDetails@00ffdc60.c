
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualExternalStringDetails(v8::internal::ExternalString)
    */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualExternalStringDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong local_28;
  
  uVar3 = *(undefined8 *)(param_2 + 0xb);
  local_28 = param_2;
  iVar1 = ExternalString::ExternalPayloadSize((ExternalString *)&local_28);
  uVar2 = 0x4a;
  if ((*(ushort *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) & 8) == 0)
  {
    uVar2 = 0x4b;
  }
  RecordExternalResourceStats(this,uVar3,uVar2,(long)iVar1);
  return;
}

