
/* btConvexHullShape::addPoint(btVector3 const&, bool) */

void __thiscall btConvexHullShape::addPoint(btConvexHullShape *this,btVector3 *param_1,bool param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar4 = *(int *)(this + 0x74);
  if (iVar4 == *(int *)(this + 0x78)) {
    uVar1 = iVar4 << 1;
    if (iVar4 == 0) {
      uVar1 = 1;
    }
    if (iVar4 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = btAlignedAllocInternal
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4,0x10);
        iVar4 = *(int *)(this + 0x74);
      }
      if (0 < iVar4) {
        lVar6 = 0;
        lVar5 = (long)iVar4;
        do {
          lVar5 = lVar5 + -1;
          uVar7 = *(undefined8 *)(*(long *)(this + 0x80) + lVar6);
          ((undefined8 *)(lVar3 + lVar6))[1] = ((undefined8 *)(*(long *)(this + 0x80) + lVar6))[1];
          *(undefined8 *)(lVar3 + lVar6) = uVar7;
          lVar6 = lVar6 + 0x10;
        } while (lVar5 != 0);
      }
      if (*(void **)(this + 0x80) != (void *)0x0) {
        if (this[0x88] != (btConvexHullShape)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x80));
        }
        *(undefined8 *)(this + 0x80) = 0;
      }
      iVar4 = *(int *)(this + 0x74);
      this[0x88] = (btConvexHullShape)0x1;
      *(long *)(this + 0x80) = lVar3;
      *(uint *)(this + 0x78) = uVar1;
    }
  }
  uVar7 = *(undefined8 *)param_1;
  puVar2 = (undefined8 *)(*(long *)(this + 0x80) + (long)iVar4 * 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  *puVar2 = uVar7;
  *(int *)(this + 0x74) = *(int *)(this + 0x74) + 1;
  if (param_2) {
    btPolyhedralConvexAabbCachingShape::recalcLocalAabb((btPolyhedralConvexAabbCachingShape *)this);
    return;
  }
  return;
}

