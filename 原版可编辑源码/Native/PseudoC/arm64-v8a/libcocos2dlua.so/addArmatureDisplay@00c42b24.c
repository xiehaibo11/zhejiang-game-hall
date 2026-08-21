
/* cocostudio::DisplayFactory::addArmatureDisplay(cocostudio::Bone*, cocostudio::DecorativeDisplay*,
   cocostudio::DisplayData*) */

void cocostudio::DisplayFactory::addArmatureDisplay
               (Bone *param_1,DecorativeDisplay *param_2,DisplayData *param_3)

{
  ArmatureDisplayData *this;
  long lVar1;
  undefined8 uVar2;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (ArmatureDisplayData *)0x0) {
    ArmatureDisplayData::ArmatureDisplayData(this);
    cocos2d::Ref::autorelease((Ref *)this);
  }
  (**(code **)(*(long *)this + 0x10))(this,param_3);
  (**(code **)(*(long *)param_2 + 0x28))(param_2,this);
  lVar1 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
  uVar2 = Armature::create((basic_string *)(lVar1 + 0x28),param_1);
                    /* WARNING: Could not recover jumptable at 0x00c42bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x18))(param_2,uVar2);
  return;
}

