
/* cocos2d::TargetedAction::setForcedTarget(cocos2d::Node*) */

void __thiscall cocos2d::TargetedAction::setForcedTarget(TargetedAction *this,Node *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x60);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Node *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x60);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Node **)(this + 0x60) = param_1;
  }
                    /* try { // try from 00ee4e84 to 00fe4edf has its CatchHandler @ 00ee4e84
                       catch() { ... } // from try @ 00ee4e84 with catch @ 00ee4e84
                       catch() { ... } // from try @ 00ee4fcc with catch @ 00ee4e84 */
  return;
}

