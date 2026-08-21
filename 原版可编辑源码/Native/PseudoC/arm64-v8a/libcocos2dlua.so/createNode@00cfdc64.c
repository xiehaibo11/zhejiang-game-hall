
/* cocosbuilder::MenuLoader::createNode(cocos2d::Node*, cocosbuilder::CCBReader*) */

long * cocosbuilder::MenuLoader::createNode(Node *param_1,CCBReader *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)cocos2d::Menu::create();
  (**(code **)(*plVar1 + 0x160))(plVar1,&cocos2d::Size::ZERO);
  return plVar1;
}

