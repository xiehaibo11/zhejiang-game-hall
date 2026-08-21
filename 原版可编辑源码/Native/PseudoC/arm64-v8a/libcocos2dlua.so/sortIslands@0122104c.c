
/* btUnionFind::sortIslands() */

void __thiscall btUnionFind::sortIslands(btUnionFind *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  btUnionFindElementSortPredicate abStack_18 [8];
  
  uVar3 = *(uint *)(this + 4);
  if (0 < (int)uVar3) {
    lVar5 = *(long *)(this + 0x10);
    uVar6 = 0;
    do {
      puVar1 = (uint *)(lVar5 + uVar6 * 8);
      uVar7 = (uint)uVar6;
      if (uVar6 != *puVar1) {
        uVar8 = (long)(int)*puVar1 * 8;
        *puVar1 = *(uint *)(lVar5 + uVar8);
        while( true ) {
          uVar7 = *(uint *)(lVar5 + uVar8);
          puVar2 = (uint *)(lVar5 + (long)(int)uVar7 * 8);
          uVar4 = *puVar2;
          if (uVar7 == uVar4) break;
          uVar8 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
          *puVar2 = *(uint *)(lVar5 + uVar8);
        }
      }
      uVar6 = uVar6 + 1;
      *puVar1 = uVar7;
    } while (uVar6 != uVar3);
    if (1 < (int)uVar3) {
      btAlignedObjectArray<btElement>::quickSortInternal<btUnionFindElementSortPredicate>
                ((btAlignedObjectArray<btElement> *)this,abStack_18,0,uVar3 - 1);
    }
  }
  return;
}

