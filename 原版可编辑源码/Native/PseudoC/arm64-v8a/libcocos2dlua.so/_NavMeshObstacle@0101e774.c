
/* cocos2d::NavMeshObstacle::~NavMeshObstacle() */

void __thiscall cocos2d::NavMeshObstacle::~NavMeshObstacle(NavMeshObstacle *this)

{
  Component::~Component((Component *)this);
                    /* try { // try from 0101e790 to 0111e79f has its CatchHandler @ 0101e7d8 */
  operator_delete(this);
  return;
}

