
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualObjectsForConstantPoolOrEmbeddedObjects(v8::internal::HeapObject,
   v8::internal::HeapObject, v8::internal::ObjectStats::VirtualInstanceType) */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualObjectsForConstantPoolOrEmbeddedObjects
          (ObjectStatsCollectorImpl *this,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong local_38;
  
  uVar5 = param_3 & 0xffffffff00000000;
  local_38 = param_3;
  iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_38,uVar5 | *(uint *)(param_3 - 1));
  uVar3 = RecordVirtualObjectStats(this,param_2,param_3,param_4,(long)iVar2,0,0);
  if ((((uVar3 & 1) != 0) && (*(short *)((uVar5 | 7) + (ulong)*(uint *)(param_3 - 1)) == 0x76)) &&
     (iVar2 = *(int *)(param_3 + 3), 1 < iVar2)) {
    iVar4 = 0;
    lVar6 = 0;
    uVar1 = *(uint *)(param_3 + 7);
    while( true ) {
      if ((uVar1 & 1) != 0) {
        RecordVirtualObjectsForConstantPoolOrEmbeddedObjects(this,param_3,uVar5 | uVar1,param_4);
        iVar2 = *(int *)(param_3 + 3);
      }
      lVar6 = lVar6 + 1;
      iVar4 = iVar4 + 4;
      if (iVar2 >> 1 <= lVar6) break;
      uVar1 = *(uint *)((long)(param_3 + 7) + (long)iVar4);
    }
  }
  return;
}

