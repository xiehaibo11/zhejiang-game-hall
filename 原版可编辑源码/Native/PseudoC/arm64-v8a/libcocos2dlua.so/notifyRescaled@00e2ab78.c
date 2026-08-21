
/* cocos2d::PUPlaneCollider::notifyRescaled(cocos2d::Vec3 const&) */

void cocos2d::PUPlaneCollider::notifyRescaled(Vec3 *param_1)

{
  Vec3 *pVVar1;
  
                    /* catch() { ... } // from try @ 00e2ac44 with catch @ 00e2ab8c */
  pVVar1 = (Vec3 *)PUAffector::getDerivedPosition();
  PUPlane::redefine((PUPlane *)(param_1 + 0xd8),param_1 + 0xc0,pVVar1);
  return;
}

