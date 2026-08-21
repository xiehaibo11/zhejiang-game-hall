
/* cocos2d::SpriteBatchNode::highestAtlasIndexInChild(cocos2d::Sprite*) */

undefined8 __thiscall
cocos2d::SpriteBatchNode::highestAtlasIndexInChild(SpriteBatchNode *this,Sprite *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)param_1 + 0x240);
  while( true ) {
    plVar1 = (long *)(*pcVar2)(param_1);
    if (*plVar1 == plVar1[1]) break;
    param_1 = *(Sprite **)(plVar1[1] + -8);
    pcVar2 = *(code **)(*(long *)param_1 + 0x240);
  }
  return *(undefined8 *)(param_1 + 0x308);
}

