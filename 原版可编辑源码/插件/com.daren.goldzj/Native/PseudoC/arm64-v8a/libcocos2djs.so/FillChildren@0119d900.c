
/* v8::internal::HeapSnapshot::FillChildren() */

void __thiscall v8::internal::HeapSnapshot::FillChildren(HeapSnapshot *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  
  lVar11 = *(long *)(this + 0xd8);
  if (*(long *)(this + 0xe0) != lVar11) {
    uVar6 = *(ulong *)(this + 0xf0);
    lVar5 = *(long *)(lVar11 + (uVar6 / 0x66) * 8) + (uVar6 % 0x66) * 0x28;
    lVar3 = *(long *)(lVar11 + ((*(long *)(this + 0xf8) + uVar6) / 0x66) * 8) +
            ((*(long *)(this + 0xf8) + uVar6) % 0x66) * 0x28;
    if (lVar3 != lVar5) {
      iVar10 = 0;
      plVar9 = (long *)(lVar11 + (uVar6 / 0x66) * 8);
      do {
        iVar1 = *(int *)(lVar5 + 4);
        *(int *)(lVar5 + 4) = iVar10;
        lVar5 = lVar5 + 0x28;
        iVar10 = iVar1 + iVar10;
        if (lVar5 - *plVar9 == 0xff0) {
          plVar9 = plVar9 + 1;
          lVar5 = *plVar9;
        }
      } while (lVar3 != lVar5);
    }
  }
  uVar6 = *(ulong *)(this + 0x128);
  uVar8 = *(long *)(this + 0x138) - *(long *)(this + 0x130) >> 3;
  if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
    if (uVar6 < uVar8) {
      *(ulong *)(this + 0x138) = *(long *)(this + 0x130) + uVar6 * 8;
    }
  }
  else {
    std::__ndk1::
    vector<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>>::
    __append((vector<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>>
              *)(this + 0x130),uVar6 - uVar8);
  }
  lVar11 = *(long *)(this + 0x108);
  if (*(long *)(this + 0x110) != lVar11) {
    uVar6 = *(ulong *)(this + 0x120);
    puVar7 = (uint *)(*(long *)(lVar11 + (uVar6 / 0xaa) * 8) + (uVar6 % 0xaa) * 0x18);
    puVar4 = (uint *)(*(long *)(lVar11 + ((*(long *)(this + 0x128) + uVar6) / 0xaa) * 8) +
                     ((*(long *)(this + 0x128) + uVar6) % 0xaa) * 0x18);
    if (puVar4 != puVar7) {
      plVar9 = (long *)(lVar11 + (uVar6 / 0xaa) * 8);
      do {
        uVar6 = *(long *)(*(long *)(*(long *)(puVar7 + 2) + 0x10) + 0xf0) + (ulong)(*puVar7 >> 3);
        lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(puVar7 + 2) + 0x10) + 0xd8) +
                          (uVar6 / 0x66) * 8) + (uVar6 % 0x66) * 0x28;
        uVar2 = *(uint *)(lVar11 + 4);
        *(uint *)(lVar11 + 4) = uVar2 + 1;
        *(uint **)(*(long *)(*(long *)(lVar11 + 0x10) + 0x130) + (ulong)uVar2 * 8) = puVar7;
        puVar7 = puVar7 + 6;
        if ((long)puVar7 - *plVar9 == 0xff0) {
          plVar9 = plVar9 + 1;
          puVar7 = (uint *)*plVar9;
        }
      } while (puVar4 != puVar7);
    }
  }
  return;
}

