
/* cocos2d::renderer::Scene::getLight(unsigned int) */

undefined8 __thiscall cocos2d::renderer::Scene::getLight(Scene *this,uint param_1)

{
                    /* try { // try from 009c84d4 to 00ac84df has its CatchHandler @ 009c86b0 */
  return *(undefined8 *)(*(long *)(this + 0x18) + (ulong)param_1 * 8);
}

