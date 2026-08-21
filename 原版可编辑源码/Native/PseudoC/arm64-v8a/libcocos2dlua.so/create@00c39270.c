
/* cocostudio::Bone::create() */

Node * cocostudio::Bone::create(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Node *this;
  ulong uVar9;
  
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    cocos2d::Node::Node(this);
    *(undefined ***)this = &PTR__Bone_016c8368;
    cocos2d::Mat4::Mat4((Mat4 *)(this + 0x344));
    this[0x318] = (Node)0x0;
    *(undefined8 *)(this + 0x300) = 0;
    *(undefined8 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 0x310) = 0;
    *(undefined8 *)(this + 0x308) = 0;
    uVar8 = cocos2d::Mat4::IDENTITY._56_8_;
    uVar7 = cocos2d::Mat4::IDENTITY._48_8_;
    uVar6 = cocos2d::Mat4::IDENTITY._40_8_;
    uVar5 = cocos2d::Mat4::IDENTITY._32_8_;
    uVar4 = cocos2d::Mat4::IDENTITY._24_8_;
    uVar3 = cocos2d::Mat4::IDENTITY._16_8_;
    uVar2 = cocos2d::Mat4::IDENTITY._8_8_;
    uVar1 = cocos2d::Mat4::IDENTITY._0_8_;
    *(undefined8 *)(this + 0x328) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x36c) = uVar6;
    *(undefined8 *)(this + 0x364) = uVar5;
    *(undefined8 *)(this + 0x37c) = uVar8;
    *(undefined8 *)(this + 0x374) = uVar7;
    *(undefined8 *)(this + 0x34c) = uVar2;
    *(undefined8 *)(this + 0x344) = uVar1;
    *(undefined8 *)(this + 0x35c) = uVar4;
    *(undefined8 *)(this + 0x354) = uVar3;
    this[0x340] = (Node)0x1;
    *(undefined8 *)(this + 0x31c) = 0x30300000001;
    this[0x324] = (Node)0x0;
    *(undefined8 *)(this + 0x390) = 0;
    *(undefined8 *)(this + 0x388) = 0;
    *(undefined4 *)(this + 0x398) = 0;
    uVar9 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar9 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Node *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

