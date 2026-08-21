
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::SliderReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::SliderReader::setPropsFromJsonDictionary
          (SliderReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  DictionaryHelper *pDVar4;
  ulong uVar5;
  GenericValue *pGVar6;
  long lVar7;
  float fVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  WidgetReader::setPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::getBooleanValue_json(pDVar4,param_2,"scale9Enable",false);
  cocos2d::ui::Slider::setScale9Enabled(SUB81(param_1,0));
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"percent",0);
  cocos2d::ui::Slider::setPercent((Slider *)param_1,iVar2);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar8 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"length",290.0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar6 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar4,param_2,"barFileNameData")
  ;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar4,pGVar6,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_98,P_Path);
  WidgetReader::getResourcePath(&local_80,this,pGVar6,&local_98,uVar3);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  cocos2d::ui::Slider::loadBarTexture((Slider *)param_1,&local_80,uVar3);
  if ((uVar5 & 1) != 0) {
    lVar7 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
    cocos2d::Size::Size((Size *)&local_98,fVar8,*(float *)(lVar7 + 4));
    (**(code **)(*(long *)param_1 + 0x160))(param_1,&local_98);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar6 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar4,param_2,"ballNormalData");
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar4,pGVar6,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b0,P_Path);
  WidgetReader::getResourcePath(&local_98,this,pGVar6,local_b0,uVar3);
  if (((byte)local_80 & 1) != 0) {
    *local_70 = 0;
    uStack_78 = 0;
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = local_88;
  local_88 = (void *)0x0;
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  cocos2d::ui::Slider::loadSlidBallTextureNormal((Slider *)param_1,&local_80,uVar3);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar6 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar4,param_2,"ballPressedData")
  ;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar4,pGVar6,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b0,P_Path);
  WidgetReader::getResourcePath(&local_98,this,pGVar6,local_b0,uVar3);
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  cocos2d::ui::Slider::loadSlidBallTexturePressed((Slider *)param_1,&local_98,uVar3);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar6 = (GenericValue *)
           DictionaryHelper::getSubDictionary_json(pDVar4,param_2,"ballDisabledData");
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar4,pGVar6,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,P_Path);
  WidgetReader::getResourcePath(local_b0,this,pGVar6,local_c8,uVar3);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  cocos2d::ui::Slider::loadSlidBallTextureDisabled((Slider *)param_1,local_b0,uVar3);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar6 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar4,param_2,"progressBarData")
  ;
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar4,pGVar6,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e0,P_Path);
  WidgetReader::getResourcePath(local_c8,this,pGVar6,local_e0,uVar3);
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  cocos2d::ui::Slider::loadProgressBarTexture((Slider *)param_1,local_c8,uVar3);
  WidgetReader::setColorPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

