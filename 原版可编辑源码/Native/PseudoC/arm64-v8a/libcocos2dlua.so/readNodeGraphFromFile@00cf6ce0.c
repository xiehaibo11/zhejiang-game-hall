
/* cocosbuilder::CCBReader::readNodeGraphFromFile(char const*) */

void __thiscall cocosbuilder::CCBReader::readNodeGraphFromFile(CCBReader *this,char *param_1)

{
  Director *this_00;
  Size *pSVar1;
  
  this_00 = (Director *)cocos2d::Director::getInstance();
  pSVar1 = (Size *)cocos2d::Director::getWinSize(this_00);
  readNodeGraphFromFile(this,param_1,(Ref *)0x0,pSVar1);
  return;
}

