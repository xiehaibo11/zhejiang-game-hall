
/* cocos2d::DirectionLight::create(cocos2d::Vec3 const&, cocos2d::Color3B const&) */

Node * cocos2d::DirectionLight::create(Vec3 *param_1,Color3B *param_2)

{
  long lVar1;
  Node *this;
  float fVar2;
  float fVar3;
  float fVar4;
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x310,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 0x2f8) = 0x13f800000;
    this[0x300] = (Node)0x1;
    *(undefined ***)this = &PTR__AmbientLight_017027d0;
  }
  fVar2 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 8);
  fVar3 = atan2f(-fVar2,-fVar4);
  fVar2 = atan2f(-*(float *)(param_1 + 4),SQRT(fVar2 * fVar2 + fVar4 * fVar4));
  Vec3::Vec3(aVStack_58,fVar2 * -57.29578,fVar3 * 57.29578,0.0);
  (**(code **)(*(long *)this + 400))(this,aVStack_58);
  (**(code **)(*(long *)this + 0x4c0))(this,param_2);
  Ref::autorelease((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

