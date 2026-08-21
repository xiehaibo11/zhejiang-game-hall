
/* cocostudio::DisplayFactory::addDisplay(cocostudio::Bone*, cocostudio::DecorativeDisplay*,
   cocostudio::DisplayData*) */

void cocostudio::DisplayFactory::addDisplay
               (Bone *param_1,DecorativeDisplay *param_2,DisplayData *param_3)

{
  int iVar1;
  SpriteDisplayData *this;
  
  iVar1 = *(int *)(param_3 + 0x24);
  if (iVar1 == 2) {
    addParticleDisplay(param_1,param_2,param_3);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      this = operator_new(0x98,(nothrow_t *)&std::nothrow);
      SpriteDisplayData::SpriteDisplayData(this);
      cocos2d::Ref::autorelease((Ref *)this);
      (**(code **)(*(long *)this + 0x10))(this,param_3);
      (**(code **)(*(long *)param_2 + 0x28))(param_2,this);
      createSpriteDisplay(param_1,param_2);
      return;
    }
    return;
  }
  addArmatureDisplay(param_1,param_2,param_3);
  return;
}

