
/* cocosbuilder::MenuItemImageLoader::onHandlePropTypeSpriteFrame(cocos2d::Node*, cocos2d::Node*,
   char const*, cocos2d::SpriteFrame*, cocosbuilder::CCBReader*) */

void cocosbuilder::MenuItemImageLoader::onHandlePropTypeSpriteFrame
               (Node *param_1,Node *param_2,char *param_3,SpriteFrame *param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_4,"normalSpriteFrame");
  if (iVar1 == 0) {
    if (param_5 != (CCBReader *)0x0) {
      cocos2d::MenuItemImage::setNormalSpriteFrame((MenuItemImage *)param_2,(SpriteFrame *)param_5);
      return;
    }
  }
  else {
    iVar1 = strcmp((char *)param_4,"selectedSpriteFrame");
    if (iVar1 == 0) {
      if (param_5 != (CCBReader *)0x0) {
        cocos2d::MenuItemImage::setSelectedSpriteFrame
                  ((MenuItemImage *)param_2,(SpriteFrame *)param_5);
        return;
      }
    }
    else {
      iVar1 = strcmp((char *)param_4,"disabledSpriteFrame");
      if (iVar1 != 0) {
        NodeLoader::onHandlePropTypeSpriteFrame(param_1,param_2,param_3,param_4,param_5);
        return;
      }
      if (param_5 != (CCBReader *)0x0) {
        cocos2d::MenuItemImage::setDisabledSpriteFrame
                  ((MenuItemImage *)param_2,(SpriteFrame *)param_5);
        return;
      }
    }
  }
  return;
}

