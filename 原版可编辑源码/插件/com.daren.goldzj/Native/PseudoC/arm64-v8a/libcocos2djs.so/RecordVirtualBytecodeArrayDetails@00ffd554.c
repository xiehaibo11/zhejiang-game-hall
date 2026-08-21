
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualBytecodeArrayDetails(v8::internal::BytecodeArray)
    */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualBytecodeArrayDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong local_58;
  
  uVar4 = param_2 & 0xffffffff00000000;
  uVar3 = uVar4 | *(uint *)(param_2 + 7);
  local_58 = uVar3;
  iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar4 | *(uint *)(uVar3 - 1));
  RecordVirtualObjectStats(this,param_2,uVar3,0x12,(long)iVar2,0,0);
  uVar3 = uVar4 | *(uint *)(param_2 + 7);
  iVar2 = *(int *)(uVar3 + 3);
  if (1 < iVar2) {
    iVar5 = 0;
    lVar6 = 0;
    uVar1 = *(uint *)(uVar3 + 7);
    while( true ) {
      if (((uVar1 & 1) != 0) &&
         (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) == 0x76)) {
        RecordVirtualObjectsForConstantPoolOrEmbeddedObjects(this,uVar3,uVar4 | uVar1,0x18);
        iVar2 = *(int *)(uVar3 + 3);
      }
      lVar6 = lVar6 + 1;
      iVar5 = iVar5 + 4;
      if (iVar2 >> 1 <= lVar6) break;
      uVar1 = *(uint *)((long)(uVar3 + 7) + (long)iVar5);
    }
  }
  uVar3 = uVar4 | *(uint *)(param_2 + 0xb);
  local_58 = uVar3;
  iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_58,uVar4 | *(uint *)(uVar3 - 1));
  RecordVirtualObjectStats(this,param_2,uVar3,0x13,(long)iVar2,0,0);
  uVar1 = *(uint *)(param_2 + 0xf);
  if (((uVar1 & 1) == 0) ||
     ((uVar1 != *(uint *)(uVar4 + 0xa0) && (uVar1 != *(uint *)(uVar4 + 0x180))))) {
    uVar3 = uVar4 | uVar1;
    if (((uVar1 & 1) == 0) || (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x85)) {
      if (uVar1 == *(uint *)(uVar4 + 0x180)) {
        uVar3 = *(ulong *)(uVar4 + 0x3c0);
      }
      else {
        uVar3 = uVar4 | *(uint *)(uVar3 + 3);
      }
    }
    local_58 = uVar3;
    iVar2 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_58,
                       uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1));
    RecordVirtualObjectStats(this,param_2,uVar3,0x4c,(long)iVar2,0,0);
  }
  return;
}

