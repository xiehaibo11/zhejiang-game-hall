
/* cocosbuilder::SpriteLoader::onHandlePropTypeFlip(cocos2d::Node*, cocos2d::Node*, char const*,
   bool*, cocosbuilder::CCBReader*) */

void cocosbuilder::SpriteLoader::onHandlePropTypeFlip
               (Node *param_1,Node *param_2,char *param_3,bool *param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp(param_4,"flip");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeFlip(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  cocos2d::Sprite::setFlippedX((Sprite *)param_2,(bool)*param_5);
  cocos2d::Sprite::setFlippedY((Sprite *)param_2,(bool)param_5[1]);
  return;
}

