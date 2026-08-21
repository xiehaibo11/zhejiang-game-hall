
XMLNode * FUN_00fb7d80(char *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  XMLDocument *this;
  char *pcVar5;
  uint uVar6;
  XMLNode *pXVar8;
  byte local_70 [8];
  ulong local_68;
  char *local_60;
  long local_58;
  uint uVar7;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)cocos2d::FileUtils::getInstance();
  uVar4 = (**(code **)(*plVar3 + 0x128))(plVar3,&cocos2d::UserDefault::_filePath);
  pXVar8 = (XMLNode *)0x0;
  if ((param_1 == (char *)0x0) || ((uVar4 & 1) == 0)) goto LAB_00fb7f10;
  this = operator_new(0x280,(nothrow_t *)&std::nothrow);
  if (this != (XMLDocument *)0x0) {
    tinyxml2::XMLDocument::XMLDocument(this,1,0);
  }
  *param_2 = this;
  plVar3 = (long *)cocos2d::FileUtils::getInstance();
  if (cocos2d::UserDefault::_userDefault == (undefined8 *)0x0) {
    cocos2d::UserDefault::initXMLFilePath();
    cocos2d::UserDefault::_userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
    if (cocos2d::UserDefault::_userDefault != (undefined8 *)0x0) {
      *cocos2d::UserDefault::_userDefault = &PTR_getBoolForKey_01723920;
    }
  }
  (**(code **)(*plVar3 + 0x18))(local_70,plVar3,&cocos2d::UserDefault::_filePath);
  uVar4 = (ulong)(local_70[0] >> 1);
  if ((local_70[0] & 1) != 0) {
    uVar4 = local_68;
  }
  if (uVar4 == 0) {
LAB_00fb7ee8:
    pXVar8 = (XMLNode *)0x0;
    uVar7 = 2;
    uVar6 = 2;
  }
  else {
    pcVar5 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pcVar5 = local_60;
    }
    tinyxml2::XMLDocument::Parse(this,pcVar5,0xffffffffffffffff);
    pXVar8 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)this,(char *)0x0);
    if (pXVar8 == (XMLNode *)0x0) goto LAB_00fb7ee8;
    pXVar8 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar8,(char *)0x0);
    if (pXVar8 == (XMLNode *)0x0) {
      if (cocos2d::UserDefault::_userDefault == (undefined8 *)0x0) {
        cocos2d::UserDefault::initXMLFilePath();
        cocos2d::UserDefault::_userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
        if (cocos2d::UserDefault::_userDefault != (undefined8 *)0x0) {
          *cocos2d::UserDefault::_userDefault = &PTR_getBoolForKey_01723920;
        }
      }
      pcVar5 = DAT_0178fd80;
      if ((cocos2d::UserDefault::_filePath & 1) == 0) {
        pcVar5 = &DAT_0178fd71;
      }
      remove(pcVar5);
      pXVar8 = (XMLNode *)0x0;
      uVar7 = 1;
      uVar6 = 1;
    }
    else {
      for (; pXVar8 != (XMLNode *)0x0;
          pXVar8 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar8,(char *)0x0)) {
        pcVar5 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(pXVar8 + 0x18));
        iVar2 = strcmp(pcVar5,param_1);
        if (iVar2 == 0) break;
      }
      uVar7 = 0;
      uVar6 = 0;
    }
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
    uVar6 = uVar7;
  }
  if ((uVar6 | 2) != 2) {
    pXVar8 = (XMLNode *)0x0;
  }
LAB_00fb7f10:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return pXVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

