
/* btConvexHullShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

float __thiscall
btConvexHullShape::localGetSupportingVertexWithoutMargin(btConvexHullShape *this,btVector3 *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(this + 0x74) < 1) {
    return 0.0;
  }
  lVar2 = 0;
  iVar3 = -1;
  puVar4 = (undefined8 *)(*(long *)(this + 0x80) + 4);
  fVar5 = -3.4028235e+38;
  do {
    fVar6 = *(float *)param_1 * *(float *)(this + 0x18) * *(float *)((long)puVar4 + -4) +
            (float)*(undefined8 *)(param_1 + 4) * (float)*(undefined8 *)(this + 0x1c) *
            (float)*puVar4 +
            (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) *
            (float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20) * (float)((ulong)*puVar4 >> 0x20);
    iVar1 = (int)lVar2;
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
    lVar2 = lVar2 + 1;
    puVar4 = puVar4 + 2;
    fVar5 = fVar6;
  } while (*(int *)(this + 0x74) != lVar2);
  return *(float *)(*(long *)(this + 0x80) + (long)iVar3 * 0x10) * *(float *)(this + 0x18);
}

