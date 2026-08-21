
/* cocosbuilder::CCBReader::readNodeGraphFromFile(char const*, cocos2d::Ref*) */

void __thiscall
cocosbuilder::CCBReader::readNodeGraphFromFile(CCBReader *this,char *param_1,Ref *param_2)

{
  Director *this_00;
  Size *pSVar1;
  
  this_00 = (Director *)cocos2d::Director::getInstance();
  pSVar1 = (Size *)cocos2d::Director::getWinSize(this_00);
  readNodeGraphFromFile(this,param_1,param_2,pSVar1);
  return;
}

