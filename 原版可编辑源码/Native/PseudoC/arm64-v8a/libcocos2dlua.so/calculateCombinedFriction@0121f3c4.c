
/* btManifoldResult::calculateCombinedFriction(btCollisionObject const*, btCollisionObject const*)
    */

float btManifoldResult::calculateCombinedFriction
                (btCollisionObject *param_1,btCollisionObject *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xf4) * *(float *)(param_2 + 0xf4);
  if (fVar1 <= -10.0) {
    fVar1 = -10.0;
  }
  if (10.0 < fVar1) {
    fVar1 = 10.0;
  }
  return fVar1;
}

