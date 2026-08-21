
/* cocos2d::UserDefault::getBoolForKey(char const*, bool) */

bool __thiscall cocos2d::UserDefault::getBoolForKey(UserDefault *this,char *param_1,bool param_2)

{
  long lVar1;
  XMLDocument *pXVar2;
  bool bVar3;
  int iVar4;
  XMLNode *pXVar5;
  char *pcVar6;
  XMLDocument *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = (XMLDocument *)0x0;
  pXVar5 = (XMLNode *)FUN_00fb7d80(param_1,&local_68);
  pXVar2 = local_68;
  if (pXVar5 != (XMLNode *)0x0) {
    if (*(long *)(pXVar5 + 0x30) != 0) {
      pcVar6 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(*(long *)(pXVar5 + 0x30) + 0x18));
      iVar4 = strcmp(pcVar6,"true");
      bVar3 = iVar4 == 0;
      (**(code **)(*(long *)this + 0x30))(this,param_1,bVar3);
      (**(code **)(*(long *)this + 0x60))(this);
      pXVar2 = local_68;
      tinyxml2::XMLNode::DeleteChild(*(XMLNode **)(pXVar5 + 0x10),pXVar5);
      if (_userDefault == (undefined8 *)0x0) {
        initXMLFilePath();
        _userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
        if (_userDefault != (undefined8 *)0x0) {
          *_userDefault = &PTR_getBoolForKey_01723920;
        }
      }
      pcVar6 = DAT_0178fd80;
      if ((_filePath & 1) == 0) {
        pcVar6 = &DAT_0178fd71;
      }
      tinyxml2::XMLDocument::SaveFile(pXVar2,pcVar6,false);
      if (pXVar2 != (XMLDocument *)0x0) {
        (**(code **)(*(long *)pXVar2 + 0x88))(pXVar2);
      }
      goto LAB_00fb7d34;
    }
    tinyxml2::XMLNode::DeleteChild(*(XMLNode **)(pXVar5 + 0x10),pXVar5);
    if (_userDefault == (undefined8 *)0x0) {
      initXMLFilePath();
      _userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
      if (_userDefault != (undefined8 *)0x0) {
        *_userDefault = &PTR_getBoolForKey_01723920;
      }
    }
    pcVar6 = DAT_0178fd80;
    if ((_filePath & 1) == 0) {
      pcVar6 = &DAT_0178fd71;
    }
    tinyxml2::XMLDocument::SaveFile(pXVar2,pcVar6,false);
    if (pXVar2 != (XMLDocument *)0x0) {
      (**(code **)(*(long *)pXVar2 + 0x88))(pXVar2);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"getBoolForKey");
  bVar3 = JniHelper::callStaticBooleanMethod<char_const*,bool>
                    ((basic_string *)&DAT_0178fd50,(basic_string *)local_60,param_1,param_2);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00fb7d34:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}

