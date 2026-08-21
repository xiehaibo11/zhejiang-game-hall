
/* cocosbuilder::Scale9SpriteLoader::createNode(cocos2d::Node*, cocosbuilder::CCBReader*) */

long * cocosbuilder::Scale9SpriteLoader::createNode(Node *param_1,CCBReader *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)cocos2d::ui::Scale9Sprite::create();
  (**(code **)(*plVar1 + 0x148))(plVar1,&cocos2d::Vec2::ZERO);
  return plVar1;
}

