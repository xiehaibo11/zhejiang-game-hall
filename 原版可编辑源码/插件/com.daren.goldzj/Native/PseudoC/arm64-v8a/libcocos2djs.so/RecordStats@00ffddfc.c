
/* v8::internal::FieldStatsCollector::RecordStats(v8::internal::HeapObject) */

void __thiscall
v8::internal::FieldStatsCollector::RecordStats(FieldStatsCollector *this,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong local_18;
  
  lVar7 = **(long **)(this + 0x30);
  local_18 = param_2;
  HeapObject::Iterate((HeapObject *)&local_18,(ObjectVisitor *)this);
  lVar8 = **(long **)(this + 0x30);
  iVar3 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_18,
                     local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1));
  iVar6 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar6 = iVar3;
  }
  uVar4 = local_18 & 0xffffffff00000000 | 7;
  lVar7 = (lVar7 - lVar8) + (long)(iVar6 >> 2);
  if (*(ushort *)(uVar4 + *(uint *)(local_18 - 1)) < 0xaa) {
    if (*(short *)(uVar4 + *(uint *)(local_18 - 1)) == 0x42) {
      lVar7 = lVar7 + -2;
      **(long **)(this + 0x50) = **(long **)(this + 0x50) + 1;
    }
    else if ((*(ushort *)(uVar4 + *(uint *)(local_18 - 1)) < 0x40) &&
            ((*(byte *)(uVar4 + *(uint *)(local_18 - 1)) & 7) == 0)) {
      iVar6 = 1;
      if ((*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) & 8) ==
          0) {
        iVar6 = 2;
      }
      uVar1 = iVar6 * *(int *)(local_18 + 7);
      uVar2 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1;
      }
      lVar8 = (long)((ulong)uVar2 << 0x20) >> 0x22;
      lVar7 = lVar7 - lVar8;
      **(long **)(this + 0x58) = **(long **)(this + 0x58) + lVar8;
    }
  }
  else {
    uVar4 = GetInobjectFieldStats
                      (this,local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1));
    **(long **)(this + 0x30) = **(long **)(this + 0x30) - (uVar4 & 0x3ff);
    **(long **)(this + 0x38) = **(long **)(this + 0x38) + (uVar4 & 0x3ff);
    uVar5 = uVar4 >> 10 & 0x3ff;
    **(long **)(this + 0x30) = **(long **)(this + 0x30) - uVar5;
    **(long **)(this + 0x40) = **(long **)(this + 0x40) + uVar5;
    uVar2 = (uint)uVar4 >> 0x14 & 0x3ff;
    lVar7 = lVar7 - (ulong)(uVar2 << 1);
    **(long **)(this + 0x48) = **(long **)(this + 0x48) + (ulong)uVar2;
  }
  **(long **)(this + 0x60) = **(long **)(this + 0x60) + lVar7;
  return;
}

