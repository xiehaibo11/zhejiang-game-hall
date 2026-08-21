
/* btConvexHullShape::localGetSupportingVertex(btVector3 const&) const */

undefined1  [16] __thiscall
btConvexHullShape::localGetSupportingVertex(btConvexHullShape *this,btVector3 *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  auVar4 = (**(code **)(*(long *)this + 0x88))();
  uVar8 = auVar4._8_8_;
  uVar7 = auVar4._0_8_;
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  if (fVar2 != 0.0) {
    fVar3 = *(float *)param_1;
    fVar5 = *(float *)(param_1 + 4);
    fVar6 = *(float *)(param_1 + 8);
    bVar1 = 1.4210855e-14 <= fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6;
    fVar2 = -1.0;
    if (bVar1) {
      fVar2 = fVar3;
    }
    fVar3 = -1.0;
    if (bVar1) {
      fVar3 = fVar5;
    }
    fVar5 = -1.0;
    if (bVar1) {
      fVar5 = fVar6;
    }
    fVar5 = fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3;
    fVar3 = SQRT(fVar5);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar5);
    }
    fVar5 = (float)(**(code **)(*(long *)this + 0x60))(this);
    uVar7 = (ulong)(uint)(auVar4._0_4_ + fVar5 * (1.0 / fVar3) * fVar2);
    uVar8 = 0;
  }
  auVar4._8_8_ = uVar8;
  auVar4._0_8_ = uVar7;
  return auVar4;
}

