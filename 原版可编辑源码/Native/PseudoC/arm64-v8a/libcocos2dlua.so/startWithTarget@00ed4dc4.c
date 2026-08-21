
/* cocos2d::AccelDeccelAmplitude::startWithTarget(cocos2d::Node*) */

void __thiscall
cocos2d::AccelDeccelAmplitude::startWithTarget(AccelDeccelAmplitude *this,Node *param_1)

{
  ActionInterval::startWithTarget((ActionInterval *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00ed4df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x60) + 0x30))(*(long **)(this + 0x60),param_1);
  return;
}

