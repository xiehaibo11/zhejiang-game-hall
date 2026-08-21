
/* btContinuousConvexCollision::btContinuousConvexCollision(btConvexShape const*, btStaticPlaneShape
   const*) */

void __thiscall
btContinuousConvexCollision::btContinuousConvexCollision
          (btContinuousConvexCollision *this,btConvexShape *param_1,btStaticPlaneShape *param_2)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(btConvexShape **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(btStaticPlaneShape **)(this + 0x28) = param_2;
  *(undefined ***)this = &PTR__btConvexCast_01733ac0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

