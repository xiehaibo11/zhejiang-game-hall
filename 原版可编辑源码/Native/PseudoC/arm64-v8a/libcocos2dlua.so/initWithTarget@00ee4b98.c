
/* cocos2d::TargetedAction::initWithTarget(cocos2d::Node*, cocos2d::FiniteTimeAction*) */

undefined8 __thiscall
cocos2d::TargetedAction::initWithTarget
          (TargetedAction *this,Node *param_1,FiniteTimeAction *param_2)

{
  float fVar1;
  
  fVar1 = 1e-06;
  if (1e-06 < ABS(*(float *)(param_2 + 0x4c))) {
    fVar1 = *(float *)(param_2 + 0x4c);
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(float *)(this + 0x4c) = fVar1;
  *(undefined2 *)(this + 0x54) = 1;
  if (param_1 != (Node *)0x0) {
    Ref::retain((Ref *)param_1);
  }
                    /* try { // try from 00ee4bf0 to 00fe4ce3 has its CatchHandler @ 00ee4d38 */
  *(Node **)(this + 0x60) = param_1;
  Ref::retain((Ref *)param_2);
  *(FiniteTimeAction **)(this + 0x58) = param_2;
  return 1;
}

