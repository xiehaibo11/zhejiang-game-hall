
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::CheckBoxReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::CheckBoxReader::setPropsFromJsonDictionary
          (CheckBoxReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  undefined4 uVar2;
  DictionaryHelper *pDVar3;
  GenericValue *pGVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [16];
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  WidgetReader::setPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar4 = (GenericValue *)
           DictionaryHelper::getSubDictionary_json(pDVar3,param_2,"backGroundBoxData");
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar3,pGVar4,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,P_Path);
  WidgetReader::getResourcePath(local_70,this,pGVar4,local_88,uVar2);
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  cocos2d::ui::AbstractCheckButton::loadTextureBackGround
            ((AbstractCheckButton *)param_1,local_70,uVar2);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar4 = (GenericValue *)
           DictionaryHelper::getSubDictionary_json(pDVar3,param_2,"backGroundBoxSelectedData");
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar3,pGVar4,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,P_Path);
  WidgetReader::getResourcePath(local_88,this,pGVar4,local_a0,uVar2);
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  cocos2d::ui::AbstractCheckButton::loadTextureBackGroundSelected
            ((AbstractCheckButton *)param_1,local_88,uVar2);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar4 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar3,param_2,"frontCrossData");
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar3,pGVar4,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,P_Path);
  WidgetReader::getResourcePath(local_a0,this,pGVar4,local_b8,uVar2);
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  cocos2d::ui::AbstractCheckButton::loadTextureFrontCross
            ((AbstractCheckButton *)param_1,local_a0,uVar2);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar4 = (GenericValue *)
           DictionaryHelper::getSubDictionary_json(pDVar3,param_2,"backGroundBoxDisabledData");
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar3,pGVar4,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d0,P_Path);
  WidgetReader::getResourcePath(local_b8,this,pGVar4,local_d0,uVar2);
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  cocos2d::ui::AbstractCheckButton::loadTextureBackGroundDisabled
            ((AbstractCheckButton *)param_1,local_b8,uVar2);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar4 = (GenericValue *)
           DictionaryHelper::getSubDictionary_json(pDVar3,param_2,"frontCrossDisabledData");
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar3,pGVar4,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e8,P_Path);
  WidgetReader::getResourcePath(local_d0,this,pGVar4,local_e8,uVar2);
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  cocos2d::ui::AbstractCheckButton::loadTextureFrontCrossDisabled
            ((AbstractCheckButton *)param_1,local_d0,uVar2);
  WidgetReader::setColorPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

