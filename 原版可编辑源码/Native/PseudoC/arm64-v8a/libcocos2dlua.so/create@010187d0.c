
/* cocos2d::Physics3DPointToPointConstraint::create(cocos2d::Physics3DRigidBody*,
   cocos2d::Physics3DRigidBody*, cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

Ref * cocos2d::Physics3DPointToPointConstraint::create
                (Physics3DRigidBody *param_1,Physics3DRigidBody *param_2,Vec3 *param_3,Vec3 *param_4
                )

{
  Ref *this;
  
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined ***)this = &PTR__Physics3DPointToPointConstraint_01726f28;
    *(undefined4 *)(this + 0x40) = 1;
    init((Physics3DRigidBody *)this,param_1,(Vec3 *)param_2,param_3);
    Ref::autorelease(this);
  }
  return this;
}

