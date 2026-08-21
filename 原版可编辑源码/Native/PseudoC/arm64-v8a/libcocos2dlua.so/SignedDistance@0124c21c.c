
/* btGjkEpaSolver2::SignedDistance(btConvexShape const*, btTransform const&, btConvexShape const*,
   btTransform const&, btVector3 const&, btGjkEpaSolver2::sResults&) */

undefined8
btGjkEpaSolver2::SignedDistance
          (btConvexShape *param_1,btTransform *param_2,btConvexShape *param_3,btTransform *param_4,
          btVector3 *param_5,sResults *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = Distance(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = Penetration(param_1,param_2,param_3,param_4,param_5,param_6,false);
  return uVar2;
}

