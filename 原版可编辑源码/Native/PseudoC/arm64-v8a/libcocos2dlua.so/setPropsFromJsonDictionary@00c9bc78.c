
/* cocostudio::TextFieldReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::TextFieldReader::setPropsFromJsonDictionary
          (TextFieldReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  DictionaryHelper *pDVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  basic_string *pbVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  Size aSStack_98 [8];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [8];
  ulong local_70;
  char *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  WidgetReader::setPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar6,param_2,"placeHolder");
  if ((uVar7 & 1) != 0) {
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar8 = (char *)DictionaryHelper::getStringValue_json
                               (pDVar6,param_2,"placeHolder","input words here");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,pcVar8);
    cocos2d::ui::TextField::setPlaceHolder((basic_string *)param_1);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar6,param_2,"text","Text Tield");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,pcVar8);
  cocos2d::ui::TextField::setString((basic_string *)param_1);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar3 = DictionaryHelper::getIntValue_json(pDVar6,param_2,"fontSize",0x14);
  cocos2d::ui::TextField::setFontSize((TextField *)param_1,iVar3);
  lVar9 = GUIReader::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_60,(basic_string *)(lVar9 + 0x28));
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar6,param_2,"fontName","");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,pcVar8);
  uVar7 = (ulong)((byte)local_78[0] >> 1);
  pcVar8 = (char *)((ulong)local_78 | 1);
  if (((byte)local_78[0] & 1) != 0) {
    uVar7 = local_70;
    pcVar8 = local_68;
  }
  pbVar10 = (basic_string *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (local_60,pcVar8,uVar7);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_90,pbVar10);
  plVar11 = (long *)cocos2d::FileUtils::getInstance();
  uVar7 = (**(code **)(*plVar11 + 0x128))(plVar11,local_90);
  if ((uVar7 & 1) == 0) {
    cocos2d::ui::TextField::setFontName((TextField *)param_1,(basic_string *)local_78);
  }
  else {
    cocos2d::ui::TextField::setFontName((TextField *)param_1,(basic_string *)local_90);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::checkObjectExist_json(pDVar6,param_2,"touchSizeWidth");
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::checkObjectExist_json(pDVar6,param_2,"touchSizeHeight");
  if ((uVar4 & uVar5 & 1) != 0) {
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar12 = (float)DictionaryHelper::getFloatValue_json(pDVar6,param_2,"touchSizeWidth",0.0);
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar13 = (float)DictionaryHelper::getFloatValue_json(pDVar6,param_2,"touchSizeHeight",0.0);
    cocos2d::Size::Size(aSStack_98,fVar12,fVar13);
    cocos2d::ui::TextField::setTouchSize((TextField *)param_1,aSStack_98);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar2 = DictionaryHelper::getBooleanValue_json(pDVar6,param_2,"maxLengthEnable",false);
  cocos2d::ui::TextField::setMaxLengthEnabled((TextField *)param_1,(bool)(bVar2 & 1));
  if ((bVar2 & 1) != 0) {
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    iVar3 = DictionaryHelper::getIntValue_json(pDVar6,param_2,"maxLength",10);
    cocos2d::ui::TextField::setMaxLength((TextField *)param_1,iVar3);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar2 = DictionaryHelper::getBooleanValue_json(pDVar6,param_2,"passwordEnable",false);
  cocos2d::ui::TextField::setPasswordEnabled((TextField *)param_1,(bool)(bVar2 & 1));
  if ((bVar2 & 1) != 0) {
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar6,param_2,"passwordStyleText","*");
    cocos2d::ui::TextField::setPasswordStyleText((TextField *)param_1,pcVar8);
  }
  WidgetReader::setColorPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

