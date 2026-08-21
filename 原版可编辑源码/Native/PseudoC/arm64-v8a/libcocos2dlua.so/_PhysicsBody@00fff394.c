
/* cocos2d::PhysicsBody::~PhysicsBody() */

void __thiscall cocos2d::PhysicsBody::~PhysicsBody(PhysicsBody *this)

{
  ~PhysicsBody(this);
  operator_delete(this);
  return;
}

