
/* cocos2d::UserDefault::getFloatForKey(char const*, float) */

undefined1  [16] __thiscall
cocos2d::UserDefault::getFloatForKey(UserDefault *this,char *param_1,float param_2)

{
  long lVar1;
  XMLDocument *pXVar2;
  XMLNode *pXVar3;
  char *pcVar4;
  float fVar5;
  double dVar6;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  XMLDocument *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  ulong uVar7;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = (XMLDocument *)0x0;
  pXVar3 = (XMLNode *)FUN_00fb7d80(param_1,&local_68);
  pXVar2 = local_68;
  if (pXVar3 != (XMLNode *)0x0) {
    if (*(long *)(pXVar3 + 0x30) != 0) {
      pcVar4 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(*(long *)(pXVar3 + 0x30) + 0x18));
      dVar6 = (double)utils::atof(pcVar4);
      uVar7 = (ulong)(uint)(float)dVar6;
      uVar9 = 0;
      (**(code **)(*(long *)this + 0x40))(uVar7,this,param_1);
      (**(code **)(*(long *)this + 0x60))(this);
      pXVar2 = local_68;
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
      goto LAB_00fb8954;
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
  basic_string<decltype(nullptr)>(local_60,"getFloatForKey");
  fVar5 = JniHelper::callStaticFloatMethod<char_const*,float>
                    ((basic_string *)&DAT_0178fd50,(basic_string *)local_60,param_1,param_2);
  uVar7 = CONCAT44(extraout_var,fVar5);
  uVar9 = extraout_var_00;
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00fb8954:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar8._8_8_ = uVar9;
  auVar8._0_8_ = uVar7;
  return auVar8;
}

