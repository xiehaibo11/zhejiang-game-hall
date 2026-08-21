
/* cocos2d::SpotLight::create(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Color3B const&,
   float, float, float) */

Node * cocos2d::SpotLight::create
                 (Vec3 *param_1,Vec3 *param_2,Color3B *param_3,float param_4,float param_5,
                 float param_6)

{
  long lVar1;
  Node *this;
  float fVar2;
  float fVar3;
  float fVar4;
  Vec3 aVStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = operator_new(800,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 0x2f8) = 0x13f800000;
    this[0x300] = (Node)0x1;
    *(undefined ***)this = &PTR__AmbientLight_01703260;
  }
  fVar2 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 8);
  fVar3 = atan2f(-fVar2,-fVar4);
  fVar2 = atan2f(-*(float *)(param_1 + 4),SQRT(fVar2 * fVar2 + fVar4 * fVar4));
  Vec3::Vec3(aVStack_78,fVar2 * -57.29578,fVar3 * 57.29578,0.0);
  (**(code **)(*(long *)this + 400))(this,aVStack_78);
  (**(code **)(*(long *)this + 0xf8))(this,param_2);
  (**(code **)(*(long *)this + 0x4c0))(this,param_3);
  *(float *)(this + 0x308) = param_4;
  fVar2 = cosf(param_4);
  *(float *)(this + 0x30c) = fVar2;
  *(float *)(this + 0x310) = param_5;
  fVar2 = cosf(param_5);
  *(float *)(this + 0x314) = fVar2;
  *(float *)(this + 0x304) = param_6;
  Ref::autorelease((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

