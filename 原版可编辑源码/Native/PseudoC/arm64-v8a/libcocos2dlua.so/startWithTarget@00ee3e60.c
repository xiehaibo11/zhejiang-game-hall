
/* cocos2d::ReverseTime::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ReverseTime::startWithTarget(ReverseTime *this,Node *param_1)

{
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
                    /* catch() { ... } // from try @ 00ee3ec0 with catch @ 00ee3e94 */
                    /* WARNING: Could not recover jumptable at 0x00ee3e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x58) + 0x30))(*(long **)(this + 0x58),param_1);
  return;
}

