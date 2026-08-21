
/* btGjkPairDetector::btGjkPairDetector(btConvexShape const*, btConvexShape const*,
   btVoronoiSimplexSolver*, btConvexPenetrationDepthSolver*) */

void __thiscall
btGjkPairDetector::btGjkPairDetector
          (btGjkPairDetector *this,btConvexShape *param_1,btConvexShape *param_2,
          btVoronoiSimplexSolver *param_3,btConvexPenetrationDepthSolver *param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(btConvexPenetrationDepthSolver **)(this + 0x18) = param_4;
  *(btVoronoiSimplexSolver **)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0xc) = 0x3f800000;
  *(undefined ***)this = &PTR__btDiscreteCollisionDetectorInterface_01733c40;
  *(btConvexShape **)(this + 0x28) = param_1;
  *(btConvexShape **)(this + 0x30) = param_2;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_2 + 8);
  uVar1 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
  *(undefined4 *)(this + 0x40) = uVar1;
  uVar1 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
  *(undefined4 *)(this + 0x44) = uVar1;
  this[0x48] = (btGjkPairDetector)0x0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x5c) = 1;
  *(undefined4 *)(this + 0x60) = 1;
  return;
}

