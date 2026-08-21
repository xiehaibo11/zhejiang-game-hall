
/* cocostudio::TextReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::TextReader::setPropsFromJsonDictionary
          (TextReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  DictionaryHelper *pDVar8;
  char *pcVar9;
  basic_string *pbVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
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
  lVar7 = GUIReader::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_60,(basic_string *)(lVar7 + 0x28));
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar2 = DictionaryHelper::getBooleanValue_json(pDVar8,param_2,"touchScaleEnable",false);
  cocos2d::ui::Text::setTouchScaleChangeEnabled((Text *)param_1,(bool)(bVar2 & 1));
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar9 = (char *)DictionaryHelper::getStringValue_json(pDVar8,param_2,"text","Text Label");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,pcVar9);
  cocos2d::ui::Text::setString((Text *)param_1,(basic_string *)local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar3 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"fontSize",0x14);
  cocos2d::ui::Text::setFontSize((Text *)param_1,(float)iVar3);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar9 = (char *)DictionaryHelper::getStringValue_json(pDVar8,param_2,"fontName","");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,pcVar9);
  uVar12 = (ulong)((byte)local_78[0] >> 1);
  pcVar9 = (char *)((ulong)local_78 | 1);
  if (((byte)local_78[0] & 1) != 0) {
    uVar12 = local_70;
    pcVar9 = local_68;
  }
  pbVar10 = (basic_string *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (local_60,pcVar9,uVar12);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_90,pbVar10);
  plVar11 = (long *)cocos2d::FileUtils::getInstance();
  uVar12 = (**(code **)(*plVar11 + 0x128))(plVar11,local_90);
  if ((uVar12 & 1) == 0) {
    cocos2d::ui::Text::setFontName((Text *)param_1,(basic_string *)local_78);
  }
  else {
    cocos2d::ui::Text::setFontName((Text *)param_1,(basic_string *)local_90);
  }
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"areaWidth");
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"areaHeight");
  if ((uVar4 & uVar5 & 1) != 0) {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar13 = (float)DictionaryHelper::getFloatValue_json(pDVar8,param_2,"areaWidth",0.0);
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar14 = (float)DictionaryHelper::getFloatValue_json(pDVar8,param_2,"areaHeight",0.0);
    cocos2d::Size::Size(aSStack_98,fVar13,fVar14);
    cocos2d::ui::Text::setTextAreaSize((Text *)param_1,aSStack_98);
  }
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar12 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"hAlignment");
  if ((uVar12 & 1) != 0) {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar6 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"hAlignment",0);
    cocos2d::ui::Text::setTextHorizontalAlignment((Text *)param_1,uVar6);
  }
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar12 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"vAlignment");
  if ((uVar12 & 1) != 0) {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar6 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"vAlignment",0);
    cocos2d::ui::Text::setTextVerticalAlignment((Text *)param_1,uVar6);
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

