
/* v8::internal::ObjectStatsCollectorImpl::CollectStatistics(v8::internal::HeapObject,
   v8::internal::ObjectStatsCollectorImpl::Phase,
   v8::internal::ObjectStatsCollectorImpl::CollectFieldStats) */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::CollectStatistics
          (ObjectStatsCollectorImpl *this,ulong param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint *puVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_50;
  ulong local_48;
  
  uVar14 = param_2 & 0xffffffff00000000;
  puVar9 = (uint *)(param_2 - 1);
  local_50 = param_2;
  if (param_3 == 1) {
    uVar11 = uVar14 | 7;
    uVar13 = uVar14 | *(uint *)(param_2 - 1);
    if ((*(ushort *)(uVar11 + *puVar9) < 0x40) && ((*(ushort *)(uVar11 + *puVar9) & 7) == 2)) {
      uVar7 = *(undefined8 *)(param_2 + 0xb);
      local_48 = param_2;
      iVar6 = ExternalString::ExternalPayloadSize((ExternalString *)&local_48);
      uVar8 = 0x4a;
      if ((*(ushort *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) & 8) ==
          0) {
        uVar8 = 0x4b;
      }
      RecordExternalResourceStats(this,uVar7,uVar8,(long)iVar6);
      uVar14 = local_50 & 0xffffffff00000000;
      puVar9 = (uint *)(local_50 - 1);
      uVar11 = uVar14 | 7;
    }
    uVar5 = local_50;
    if (*(ushort *)(uVar11 + *puVar9) < 0xaa) {
      lVar12 = 0;
    }
    else {
      bVar10 = *(byte *)(uVar13 + 5);
      if (bVar10 < 3) {
        bVar10 = *(byte *)(uVar13 + 3);
      }
      lVar12 = (long)(int)(((uint)*(byte *)(uVar13 + 3) - (uint)bVar10) * 4);
    }
    uVar4 = *(undefined2 *)(uVar13 + 7);
    iVar6 = HeapObject::SizeFromMap((HeapObject *)&local_50,uVar14 | *puVar9);
    RecordObjectStats(this,uVar5,uVar4,(long)iVar6,lVar12);
    if (param_4 == 1) {
      FieldStatsCollector::RecordStats((FieldStatsCollector *)(this + 0x68),local_50);
    }
  }
  else if (param_3 == 0) {
    uVar11 = uVar14 | 7;
    if (*(short *)(uVar11 + *puVar9) == 0x9f) {
      RecordVirtualFeedbackVectorDetails(this,param_2);
      return;
    }
    if (*(short *)(uVar11 + *puVar9) == 0xa2) {
      RecordVirtualMapDetails(this,param_2);
      return;
    }
    if (*(short *)(uVar11 + *puVar9) == 0x86) {
      RecordVirtualBytecodeArrayDetails(this,param_2);
      return;
    }
    if (*(short *)(uVar11 + *puVar9) == 0x9a) {
      RecordVirtualCodeDetails(this,param_2);
      return;
    }
    if (*(short *)(uVar11 + *puVar9) == 0x4e) {
      RecordVirtualFunctionTemplateInfoDetails(this,param_2);
      return;
    }
    if (*(short *)(uVar11 + *puVar9) == 0xaa) {
      uVar11 = uVar14 | *(uint *)(param_2 + 3);
      uVar1 = *(uint *)(uVar11 + 0xf);
      uVar2 = *(uint *)(uVar11 + 7);
      uVar3 = *(uint *)(uVar11 + 0xb);
      local_48 = uVar11;
      iVar6 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar14 | *(uint *)(uVar11 - 1));
      RecordVirtualObjectStats
                (this,param_2,uVar11,0x27,(long)iVar6,
                 (long)(int)((((uVar1 >> 1) - (uVar2 >> 1)) - (uVar3 >> 1)) * 4),0);
      uVar11 = uVar14 | *(uint *)(param_2 + 7);
      local_48 = uVar11;
      iVar6 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar14 | *(uint *)(uVar11 - 1));
      uVar7 = 0x26;
      uVar14 = param_2;
      param_2 = uVar11;
    }
    else {
      if (0xa9 < *(ushort *)(uVar11 + *puVar9)) {
        RecordVirtualJSObjectDetails(this,param_2);
        return;
      }
      if (*(short *)(uVar11 + *puVar9) != 0xa6) {
        if (*(ushort *)(uVar11 + *puVar9) - 0x88 < 10) {
          RecordVirtualContext(this,param_2);
          return;
        }
        if (*(short *)(uVar11 + *puVar9) == 0x65) {
          RecordVirtualScriptDetails(this,param_2);
          return;
        }
        if (*(short *)(uVar11 + *puVar9) == 0x56) {
          RecordVirtualObjectsForConstantPoolOrEmbeddedObjects
                    (this,param_2,uVar14 | *(uint *)(param_2 + 7),0xc);
          return;
        }
        if (*(short *)(uVar11 + *puVar9) != 0x76) {
          return;
        }
        if (*(int *)(param_2 - 1) != *(int *)(*(long *)this + -0x8768)) {
          return;
        }
        local_48 = param_2;
        iVar6 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar14 | *(uint *)(param_2 - 1));
        RecordVirtualObjectStats(this,0,param_2,0x14,(long)iVar6,0,1);
        return;
      }
      uVar1 = *(uint *)(param_2 + 3);
      if (uVar1 != 0x84) {
        if ((uVar1 & 1) == 0) {
          return;
        }
        if (1 < *(ushort *)(uVar11 + *(uint *)((uVar14 | uVar1) - 1)) - 0x95) {
          return;
        }
      }
      local_48 = param_2;
      iVar6 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar14 | *(uint *)(param_2 - 1));
      uVar7 = 0x4d;
      uVar14 = 0;
    }
    RecordVirtualObjectStats(this,uVar14,param_2,uVar7,(long)iVar6,0,0);
  }
  return;
}

