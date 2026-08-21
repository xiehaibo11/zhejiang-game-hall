
/* cocostudio::LayoutReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::LayoutReader::setPropsFromJsonDictionary
          (LayoutReader *this,Widget *param_1,GenericValue *param_2)

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
  uint uVar12;
  undefined4 uVar13;
  DictionaryHelper *pDVar14;
  ulong uVar15;
  Director *this_00;
  Size *pSVar16;
  long lVar17;
  GenericValue *pGVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uchar local_c4;
  Color3B local_b8 [16];
  void *local_a8;
  float local_a0;
  float fStack_9c;
  void *local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  WidgetReader::setPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar15 = DictionaryHelper::checkObjectExist_json(pDVar14,param_2,P_AdaptScreen);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  if ((uVar15 & 1) == 0) {
LAB_00c81418:
    fVar22 = (float)DictionaryHelper::getFloatValue_json(pDVar14,param_2,P_Width,0.0);
    pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fStack_9c = (float)DictionaryHelper::getFloatValue_json(pDVar14,param_2,P_Height,0.0);
  }
  else {
    uVar15 = DictionaryHelper::getBooleanValue_json(pDVar14,param_2,P_AdaptScreen,false);
    if ((uVar15 & 1) == 0) {
      pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
      goto LAB_00c81418;
    }
    this_00 = (Director *)cocos2d::Director::getInstance();
    pSVar16 = (Size *)cocos2d::Director::getWinSize(this_00);
    cocos2d::Size::Size((Size *)&local_a0,pSVar16);
    fVar22 = local_a0;
  }
  cocos2d::Size::Size((Size *)&local_a0,fVar22,fStack_9c);
  (**(code **)(*(long *)param_1 + 0x160))(param_1,&local_a0);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar12 = DictionaryHelper::getBooleanValue_json(pDVar14,param_2,"clipAble",false);
  (**(code **)(*(long *)param_1 + 0x680))(param_1,uVar12 & 1);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar2 = DictionaryHelper::getBooleanValue_json(pDVar14,param_2,"backGroundScale9Enable",false);
  cocos2d::ui::Layout::setBackGroundImageScale9Enabled((Layout *)param_1,(bool)(bVar2 & 1));
  if (param_1 == (Widget *)0x0) {
    pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  }
  else {
    lVar17 = __dynamic_cast(param_1,&cocos2d::ui::Widget::typeinfo,&cocos2d::ui::PageView::typeinfo,
                            0);
    if (lVar17 != 0) {
      pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
      iVar21 = 0x96;
      local_c4 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgColorR",0x96);
      iVar19 = 0xff;
      iVar20 = 100;
      goto LAB_00c815d4;
    }
    lVar17 = __dynamic_cast(param_1,&cocos2d::ui::Widget::typeinfo,&cocos2d::ui::ListView::typeinfo,
                            0);
    if (lVar17 != 0) {
      pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
      iVar21 = 0x96;
      local_c4 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgColorR",0x96);
      iVar20 = 0xff;
      iVar19 = 0x96;
      goto LAB_00c815d4;
    }
    lVar17 = __dynamic_cast(param_1,&cocos2d::ui::Widget::typeinfo,
                            &cocos2d::ui::ScrollView::typeinfo,0);
    pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
    if (lVar17 != 0) {
      iVar19 = 0xff;
      local_c4 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgColorR",0xff);
      iVar20 = 100;
      iVar21 = 0x96;
      goto LAB_00c815d4;
    }
  }
  iVar19 = 0x96;
  local_c4 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgColorR",0x96);
  iVar20 = 0xff;
  iVar21 = 200;
LAB_00c815d4:
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgColorG",iVar21);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgColorB",iVar20);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgStartColorR",0xff);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgStartColorG",0xff);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgStartColorB",0xff);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar8 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgEndColorR",iVar19);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar9 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgEndColorG",iVar21);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar10 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgEndColorB",iVar20);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar22 = (float)DictionaryHelper::getFloatValue_json(pDVar14,param_2,"vectorX",0.0);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fStack_9c = (float)DictionaryHelper::getFloatValue_json(pDVar14,param_2,"vectorY",-0.5);
  local_a0 = fVar22;
  cocos2d::ui::Layout::setBackGroundColorVector((Layout *)param_1,(Vec2 *)&local_a0);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar11 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"bgColorOpacity",100);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar13 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"colorType",1);
  cocos2d::ui::Layout::setBackGroundColorType((Layout *)param_1,uVar13);
  cocos2d::Color3B::Color3B((Color3B *)&local_a0,uVar5,uVar6,uVar7);
  cocos2d::Color3B::Color3B(local_b8,uVar8,uVar9,uVar10);
  cocos2d::ui::Layout::setBackGroundColor((Layout *)param_1,(Color3B *)&local_a0,local_b8);
  cocos2d::Color3B::Color3B((Color3B *)&local_a0,local_c4,uVar3,uVar4);
  cocos2d::ui::Layout::setBackGroundColor((Layout *)param_1,(Color3B *)&local_a0);
  cocos2d::ui::Layout::setBackGroundColorOpacity((Layout *)param_1,uVar11);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar18 = (GenericValue *)
            DictionaryHelper::getSubDictionary_json(pDVar14,param_2,"backGroundImageData");
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar13 = DictionaryHelper::getIntValue_json(pDVar14,pGVar18,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_b8,P_Path);
  WidgetReader::getResourcePath(&local_a0,this,pGVar18,local_b8,uVar13);
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  cocos2d::ui::Layout::setBackGroundImage((Layout *)param_1,&local_a0,uVar13);
  if ((bVar2 & 1) != 0) {
    pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar22 = (float)DictionaryHelper::getFloatValue_json(pDVar14,param_2,"capInsetsX",0.0);
    pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar23 = (float)DictionaryHelper::getFloatValue_json(pDVar14,param_2,"capInsetsY",0.0);
    pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar24 = (float)DictionaryHelper::getFloatValue_json(pDVar14,param_2,"capInsetsWidth",1.0);
    pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar25 = (float)DictionaryHelper::getFloatValue_json(pDVar14,param_2,"capInsetsHeight",1.0);
    cocos2d::Rect::Rect((Rect *)local_b8,fVar22,fVar23,fVar24,fVar25);
    cocos2d::ui::Layout::setBackGroundImageCapInsets((Layout *)param_1,local_b8);
  }
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar15 = DictionaryHelper::checkObjectExist_json(pDVar14,param_2,"layoutType");
  if ((uVar15 & 1) != 0) {
    pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar13 = DictionaryHelper::getIntValue_json(pDVar14,param_2,"layoutType",0);
    (**(code **)(*(long *)param_1 + 0x690))(param_1,uVar13);
  }
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar14,param_2,P_ColorR,0xff);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::getIntValue_json(pDVar14,param_2,P_ColorG,0xff);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::getIntValue_json(pDVar14,param_2,P_ColorB,0xff);
  cocos2d::Color3B::Color3B(local_b8,uVar3,uVar4,uVar5);
  cocos2d::ui::Layout::setBackGroundImageColor((Layout *)param_1,local_b8);
  pDVar14 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar14,param_2,P_Opacity,0xff);
  cocos2d::ui::Layout::setBackGroundImageOpacity((Layout *)param_1,uVar3);
  WidgetReader::setColorPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  if (((uint)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

