
/* cocosbuilder::CCBReader::createSceneWithNodeGraphFromFile(char const*) */

long * __thiscall
cocosbuilder::CCBReader::createSceneWithNodeGraphFromFile(CCBReader *this,char *param_1)

{
  Director *this_00;
  Size *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  
  this_00 = (Director *)cocos2d::Director::getInstance();
  pSVar1 = (Size *)cocos2d::Director::getWinSize(this_00);
  uVar2 = readNodeGraphFromFile(this,param_1,(Ref *)0x0,pSVar1);
  plVar3 = (long *)cocos2d::Scene::create();
  (**(code **)(*plVar3 + 0x208))(plVar3,uVar2);
  return plVar3;
}

