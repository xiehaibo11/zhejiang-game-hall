
/* cocos2d::SpriteBatchNode::lowestAtlasIndexInChild(cocos2d::Sprite*) */

undefined8 __thiscall
cocos2d::SpriteBatchNode::lowestAtlasIndexInChild(SpriteBatchNode *this,Sprite *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)param_1 + 0x240);
  while (plVar1 = (long *)(*pcVar2)(param_1), plVar1[1] != *plVar1) {
    param_1 = *(Sprite **)*plVar1;
    pcVar2 = *(code **)(*(long *)param_1 + 0x240);
  }
  return *(undefined8 *)(param_1 + 0x308);
}

