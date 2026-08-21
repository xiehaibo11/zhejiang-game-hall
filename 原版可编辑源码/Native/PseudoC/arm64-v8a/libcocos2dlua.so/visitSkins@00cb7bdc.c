
/* cocostudio::timeline::BoneNode::visitSkins(cocos2d::Renderer*, cocostudio::timeline::BoneNode*)
   const */

void __thiscall
cocostudio::timeline::BoneNode::visitSkins(BoneNode *this,Renderer *param_1,BoneNode *param_2)

{
  undefined8 *puVar1;
  
  if (param_2[0x1f9] != (BoneNode)0x0) {
    cocos2d::Director::pushMatrix(*(Director **)(this + 0x198),0);
    cocos2d::Director::loadMatrix(*(Director **)(this + 0x198),0,param_2 + 0x8c);
    if (*(long *)(param_2 + 0x390) != *(long *)(param_2 + 0x398)) {
      (**(code **)(*(long *)param_2 + 0x2b0))(param_2);
      for (puVar1 = *(undefined8 **)(param_2 + 0x390); puVar1 != *(undefined8 **)(param_2 + 0x398);
          puVar1 = puVar1 + 1) {
        (**(code **)(*(long *)*puVar1 + 0x358))((long *)*puVar1,param_1,param_2 + 0x8c,1);
      }
    }
    cocos2d::Director::popMatrix(*(Director **)(this + 0x198),0);
    return;
  }
  return;
}

