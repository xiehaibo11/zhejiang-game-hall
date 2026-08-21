
/* cocos2d::PhysicsWorld::~PhysicsWorld() */

void __thiscall cocos2d::PhysicsWorld::~PhysicsWorld(PhysicsWorld *this)

{
  ~PhysicsWorld(this);
                    /* catch() { ... } // from try @ 0100ee0c with catch @ 0100ee3c */
  operator_delete(this);
  return;
}

