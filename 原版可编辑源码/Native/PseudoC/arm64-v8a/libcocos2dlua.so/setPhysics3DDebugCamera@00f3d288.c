
/* cocos2d::Scene::setPhysics3DDebugCamera(cocos2d::Camera*) */

void __thiscall cocos2d::Scene::setPhysics3DDebugCamera(Scene *this,Camera *param_1)

{
                    /* catch() { ... } // from try @ 00f3d2c0 with catch @ 00f3d290 */
  if (param_1 != (Camera *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x358) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x358));
  }
  *(Camera **)(this + 0x358) = param_1;
                    /* try { // try from 00f3d2b8 to 0103d2bf has its CatchHandler @ 00f3d300 */
                    /* try { // try from 00f3d2c0 to 0103d31b has its CatchHandler @ 00f3d290 */
  return;
}

