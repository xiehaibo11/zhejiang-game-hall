
/* cocostudio::Bone::setLocalZOrder(int) */

void __thiscall cocostudio::Bone::setLocalZOrder(Bone *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0x30))();
  if (iVar1 == param_1) {
    return;
  }
  cocos2d::Node::setLocalZOrder((Node *)this,param_1);
  return;
}

