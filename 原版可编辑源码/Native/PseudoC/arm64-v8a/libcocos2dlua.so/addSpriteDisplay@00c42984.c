
/* cocostudio::DisplayFactory::addSpriteDisplay(cocostudio::Bone*, cocostudio::DecorativeDisplay*,
   cocostudio::DisplayData*) */

void cocostudio::DisplayFactory::addSpriteDisplay
               (Bone *param_1,DecorativeDisplay *param_2,DisplayData *param_3)

{
  SpriteDisplayData *this;
  
  this = operator_new(0x98,(nothrow_t *)&std::nothrow);
  SpriteDisplayData::SpriteDisplayData(this);
  cocos2d::Ref::autorelease((Ref *)this);
  (**(code **)(*(long *)this + 0x10))(this,param_3);
  (**(code **)(*(long *)param_2 + 0x28))(param_2,this);
  createSpriteDisplay(param_1,param_2);
  return;
}

