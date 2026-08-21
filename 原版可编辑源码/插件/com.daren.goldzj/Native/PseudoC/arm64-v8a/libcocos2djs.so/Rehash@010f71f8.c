
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::Rehash(v8::internal::ReadOnlyRoots,
   v8::internal::CompilationCacheTable) */

void __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
Rehash(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape> *this,
      long param_2,ulong param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong local_68;
  
  uVar9 = *(ulong *)this;
  uVar6 = *(uint *)(uVar9 + 0xf);
  if ((int)uVar6 >> 1 != 0) {
    uVar10 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    pbVar11 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
    lVar15 = 0;
    lVar2 = param_3 + 7;
    uVar4 = (uint)((uVar10 & 0x40000) == 0 && (uVar10 & 0x18) != 0);
    do {
      lVar3 = (lVar15 * 0xc00000000 + 0xc00000000 >> 0x20) + 7;
      uVar8 = *(uint *)(uVar9 + lVar3);
      if ((uVar8 != *(uint *)(param_2 + 0x28)) && (uVar8 != *(uint *)(param_2 + 0x20))) {
        if ((uVar8 & 1) == 0) {
          uVar8 = (uint)(double)((int)uVar8 >> 1);
        }
        else {
          uVar9 = uVar9 & 0xffffffff00000000;
          uVar10 = uVar9 | uVar8;
          if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x42) {
            uVar8 = (uint)*(double *)(uVar10 + 3);
          }
          else if (*(int *)(uVar10 - 1) == *(int *)(param_2 + 0x68)) {
            uVar8 = CompilationCacheShape::StringSharedHash
                              (uVar9 | *(uint *)(uVar10 + 0xb),uVar9 | *(uint *)(uVar10 + 7),
                               *(uint *)(uVar10 + 0xf) >> 1 & 1,*(int *)(uVar10 + 0x13) >> 1);
          }
          else {
            iVar5 = *(int *)(uVar10 + 0xf);
            uVar9 = uVar9 | *(uint *)(uVar10 + 0xb);
            uVar8 = *(uint *)(uVar9 + 3);
            if ((uVar8 & 1) == 0) {
              uVar8 = uVar8 >> 3;
            }
            else {
              local_68 = uVar9;
              uVar8 = String::ComputeAndSetHash((String *)&local_68);
            }
            uVar8 = uVar8 + (iVar5 >> 1);
          }
        }
        uVar7 = (*(int *)(param_3 + 0xf) >> 1) - 1;
        uVar8 = uVar7 & uVar8;
        uVar9 = (ulong)uVar8;
        iVar12 = *(int *)(((long)(uVar9 * 0xc00000000 + 0xc00000000) >> 0x20) + lVar2);
        iVar5 = *(int *)((param_3 & 0xffffffff00000000) + 0xa8);
        if (iVar12 != iVar5) {
          iVar13 = 1;
          do {
            uVar8 = (uint)uVar9;
            if (iVar12 == *(int *)((param_3 & 0xffffffff00000000) + 0xa0)) break;
            uVar8 = uVar8 + iVar13 & uVar7;
            uVar9 = (ulong)uVar8;
            iVar12 = *(int *)(((long)(uVar9 * 0xc00000000 + 0xc00000000) >> 0x20) + lVar2);
            iVar13 = iVar13 + 1;
          } while (iVar12 != iVar5);
        }
        uVar9 = *(ulong *)this;
        uVar7 = *(uint *)(uVar9 + lVar3);
        puVar1 = (uint *)(lVar2 + (int)(uVar8 * 0xc + 0xc));
        *puVar1 = uVar7;
        if (uVar4 == 0 && (uVar7 & 1) != 0) {
          uVar9 = uVar9 & 0xffffffff00000000;
          uVar14 = uVar9 | uVar7;
          uVar9 = uVar9 | (ulong)uVar7 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar9 + 8);
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar14);
            uVar10 = *(ulong *)(uVar9 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*pbVar11 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar14);
          }
        }
        uVar9 = *(ulong *)this;
        uVar7 = *(uint *)(uVar9 + (lVar15 * 0xc00000000 + 0x1000000000 >> 0x20) + 7);
        puVar1 = (uint *)(lVar2 + (int)(uVar8 * 0xc + 0x10));
        *puVar1 = uVar7;
        if (uVar4 == 0 && (uVar7 & 1) != 0) {
          uVar9 = uVar9 & 0xffffffff00000000;
          uVar14 = uVar9 | uVar7;
          uVar9 = uVar9 | (ulong)uVar7 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar9 + 8);
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar14);
            uVar10 = *(ulong *)(uVar9 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*pbVar11 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar14);
          }
        }
        uVar9 = *(ulong *)this;
        uVar7 = *(uint *)(uVar9 + (lVar15 * 0xc00000000 + 0x1400000000 >> 0x20) + 7);
        puVar1 = (uint *)(lVar2 + (int)(uVar8 * 0xc + 0x14));
        *puVar1 = uVar7;
        if ((uVar7 & (uVar4 ^ 0xffffffff) & 1) != 0) {
          uVar9 = uVar9 & 0xffffffff00000000;
          uVar14 = uVar9 | uVar7;
          uVar9 = uVar9 | (ulong)uVar7 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar9 + 8);
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar14);
            uVar10 = *(ulong *)(uVar9 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*pbVar11 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar14);
          }
        }
      }
      uVar9 = *(ulong *)this;
      lVar15 = lVar15 + 1;
    } while (lVar15 != (long)((ulong)uVar6 << 0x20) >> 0x21);
  }
  *(uint *)(param_3 + 7) = *(uint *)(uVar9 + 7) & 0xfffffffe;
  *(undefined4 *)(param_3 + 0xb) = 0;
  return;
}

