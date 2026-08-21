
/* cocos2d::TargetedAction::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::TargetedAction::startWithTarget(TargetedAction *this,Node *param_1)

{
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
                    /* WARNING: Could not recover jumptable at 0x00ee4da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x58) + 0x30))
            (*(long **)(this + 0x58),*(undefined8 *)(this + 0x60));
  return;
}

