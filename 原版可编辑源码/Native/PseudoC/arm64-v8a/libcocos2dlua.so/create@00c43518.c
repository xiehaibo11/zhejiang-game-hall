
/* cocostudio::DisplayManager::create(cocostudio::Bone*) */

Ref * cocostudio::DisplayManager::create(Bone *param_1)

{
  Ref *this;
  undefined8 uVar1;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined4 *)(this + 0x48) = 3;
    *(undefined4 *)(this + 0x58) = 0xffffffff;
    *(undefined2 *)(this + 0x5c) = 0x100;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__DisplayManager_016c9580;
    *(Bone **)(this + 0x60) = param_1;
    uVar1 = (**(code **)(*(long *)param_1 + 0x560))(param_1);
    (**(code **)(*(long *)this + 0x10))(this,uVar1);
    cocos2d::Ref::autorelease(this);
  }
  return this;
}

