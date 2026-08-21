
/* cocos2d::EaseElasticInOut::update(float) */

void __thiscall cocos2d::EaseElasticInOut::update(EaseElasticInOut *this,float param_1)

{
  long *plVar1;
  
                    /* try { // try from 00ed1dd8 to 00fd1ddb has its CatchHandler @ 00ed27dc */
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::elasticEaseInOut(param_1,*(float *)(this + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00ed1df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

