
/* cocostudio::WidgetReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetReader::setPropsFromJsonDictionary
          (WidgetReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  DictionaryHelper *pDVar5;
  ulong uVar6;
  Director *this_00;
  Size *pSVar7;
  char *pcVar8;
  GenericValue *pGVar9;
  LayoutParameter *this_01;
  char *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_70;
  float fStack_6c;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,P_IgnoreSize);
  if ((uVar6 & 1) != 0) {
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar2 = DictionaryHelper::getBooleanValue_json(pDVar5,param_2,P_IgnoreSize,false);
    (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar2 & 1);
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar5,param_2,P_SizeType,0);
  cocos2d::ui::Widget::setSizeType(param_1,uVar3);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar5,param_2,P_PositionType,0);
  cocos2d::ui::Widget::setPositionType(param_1,uVar3);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar11 = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_SizePercentX,0.0);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fStack_6c = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_SizePercentY,0.0);
  local_70 = fVar11;
  (**(code **)(*(long *)param_1 + 0x5c0))(param_1,&local_70);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar11 = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_PositionPercentX,0.0);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fStack_6c = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_PositionPercentY,0.0);
  local_70 = fVar11;
  cocos2d::ui::Widget::setPositionPercent(param_1,(Vec2 *)&local_70);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,P_AdaptScreen);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  if ((uVar6 & 1) == 0) {
LAB_00cdb284:
    fVar12 = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_Width,0.0);
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar11 = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_Height,0.0);
  }
  else {
    uVar6 = DictionaryHelper::getBooleanValue_json(pDVar5,param_2,P_AdaptScreen,false);
    if ((uVar6 & 1) == 0) {
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      goto LAB_00cdb284;
    }
    this_00 = (Director *)cocos2d::Director::getInstance();
    pSVar7 = (Size *)cocos2d::Director::getWinSize(this_00);
    cocos2d::Size::Size((Size *)&local_70,pSVar7);
    fVar11 = fStack_6c;
    fVar12 = local_70;
  }
  cocos2d::Size::Size((Size *)&local_70,fVar12,fVar11);
  (**(code **)(*(long *)param_1 + 0x160))(param_1,&local_70);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar5,param_2,P_Tag,0);
  (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar3);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar4 = DictionaryHelper::getIntValue_json(pDVar5,param_2,P_ActionTag,0);
  cocos2d::ui::Widget::setActionTag(param_1,iVar4);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getBooleanValue_json(pDVar5,param_2,P_TouchAble,false);
  (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar2 & 1);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_2,P_Name,(char *)0x0);
  pcVar10 = "default";
  if (pcVar8 != (char *)0x0) {
    pcVar10 = pcVar8;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,pcVar10);
  (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_70);
  if (((uint)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar11 = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_X,0.0);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fStack_6c = (float)DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_Y,0.0);
  local_70 = fVar11;
  (**(code **)(*(long *)param_1 + 0x98))(param_1,&local_70);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_ScaleX,1.0);
  (**(code **)(*(long *)param_1 + 0x50))(param_1);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_ScaleY,1.0);
  (**(code **)(*(long *)param_1 + 0x60))(param_1);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  DictionaryHelper::getFloatValue_json(pDVar5,param_2,P_Rotation,0.0);
  (**(code **)(*(long *)param_1 + 0x180))(param_1);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,P_Visbile);
  if ((uVar6 & 1) != 0) {
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar2 = DictionaryHelper::getBooleanValue_json(pDVar5,param_2,P_Visbile,false);
    (**(code **)(*(long *)param_1 + 0x170))(param_1,uVar2 & 1);
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar5,param_2,P_ZOrder,0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar3);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::checkObjectExist_json(pDVar5,param_2,P_LayoutParameter);
  if ((uVar6 & 1) != 0) {
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pGVar9 = (GenericValue *)
             DictionaryHelper::getSubDictionary_json(pDVar5,param_2,P_LayoutParameter);
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    iVar4 = DictionaryHelper::getIntValue_json(pDVar5,pGVar9,P_Type,0);
    if (iVar4 == 2) {
      this_01 = (LayoutParameter *)cocos2d::ui::RelativeLayoutParameter::create();
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar10 = (char *)DictionaryHelper::getStringValue_json
                                  (pDVar5,pGVar9,P_RelativeName,(char *)0x0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,pcVar10);
      cocos2d::ui::RelativeLayoutParameter::setRelativeName
                ((RelativeLayoutParameter *)this_01,(basic_string *)&local_70);
      if (((uint)local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar10 = (char *)DictionaryHelper::getStringValue_json
                                  (pDVar5,pGVar9,P_RelativeToName,(char *)0x0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,pcVar10);
      cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
                ((RelativeLayoutParameter *)this_01,(basic_string *)&local_70);
      if (((uint)local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar3 = DictionaryHelper::getIntValue_json(pDVar5,pGVar9,P_Align,0);
      cocos2d::ui::RelativeLayoutParameter::setAlign((RelativeLayoutParameter *)this_01,uVar3);
    }
    else {
      if (iVar4 != 1) goto LAB_00cdb64c;
      this_01 = (LayoutParameter *)cocos2d::ui::LinearLayoutParameter::create();
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar3 = DictionaryHelper::getIntValue_json(pDVar5,pGVar9,P_Gravity,0);
      cocos2d::ui::LinearLayoutParameter::setGravity((LinearLayoutParameter *)this_01,uVar3);
    }
    if (this_01 != (LayoutParameter *)0x0) {
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      fVar11 = (float)DictionaryHelper::getFloatValue_json(pDVar5,pGVar9,P_MarginLeft,0.0);
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      fVar12 = (float)DictionaryHelper::getFloatValue_json(pDVar5,pGVar9,P_MarginTop,0.0);
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      fVar13 = (float)DictionaryHelper::getFloatValue_json(pDVar5,pGVar9,P_MarginRight,0.0);
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      fVar14 = (float)DictionaryHelper::getFloatValue_json(pDVar5,pGVar9,P_MarginDown,0.0);
      cocos2d::ui::Margin::Margin((Margin *)&local_70,fVar11,fVar12,fVar13,fVar14);
      cocos2d::ui::LayoutParameter::setMargin(this_01,(Margin *)&local_70);
      cocos2d::ui::Widget::setLayoutParameter(param_1,this_01);
    }
  }
LAB_00cdb64c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

