
/* cocos2d::UserDefault::getIntegerForKey(char const*, int) */

int __thiscall cocos2d::UserDefault::getIntegerForKey(UserDefault *this,char *param_1,int param_2)

{
  long lVar1;
  XMLDocument *pXVar2;
  int iVar3;
  XMLNode *pXVar4;
  char *pcVar5;
  XMLDocument *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = (XMLDocument *)0x0;
  pXVar4 = (XMLNode *)FUN_00fb7d80(param_1,&local_68);
  pXVar2 = local_68;
  if (pXVar4 != (XMLNode *)0x0) {
    if (*(long *)(pXVar4 + 0x30) != 0) {
      pcVar5 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(*(long *)(pXVar4 + 0x30) + 0x18));
      iVar3 = atoi(pcVar5);
      (**(code **)(*(long *)this + 0x38))(this,param_1,iVar3);
      (**(code **)(*(long *)this + 0x60))(this);
      pXVar2 = local_68;
      tinyxml2::XMLNode::DeleteChild(*(XMLNode **)(pXVar4 + 0x10),pXVar4);
      if (_userDefault == (undefined8 *)0x0) {
        initXMLFilePath();
        _userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
        if (_userDefault != (undefined8 *)0x0) {
          *_userDefault = &PTR_getBoolForKey_01723920;
        }
      }
      pcVar5 = DAT_0178fd80;
      if ((_filePath & 1) == 0) {
        pcVar5 = &DAT_0178fd71;
      }
      tinyxml2::XMLDocument::SaveFile(pXVar2,pcVar5,false);
      if (pXVar2 != (XMLDocument *)0x0) {
        (**(code **)(*(long *)pXVar2 + 0x88))(pXVar2);
      }
      goto LAB_00fb847c;
    }
    tinyxml2::XMLNode::DeleteChild(*(XMLNode **)(pXVar4 + 0x10),pXVar4);
    if (_userDefault == (undefined8 *)0x0) {
      initXMLFilePath();
      _userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
      if (_userDefault != (undefined8 *)0x0) {
        *_userDefault = &PTR_getBoolForKey_01723920;
      }
    }
    pcVar5 = DAT_0178fd80;
    if ((_filePath & 1) == 0) {
      pcVar5 = &DAT_0178fd71;
    }
    tinyxml2::XMLDocument::SaveFile(pXVar2,pcVar5,false);
    if (pXVar2 != (XMLDocument *)0x0) {
      (**(code **)(*(long *)pXVar2 + 0x88))(pXVar2);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"getIntegerForKey");
  iVar3 = JniHelper::callStaticIntMethod<char_const*,int>
                    ((basic_string *)&DAT_0178fd50,(basic_string *)local_60,param_1,param_2);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00fb847c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}

