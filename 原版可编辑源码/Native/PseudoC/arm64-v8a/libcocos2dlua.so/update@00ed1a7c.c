
/* cocos2d::EaseElasticIn::update(float) */

void __thiscall cocos2d::EaseElasticIn::update(EaseElasticIn *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
                    /* try { // try from 00ed1a90 to 00fd1a9f has its CatchHandler @ 00ed280c */
  tweenfunc::elasticEaseIn(param_1,*(float *)(this + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00ed1aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

