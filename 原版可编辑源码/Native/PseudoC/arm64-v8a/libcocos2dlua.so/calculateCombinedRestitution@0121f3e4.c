
/* btManifoldResult::calculateCombinedRestitution(btCollisionObject const*, btCollisionObject
   const*) */

float btManifoldResult::calculateCombinedRestitution
                (btCollisionObject *param_1,btCollisionObject *param_2)

{
  return *(float *)(param_1 + 0xf8) * *(float *)(param_2 + 0xf8);
}

