
/* cocostudio::timeline::BoneNode::addSkin(cocos2d::Node*, bool, bool) */

void __thiscall
cocostudio::timeline::BoneNode::addSkin(BoneNode *this,Node *param_1,bool param_2,bool param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3) {
    puVar2 = *(undefined8 **)(this + 0x398);
    for (puVar1 = *(undefined8 **)(this + 0x390); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      (**(code **)(*(long *)*puVar1 + 0x170))((long *)*puVar1,0);
    }
  }
  cocos2d::Node::addChild((Node *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00cb5944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x170))(param_1,param_2);
  return;
}

