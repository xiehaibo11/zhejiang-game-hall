
/* cocos2d::PUOnCollisionObserver::observe(cocos2d::PUParticle3D*, float) */

byte cocos2d::PUOnCollisionObserver::observe(PUParticle3D *param_1,float param_2)

{
  long in_x1;
  
                    /* try { // try from 00e3a544 to 00f3a5eb has its CatchHandler @ 00e3a544
                       catch() { ... } // from try @ 00e3a544 with catch @ 00e3a544
                       catch() { ... } // from try @ 00e3a5f8 with catch @ 00e3a544 */
  return *(byte *)(in_x1 + 0x124) >> 2 & 1;
}

