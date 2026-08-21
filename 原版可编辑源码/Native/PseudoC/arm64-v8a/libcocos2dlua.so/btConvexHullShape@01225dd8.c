
/* btConvexHullShape::btConvexHullShape(float const*, int, int) */

void __thiscall
btConvexHullShape::btConvexHullShape(btConvexHullShape *this,float *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  btPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape
            ((btPolyhedralConvexAabbCachingShape *)this);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  this[0x88] = (btConvexHullShape)0x1;
  *(undefined ***)this = &PTR__btConvexHullShape_01732ca0;
  *(undefined4 *)(this + 8) = 4;
  if (param_2 < 1) {
    *(int *)(this + 0x74) = param_2;
  }
  else {
    puVar3 = (undefined8 *)
             btAlignedAllocInternal
                       (-(ulong)((uint)param_2 >> 0x1f) & 0xfffffff000000000 |
                        (ulong)(uint)param_2 << 4,0x10);
    lVar4 = (long)*(int *)(this + 0x74);
    if (0 < *(int *)(this + 0x74)) {
      lVar5 = 0;
      do {
        lVar4 = lVar4 + -1;
        uVar9 = *(undefined8 *)(*(long *)(this + 0x80) + lVar5);
        ((undefined8 *)((long)puVar3 + lVar5))[1] =
             ((undefined8 *)(*(long *)(this + 0x80) + lVar5))[1];
        *(undefined8 *)((long)puVar3 + lVar5) = uVar9;
        lVar5 = lVar5 + 0x10;
      } while (lVar4 != 0);
    }
    if (*(void **)(this + 0x80) != (void *)0x0) {
      if (this[0x88] != (btConvexHullShape)0x0) {
        btAlignedFreeInternal(*(void **)(this + 0x80));
      }
      *(undefined8 *)(this + 0x80) = 0;
    }
    *(undefined8 **)(this + 0x80) = puVar3;
    this[0x88] = (btConvexHullShape)0x1;
    *(int *)(this + 0x78) = param_2;
    puVar3[1] = uStack_48;
    *puVar3 = local_50;
    if (param_2 != 1) {
      lVar5 = (long)param_2 + -1;
      lVar4 = 0x10;
      do {
        lVar6 = *(long *)(this + 0x80);
        lVar5 = lVar5 + -1;
        ((undefined8 *)(lVar6 + lVar4))[1] = uStack_48;
        *(undefined8 *)(lVar6 + lVar4) = local_50;
        lVar4 = lVar4 + 0x10;
      } while (lVar5 != 0);
    }
    *(int *)(this + 0x74) = param_2;
    if (0 < param_2) {
      lVar4 = 0;
      uVar7 = (ulong)(uint)param_2;
      pfVar8 = param_1 + 1;
      do {
        pfVar1 = pfVar8 + -1;
        fVar2 = pfVar8[1];
        uVar7 = uVar7 - 1;
        puVar3 = (undefined8 *)(*(long *)(this + 0x80) + lVar4);
        lVar4 = lVar4 + 0x10;
        pfVar8 = (float *)((long)pfVar8 + (long)param_3);
        *puVar3 = *(undefined8 *)pfVar1;
        *(float *)(puVar3 + 1) = fVar2;
        *(undefined4 *)((long)puVar3 + 0xc) = 0;
      } while (uVar7 != 0);
    }
  }
  btPolyhedralConvexAabbCachingShape::recalcLocalAabb((btPolyhedralConvexAabbCachingShape *)this);
  return;
}

