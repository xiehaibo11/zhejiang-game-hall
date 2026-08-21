
/* cocos2d::UserDefault::getStringForKey(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::UserDefault::getStringForKey(char *param_1,basic_string *param_2)

{
  long lVar1;
  XMLDocument *pXVar2;
  XMLNode *pXVar3;
  char *pcVar4;
  basic_string *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  XMLDocument *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80 = (XMLDocument *)0x0;
  pXVar3 = (XMLNode *)FUN_00fb7d80(param_2,&local_80);
  pXVar2 = local_80;
  if (pXVar3 != (XMLNode *)0x0) {
    if (*(long *)(pXVar3 + 0x30) != 0) {
      pcVar4 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(*(long *)(pXVar3 + 0x30) + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(in_x8,pcVar4);
      (**(code **)(*(long *)param_1 + 0x50))(param_1,param_2);
      (**(code **)(*(long *)param_1 + 0x60))(param_1);
      pXVar2 = local_80;
      tinyxml2::XMLNode::DeleteChild(*(XMLNode **)(pXVar3 + 0x10),pXVar3);
      if (_userDefault == (undefined8 *)0x0) {
        initXMLFilePath();
        _userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
        if (_userDefault != (undefined8 *)0x0) {
          *_userDefault = &PTR_getBoolForKey_01723920;
        }
      }
      pcVar4 = DAT_0178fd80;
      if ((_filePath & 1) == 0) {
        pcVar4 = &DAT_0178fd71;
      }
      tinyxml2::XMLDocument::SaveFile(pXVar2,pcVar4,false);
      if (pXVar2 != (XMLDocument *)0x0) {
        (**(code **)(*(long *)pXVar2 + 0x88))(pXVar2);
      }
      goto LAB_00fb93b8;
    }
    tinyxml2::XMLNode::DeleteChild(*(XMLNode **)(pXVar3 + 0x10),pXVar3);
    if (_userDefault == (undefined8 *)0x0) {
      initXMLFilePath();
      _userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
      if (_userDefault != (undefined8 *)0x0) {
        *_userDefault = &PTR_getBoolForKey_01723920;
      }
    }
    pcVar4 = DAT_0178fd80;
    if ((_filePath & 1) == 0) {
      pcVar4 = &DAT_0178fd71;
    }
    tinyxml2::XMLDocument::SaveFile(pXVar2,pcVar4,false);
    if (pXVar2 != (XMLDocument *)0x0) {
      (**(code **)(*(long *)pXVar2 + 0x88))(pXVar2);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"getStringForKey");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_78,in_x2);
  JniHelper::
  callStaticStringMethod<char_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            ((JniHelper *)&DAT_0178fd50,local_60,param_2,local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00fb93b8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

