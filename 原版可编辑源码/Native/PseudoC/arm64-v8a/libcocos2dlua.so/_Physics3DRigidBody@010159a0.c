
/* cocos2d::Physics3DRigidBody::~Physics3DRigidBody() */

void __thiscall cocos2d::Physics3DRigidBody::~Physics3DRigidBody(Physics3DRigidBody *this)

{
  ~Physics3DRigidBody(this);
  operator_delete(this);
  return;
}

