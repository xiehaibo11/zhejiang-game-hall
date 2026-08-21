
/* btGjkEpaPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver&, btConvexShape const*,
   btConvexShape const*, btTransform const&, btTransform const&, btVector3&, btVector3&, btVector3&,
   btIDebugDraw*) */

undefined8
btGjkEpaPenetrationDepthSolver::calcPenDepth
          (btVoronoiSimplexSolver *param_1,btConvexShape *param_2,btConvexShape *param_3,
          btTransform *param_4,btTransform *param_5,btVector3 *param_6,btVector3 *param_7,
          btVector3 *param_8,btIDebugDraw *param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  sResults asStack_98 [4];
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 local_54;
  
  local_60 = *(float *)(param_6 + 0x30) - *(float *)(param_5 + 0x30);
  fStack_5c = *(float *)(param_6 + 0x34) - *(float *)(param_5 + 0x34);
  local_58 = *(float *)(param_6 + 0x38) - *(float *)(param_5 + 0x38);
  local_54 = 0;
  uVar1 = btGjkEpaSolver2::Penetration
                    (param_3,param_5,(btConvexShape *)param_4,(btTransform *)param_6,
                     (btVector3 *)&local_60,asStack_98,true);
  if ((uVar1 & 1) == 0) {
    uVar1 = btGjkEpaSolver2::Distance
                      (param_3,param_5,(btConvexShape *)param_4,(btTransform *)param_6,
                       (btVector3 *)&local_60,asStack_98);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined8 *)(param_8 + 8) = uStack_8c;
  *(undefined8 *)param_8 = local_94;
  *(undefined8 *)(param_9 + 8) = uStack_7c;
  *(undefined8 *)param_9 = local_84;
  *(undefined8 *)(param_7 + 8) = uStack_6c;
  *(undefined8 *)param_7 = local_74;
  return uVar2;
}

