
void FUN_00fb9ed0(undefined8 param_1)

{
  char *pcVar1;
  XMLDocument *this;
  XMLNode *pXVar2;
  XMLDocument *local_28;
  
  local_28 = (XMLDocument *)0x0;
  pXVar2 = (XMLNode *)FUN_00fb7d80(param_1,&local_28);
  this = local_28;
  if (pXVar2 != (XMLNode *)0x0) {
    tinyxml2::XMLNode::DeleteChild(*(XMLNode **)(pXVar2 + 0x10),pXVar2);
    if (cocos2d::UserDefault::_userDefault == (undefined8 *)0x0) {
      cocos2d::UserDefault::initXMLFilePath();
      cocos2d::UserDefault::_userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
      if (cocos2d::UserDefault::_userDefault != (undefined8 *)0x0) {
        *cocos2d::UserDefault::_userDefault = &PTR_getBoolForKey_01723920;
      }
    }
    pcVar1 = DAT_0178fd80;
    if ((cocos2d::UserDefault::_filePath & 1) == 0) {
      pcVar1 = &DAT_0178fd71;
    }
    tinyxml2::XMLDocument::SaveFile(this,pcVar1,false);
    if (this != (XMLDocument *)0x0) {
      (**(code **)(*(long *)this + 0x88))(this);
    }
  }
  return;
}

