
/* cocos2d::renderer::Scene::setDebugCamera(cocos2d::renderer::Camera*) */

void __thiscall cocos2d::renderer::Scene::setDebugCamera(Scene *this,Camera *param_1)

{
  Ref *this_00;
  
                    /* try { // try from 009c8244 to 00ac824f has its CatchHandler @ 009c83f4 */
                    /* try { // try from 009c8250 to 00ac825b has its CatchHandler @ 009c83f0 */
  this_00 = *(Ref **)(this + 0x60);
                    /* try { // try from 009c825c to 00ac837b has its CatchHandler @ 009c8408 */
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    if (param_1 != (Camera *)0x0) {
      Ref::retain((Ref *)param_1);
    }
    *(Camera **)(this + 0x60) = param_1;
  }
  return;
}

