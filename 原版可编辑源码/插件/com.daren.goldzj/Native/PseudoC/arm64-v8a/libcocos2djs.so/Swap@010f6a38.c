
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::Swap(v8::internal::InternalIndex,
   v8::internal::InternalIndex, v8::internal::WriteBarrierMode) */

void __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
Swap(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape> *this,
    int param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  
  uVar12 = *(ulong *)this;
  lVar13 = (ulong)(uint)(param_2 * 3) << 0x22;
  lVar1 = (lVar13 + 0xc00000000 >> 0x20) + 7;
  uVar4 = *(uint *)(lVar1 + uVar12);
  uVar15 = (ulong)uVar4;
  lVar2 = (lVar13 + 0x1000000000 >> 0x20) + 7;
  uVar8 = uVar12 & 0xffffffff00000000;
  uVar5 = *(uint *)(lVar2 + uVar12);
  uVar14 = (ulong)uVar5;
  lVar13 = (lVar13 + 0x1400000000 >> 0x20) + 7;
  uVar6 = *(uint *)(lVar13 + uVar12);
  uVar10 = (ulong)uVar6;
  lVar3 = (param_3 * 0xc00000000 + 0xc00000000 >> 0x20) + 7;
  uVar7 = *(uint *)(uVar12 + lVar3);
  uVar11 = (ulong)uVar7;
  *(uint *)(lVar1 + uVar12) = uVar7;
  if (param_4 != 0) {
    if (param_4 == 4) {
      if ((uVar7 & 1) != 0) {
        uVar12 = uVar8 | uVar11 & 0xfffffffffffc0000;
        pbVar16 = (byte *)(uVar12 | 8);
        if ((*(byte *)(uVar12 + 10) >> 2 & 1) != 0) {
          Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar1,uVar8 | uVar11);
        }
LAB_010f6b34:
        if (((*pbVar16 & 0x18) != 0) &&
           (uVar12 = *(ulong *)this, (*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar12,uVar12 + lVar1,uVar8 | uVar11);
        }
      }
    }
    else if ((uVar7 & 1) != 0) {
      pbVar16 = (byte *)(uVar8 | uVar11 & 0xfffffffffffc0000 | 8);
      goto LAB_010f6b34;
    }
  }
  uVar12 = *(ulong *)this;
  lVar1 = (param_3 * 0xc00000000 + 0x1000000000 >> 0x20) + 7;
  uVar7 = *(uint *)(lVar1 + uVar12);
  uVar11 = (ulong)uVar7;
  *(uint *)(uVar12 + lVar2) = uVar7;
  if (param_4 != 0) {
    uVar12 = uVar12 & 0xffffffff00000000;
    if (param_4 == 4) {
      if ((uVar7 & 1) != 0) {
        uVar9 = uVar12 | uVar11 & 0xfffffffffffc0000;
        pbVar16 = (byte *)(uVar9 | 8);
        if ((*(byte *)(uVar9 + 10) >> 2 & 1) != 0) {
          Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar2,uVar12 | uVar11);
        }
LAB_010f6bd4:
        if (((*pbVar16 & 0x18) != 0) &&
           (uVar9 = *(ulong *)this, (*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar9,uVar9 + lVar2,uVar12 | uVar11);
        }
      }
    }
    else if ((uVar7 & 1) != 0) {
      pbVar16 = (byte *)(uVar12 | uVar11 & 0xfffffffffffc0000 | 8);
      goto LAB_010f6bd4;
    }
  }
  uVar12 = *(ulong *)this;
  lVar2 = (param_3 * 0xc00000000 + 0x1400000000 >> 0x20) + 7;
  uVar7 = *(uint *)(lVar2 + uVar12);
  uVar11 = (ulong)uVar7;
  uVar9 = uVar12 & 0xffffffff00000000;
  *(uint *)(uVar12 + lVar13) = uVar7;
  if (param_4 == 4) {
    if ((uVar7 & 1) != 0) {
      uVar12 = uVar9 | uVar11 & 0xfffffffffffc0000;
      pbVar16 = (byte *)(uVar12 | 8);
      if ((*(byte *)(uVar12 + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar13,uVar9 | uVar11);
      }
LAB_010f6c98:
      if (((*pbVar16 & 0x18) != 0) &&
         (uVar12 = *(ulong *)this, (*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + lVar13,uVar9 | uVar11);
      }
      goto LAB_010f6ccc;
    }
    *(uint *)(*(long *)this + lVar3) = uVar4;
LAB_010f6d1c:
    if ((uVar4 & 1) == 0) {
      *(uint *)(*(long *)this + lVar1) = uVar5;
      if ((uVar5 & 1) == 0) goto LAB_010f6dbc;
LAB_010f6dd0:
      uVar11 = uVar8 | uVar14 & 0xfffffffffffc0000;
      pbVar16 = (byte *)(uVar11 | 8);
      if ((*(byte *)(uVar11 + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar1,uVar8 | uVar14);
      }
LAB_010f6e00:
      if (((*pbVar16 & 0x18) != 0) &&
         (uVar11 = *(ulong *)this, (*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,uVar11 + lVar1,uVar8 | uVar14);
      }
LAB_010f6e2c:
      *(uint *)(*(long *)this + lVar2) = uVar6;
      if (param_4 == 0) {
        return;
      }
      if (param_4 == 4) goto joined_r0x010f6e44;
      if ((uVar6 & 1) == 0) {
        return;
      }
      pbVar16 = (byte *)(uVar8 | uVar10 & 0xfffffffffffc0000 | 8);
    }
    else {
      uVar11 = uVar8 | uVar15 & 0xfffffffffffc0000;
      pbVar16 = (byte *)(uVar11 | 8);
      if ((*(byte *)(uVar11 + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar3,uVar8 | uVar15);
      }
LAB_010f6d74:
      if (((*pbVar16 & 0x18) != 0) &&
         (uVar11 = *(ulong *)this, (*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,uVar11 + lVar3,uVar8 | uVar15);
      }
LAB_010f6da0:
      *(uint *)(*(long *)this + lVar1) = uVar5;
      if (param_4 == 0) goto LAB_010f6cf0;
      if (param_4 != 4) {
        if ((uVar5 & 1) != 0) {
          pbVar16 = (byte *)(uVar8 | uVar14 & 0xfffffffffffc0000 | 8);
          goto LAB_010f6e00;
        }
        goto LAB_010f6e2c;
      }
      if ((uVar5 & 1) != 0) goto LAB_010f6dd0;
LAB_010f6dbc:
      *(uint *)(*(long *)this + lVar2) = uVar6;
joined_r0x010f6e44:
      if ((uVar6 & 1) == 0) {
        return;
      }
      uVar11 = uVar8 | uVar10 & 0xfffffffffffc0000;
      pbVar16 = (byte *)(uVar11 | 8);
      if ((*(byte *)(uVar11 + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar2,uVar8 | uVar10);
      }
    }
    if (((*pbVar16 & 0x18) != 0) &&
       (uVar11 = *(ulong *)this, (*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + lVar2,uVar8 | uVar10);
    }
  }
  else {
    if (param_4 != 0) {
      if ((uVar7 & 1) != 0) {
        pbVar16 = (byte *)(uVar9 | uVar11 & 0xfffffffffffc0000 | 8);
        goto LAB_010f6c98;
      }
LAB_010f6ccc:
      *(uint *)(*(long *)this + lVar3) = uVar4;
      if (param_4 == 4) goto LAB_010f6d1c;
      if (param_4 == 0) goto LAB_010f6ce4;
      if ((uVar4 & 1) != 0) {
        pbVar16 = (byte *)(uVar8 | uVar15 & 0xfffffffffffc0000 | 8);
        goto LAB_010f6d74;
      }
      goto LAB_010f6da0;
    }
    *(uint *)(*(long *)this + lVar3) = uVar4;
LAB_010f6ce4:
    *(uint *)(*(long *)this + lVar1) = uVar5;
LAB_010f6cf0:
    *(uint *)(*(long *)this + lVar2) = uVar6;
  }
  return;
}

