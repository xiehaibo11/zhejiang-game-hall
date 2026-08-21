
/* cocos2d::AccelAmplitude::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::AccelAmplitude::startWithTarget(AccelAmplitude *this,Node *param_1)

{
                    /* try { // try from 00ed516c to 00fd518f has its CatchHandler @ 00ed5704 */
  ActionInterval::startWithTarget((ActionInterval *)this,param_1);
                    /* try { // try from 00ed5190 to 00fd51df has its CatchHandler @ 00ed4ef8 */
                    /* WARNING: Could not recover jumptable at 0x00ed5198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x60) + 0x30))(*(long **)(this + 0x60),param_1);
  return;
}

