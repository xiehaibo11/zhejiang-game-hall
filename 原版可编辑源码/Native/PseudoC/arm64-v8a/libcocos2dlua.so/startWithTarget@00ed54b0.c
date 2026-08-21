
/* cocos2d::DeccelAmplitude::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::DeccelAmplitude::startWithTarget(DeccelAmplitude *this,Node *param_1)

{
  ActionInterval::startWithTarget((ActionInterval *)this,param_1);
                    /* try { // try from 00ed54dc to 00fd54ff has its CatchHandler @ 00ed56f0 */
                    /* WARNING: Could not recover jumptable at 0x00ed54e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x60) + 0x30))(*(long **)(this + 0x60),param_1);
  return;
}

