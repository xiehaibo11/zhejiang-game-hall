
/* cocostudio::DisplayFactory::addParticleDisplay(cocostudio::Bone*, cocostudio::DecorativeDisplay*,
   cocostudio::DisplayData*) */

void cocostudio::DisplayFactory::addParticleDisplay
               (Bone *param_1,DecorativeDisplay *param_2,DisplayData *param_3)

{
  ParticleDisplayData *this;
  long lVar1;
  long *plVar2;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (ParticleDisplayData *)0x0) {
    ParticleDisplayData::ParticleDisplayData(this);
    cocos2d::Ref::autorelease((Ref *)this);
  }
  (**(code **)(*(long *)this + 0x10))(this,param_3);
  (**(code **)(*(long *)param_2 + 0x28))(param_2,this);
  lVar1 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
  plVar2 = (long *)cocos2d::ParticleSystemQuad::create((basic_string *)(lVar1 + 0x28));
  (**(code **)(*plVar2 + 0x270))();
  (**(code **)(*plVar2 + 0x340))(plVar2);
  lVar1 = (**(code **)(*(long *)param_1 + 0x570))(param_1);
  if (lVar1 != 0) {
    (**(code **)(*plVar2 + 600))(plVar2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c42b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x18))(param_2,plVar2);
  return;
}

