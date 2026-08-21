
/* v8::internal::DependentCode::Compact() */

bool __thiscall v8::internal::DependentCode::Compact(DependentCode *this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  
  uVar2 = *(ulong *)this;
  uVar9 = (ulong)(*(uint *)(uVar2 + 0xb) >> 4) & 0x7ffffff;
  iVar8 = (int)uVar9;
  uVar7 = uVar2;
  if (iVar8 == 0) {
    uVar10 = 0;
  }
  else {
    uVar12 = 0;
    uVar10 = 0;
    lVar14 = 0xf;
    do {
      if (*(int *)(uVar7 + lVar14) != 3) {
        if (uVar12 != uVar10) {
          uVar1 = *(uint *)(lVar14 + uVar7);
          lVar4 = (long)(int)(uVar10 * 4 + 8) + 7;
          *(uint *)(lVar4 + uVar7) = uVar1;
          uVar2 = *(ulong *)this;
          if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
            uVar6 = uVar7 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffc0000;
            uVar5 = *(ulong *)(uVar6 + 8);
            lVar3 = uVar2 + lVar4;
            uVar7 = uVar7 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffffffd;
            if (((uint)uVar5 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar2,lVar3,uVar7);
              uVar2 = *(ulong *)this;
              uVar5 = *(ulong *)(uVar6 | 8);
              lVar3 = uVar2 + lVar4;
            }
            if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              Heap_GenerationalBarrierSlow(uVar2,lVar3,uVar7);
              uVar2 = *(ulong *)this;
            }
          }
        }
        uVar10 = uVar10 + 1;
        uVar7 = uVar2;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 4;
    } while (uVar9 != uVar12);
  }
  *(uint *)(uVar7 + 0xb) = *(uint *)(uVar7 + 0xb) & 0x8000000e | uVar10 << 4;
  if ((int)uVar10 < iVar8) {
    iVar11 = uVar10 * 4 + 8;
    iVar13 = iVar8 - uVar10;
    do {
      lVar14 = (long)iVar11 + 7;
      uVar7 = *(ulong *)((*(ulong *)this & 0xffffffff00000000) + 0xa0);
      *(int *)(*(ulong *)this + lVar14) = (int)uVar7;
      if (((int)uVar7 != 3) && ((uVar7 & 1) != 0)) {
        uVar2 = *(ulong *)this;
        uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        lVar4 = uVar2 + lVar14;
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar2,lVar4,uVar7 & 0xfffffffffffffffd);
          uVar2 = *(ulong *)this;
          uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          lVar4 = uVar2 + lVar14;
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar2,lVar4,uVar7 & 0xfffffffffffffffd);
        }
      }
      iVar13 = iVar13 + -1;
      iVar11 = iVar11 + 4;
    } while (iVar13 != 0);
  }
  return (int)uVar10 < iVar8;
}

