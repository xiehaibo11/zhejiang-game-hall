
/* cocos2d::Physics3DWorld::~Physics3DWorld() */

void __thiscall cocos2d::Physics3DWorld::~Physics3DWorld(Physics3DWorld *this)

{
  ~Physics3DWorld(this);
  operator_delete(this);
  return;
}

