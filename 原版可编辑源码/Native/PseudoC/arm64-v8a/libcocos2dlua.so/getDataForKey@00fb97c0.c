
/* cocos2d::UserDefault::getDataForKey(char const*, cocos2d::Data const&) */

void cocos2d::UserDefault::getDataForKey(char *param_1,Data *param_2)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  XMLDocument *pXVar4;
  bool bVar5;
  int iVar6;
  XMLNode *pXVar7;
  char *pcVar8;
  size_t sVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Data *in_x2;
  char *in_x4;
  Data *in_x8;
  XMLDocument *local_98;
  uchar *local_90 [2];
  void *local_80;
  byte local_78;
  undefined7 uStack_77;
  uint local_70;
  void *local_68;
  char *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_98 = (XMLDocument *)0x0;
  pXVar7 = (XMLNode *)FUN_00fb7d80(param_2,&local_98);
  pXVar4 = local_98;
  if (pXVar7 != (XMLNode *)0x0) {
    if (*(long *)(pXVar7 + 0x30) == 0) {
      tinyxml2::XMLNode::DeleteChild(*(XMLNode **)(pXVar7 + 0x10),pXVar7);
      if (_userDefault == (undefined8 *)0x0) {
        initXMLFilePath();
        _userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
        if (_userDefault != (undefined8 *)0x0) {
          *_userDefault = &PTR_getBoolForKey_01723920;
        }
      }
      pcVar8 = DAT_0178fd80;
      if ((_filePath & 1) == 0) {
        pcVar8 = &DAT_0178fd71;
      }
      tinyxml2::XMLDocument::SaveFile(pXVar4,pcVar8,false);
      if (pXVar4 != (XMLDocument *)0x0) {
        (**(code **)(*(long *)pXVar4 + 0x88))(pXVar4);
      }
    }
    else {
      pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(*(long *)(pXVar7 + 0x30) + 0x18));
      sVar9 = strlen(pcVar8);
      iVar6 = base64Decode(pcVar8,sVar9,&local_78);
      if (CONCAT71(uStack_77,local_78) != 0) {
        Data::Data(in_x8);
        Data::fastSet(in_x8,(uchar *)CONCAT71(uStack_77,local_78),(long)iVar6);
        (**(code **)(*(long *)param_1 + 0x58))(param_1,param_2);
        (**(code **)(*(long *)param_1 + 0x60))(param_1);
        pXVar4 = local_98;
        tinyxml2::XMLNode::DeleteChild(*(XMLNode **)(pXVar7 + 0x10),pXVar7);
        if (_userDefault == (undefined8 *)0x0) {
          initXMLFilePath();
          _userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
          if (_userDefault != (undefined8 *)0x0) {
            *_userDefault = &PTR_getBoolForKey_01723920;
          }
        }
        pcVar8 = DAT_0178fd80;
        if ((_filePath & 1) == 0) {
          pcVar8 = &DAT_0178fd71;
        }
        tinyxml2::XMLDocument::SaveFile(pXVar4,pcVar8,false);
        if (pXVar4 != (XMLDocument *)0x0) {
          (**(code **)(*(long *)pXVar4 + 0x88))(pXVar4);
        }
        goto LAB_00fb9a7c;
      }
    }
  }
  local_60 = (char *)0x0;
  uVar10 = Data::isNull(in_x2);
  if ((uVar10 & 1) == 0) {
    uVar11 = Data::getBytes(in_x2);
    uVar12 = Data::getSize(in_x2);
    base64Encode(uVar11,uVar12,&local_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_90,"getStringForKey");
  JniHelper::callStaticStringMethod<char_const*,char_const*>
            ((JniHelper *)&DAT_0178fd50,(basic_string *)local_90,(basic_string *)param_2,local_60,
             in_x4);
  if (((byte)local_90[0]._0_1_ & 1) != 0) {
    operator_delete(local_80);
  }
  if (local_60 != (char *)0x0) {
    free(local_60);
  }
  bVar5 = (local_78 & 1) != 0;
  pvVar2 = (void *)((ulong)&local_78 | 1);
  if (bVar5) {
    pvVar2 = local_68;
  }
  uVar1 = (uint)(local_78 >> 1);
  if (bVar5) {
    uVar1 = local_70;
  }
  local_90[0] = (uchar *)0x0;
  iVar6 = base64Decode(pvVar2,uVar1,local_90);
  if ((iVar6 == 0) || (local_90[0] == (uchar *)0x0)) {
    Data::Data(in_x8,in_x2);
  }
  else {
    Data::Data(in_x8);
    Data::fastSet(in_x8,local_90[0],(long)iVar6);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
LAB_00fb9a7c:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

