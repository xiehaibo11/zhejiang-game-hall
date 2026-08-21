
/* cocosbuilder::Scale9SpriteLoader::onHandlePropTypeFloat(cocos2d::Node*, cocos2d::Node*, char
   const*, float, cocosbuilder::CCBReader*) */

void cocosbuilder::Scale9SpriteLoader::onHandlePropTypeFloat
               (Node *param_1,Node *param_2,char *param_3,float param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_5,"insetLeft");
  if (iVar1 == 0) {
    cocos2d::ui::Scale9Sprite::setInsetLeft((Scale9Sprite *)param_2,param_4);
    return;
  }
  iVar1 = strcmp((char *)param_5,"insetTop");
  if (iVar1 == 0) {
    cocos2d::ui::Scale9Sprite::setInsetTop((Scale9Sprite *)param_2,param_4);
    return;
  }
  iVar1 = strcmp((char *)param_5,"insetRight");
  if (iVar1 == 0) {
    cocos2d::ui::Scale9Sprite::setInsetRight((Scale9Sprite *)param_2,param_4);
    return;
  }
  iVar1 = strcmp((char *)param_5,"insetBottom");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeFloat(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  cocos2d::ui::Scale9Sprite::setInsetBottom((Scale9Sprite *)param_2,param_4);
  return;
}

