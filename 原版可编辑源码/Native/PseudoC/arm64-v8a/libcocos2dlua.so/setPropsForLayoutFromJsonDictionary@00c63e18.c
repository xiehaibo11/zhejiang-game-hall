
/* cocostudio::WidgetPropertiesReader0250::setPropsForLayoutFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForLayoutFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  byte bVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  DictionaryHelper *pDVar16;
  char *__s;
  size_t sVar17;
  byte *pbVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  Color3B local_b8 [16];
  void *local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  void *local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x48))();
  if ((param_1 == (Widget *)0x0) ||
     ((lVar15 = __dynamic_cast(param_1,&cocos2d::ui::Layout::typeinfo,
                               &cocos2d::ui::ScrollView::typeinfo,0), lVar15 == 0 &&
      (lVar15 = __dynamic_cast(param_1,&cocos2d::ui::Layout::typeinfo,
                               &cocos2d::ui::ListView::typeinfo,0), lVar15 == 0)))) {
    pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar13 = DictionaryHelper::getBooleanValue_json(pDVar16,param_2,"clipAble",false);
    (**(code **)(*(long *)param_1 + 0x680))(param_1,uVar13 & 1);
  }
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar2 = DictionaryHelper::getBooleanValue_json(pDVar16,param_2,"backGroundScale9Enable",false);
  cocos2d::ui::Layout::setBackGroundImageScale9Enabled((Layout *)param_1,(bool)(bVar2 & 1));
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"bgColorR",0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"bgColorG",0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"bgColorB",0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"bgStartColorR",0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"bgStartColorG",0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar8 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"bgStartColorB",0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar9 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"bgEndColorR",0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar10 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"bgEndColorG",0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar11 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"bgEndColorB",0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar13 = DictionaryHelper::getFloatValue_json(pDVar16,param_2,"vectorX",0.0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uStack_9c = DictionaryHelper::getFloatValue_json(pDVar16,param_2,"vectorY",0.0);
  local_a0 = uVar13;
  cocos2d::ui::Layout::setBackGroundColorVector((Layout *)param_1,(Vec2 *)&local_a0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar12 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"bgColorOpacity",0);
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar14 = DictionaryHelper::getIntValue_json(pDVar16,param_2,"colorType",0);
  cocos2d::ui::Layout::setBackGroundColorType((Layout *)param_1,uVar14);
  cocos2d::Color3B::Color3B((Color3B *)&local_a0,uVar6,uVar7,uVar8);
  cocos2d::Color3B::Color3B(local_b8,uVar9,uVar10,uVar11);
  cocos2d::ui::Layout::setBackGroundColor((Layout *)param_1,(Color3B *)&local_a0,local_b8);
  cocos2d::Color3B::Color3B((Color3B *)&local_a0,uVar3,uVar4,uVar5);
  cocos2d::ui::Layout::setBackGroundColor((Layout *)param_1,(Color3B *)&local_a0);
  cocos2d::ui::Layout::setBackGroundColorOpacity((Layout *)param_1,uVar12);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a0,(basic_string *)(this + 0x28));
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar16,param_2,"backGroundImage",(char *)0x0)
  ;
  if ((__s == (char *)0x0) || (*__s == '\0')) {
    pbVar18 = (byte *)0x0;
  }
  else {
    sVar17 = strlen(__s);
    pbVar18 = (byte *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_a0,__s,sVar17);
    if ((*pbVar18 & 1) == 0) {
      pbVar18 = pbVar18 + 1;
    }
    else {
      pbVar18 = *(byte **)(pbVar18 + 0x10);
    }
  }
  pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar19 = DictionaryHelper::getBooleanValue_json(pDVar16,param_2,"useMergedTexture",false);
  if ((bVar2 & 1) == 0) {
    if ((uVar19 & 1) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_b8,(char *)pbVar18);
      cocos2d::ui::Layout::setBackGroundImage((Layout *)param_1,local_b8,0);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_b8,__s);
      cocos2d::ui::Layout::setBackGroundImage((Layout *)param_1,local_b8,1);
    }
    if (((byte)local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  else {
    pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar20 = (float)DictionaryHelper::getFloatValue_json(pDVar16,param_2,"capInsetsX",0.0);
    pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar21 = (float)DictionaryHelper::getFloatValue_json(pDVar16,param_2,"capInsetsY",0.0);
    pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar22 = (float)DictionaryHelper::getFloatValue_json(pDVar16,param_2,"capInsetsWidth",0.0);
    pDVar16 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar23 = (float)DictionaryHelper::getFloatValue_json(pDVar16,param_2,"capInsetsHeight",0.0);
    if ((uVar19 & 1) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_b8,(char *)pbVar18);
      cocos2d::ui::Layout::setBackGroundImage((Layout *)param_1,local_b8,0);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_b8,__s);
      cocos2d::ui::Layout::setBackGroundImage((Layout *)param_1,local_b8,1);
    }
    if (((byte)local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    cocos2d::Rect::Rect((Rect *)local_b8,fVar20,fVar21,fVar22,fVar23);
    cocos2d::ui::Layout::setBackGroundImageCapInsets((Layout *)param_1,local_b8);
  }
  (**(code **)(*(long *)this + 0x50))(this,param_1,param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

