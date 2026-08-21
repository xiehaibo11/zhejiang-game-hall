
/* cocos2d::NavMeshObstacle::NavMeshObstacle() */

void __thiscall cocos2d::NavMeshObstacle::NavMeshObstacle(NavMeshObstacle *this)

{
  Component::Component((Component *)this);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__NavMeshObstacle_01727198;
  *(undefined8 *)(this + 0x58) = 0xffffffff00000003;
                    /* try { // try from 0101e760 to 0111e78f has its CatchHandler @ 0101e760
                       catch() { ... } // from try @ 0101e760 with catch @ 0101e760
                       catch() { ... } // from try @ 0101e7c8 with catch @ 0101e760 */
  *(undefined8 *)(this + 0x60) = 0;
  return;
}

