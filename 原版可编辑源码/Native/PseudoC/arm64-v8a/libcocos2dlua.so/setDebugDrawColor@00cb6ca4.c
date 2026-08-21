
/* cocostudio::timeline::BoneNode::setDebugDrawColor(cocos2d::Color4F const&) */

void __thiscall cocostudio::timeline::BoneNode::setDebugDrawColor(BoneNode *this,Color4F *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x364) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x35c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00cb6cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x528))();
  return;
}

