
/* cocostudio::LoadingBarReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::LoadingBarReader::setPropsFromJsonDictionary
          (LoadingBarReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  DictionaryHelper *pDVar4;
  GenericValue *pGVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  WidgetReader::setPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar5 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar4,param_2,"textureData");
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,pGVar5,P_ResourceType,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,P_Path);
  WidgetReader::getResourcePath(local_80,this,pGVar5,local_98,uVar2);
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  cocos2d::ui::LoadingBar::loadTexture((LoadingBar *)param_1,local_80,uVar2);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getBooleanValue_json(pDVar4,param_2,"scale9Enable",false);
  cocos2d::ui::LoadingBar::setScale9Enabled(SUB81(param_1,0));
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar7 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"capInsetsX",0.0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar8 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"capInsetsY",0.0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar9 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"capInsetsWidth",1.0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar10 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"capInsetsHeight",1.0);
  if ((uVar6 & 1) != 0) {
    cocos2d::Rect::Rect((Rect *)local_98,fVar7,fVar8,fVar9,fVar10);
    cocos2d::ui::LoadingBar::setCapInsets(param_1);
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar7 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,P_Width,0.0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar8 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,P_Height,0.0);
  cocos2d::Size::Size((Size *)local_98,fVar7,fVar8);
  (**(code **)(*(long *)param_1 + 0x160))(param_1,local_98);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"direction",0);
  cocos2d::ui::LoadingBar::setDirection((LoadingBar *)param_1,uVar2);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar3 = DictionaryHelper::getIntValue_json(pDVar4,param_2,"percent",100);
  cocos2d::ui::LoadingBar::setPercent((LoadingBar *)param_1,(float)iVar3);
  WidgetReader::setColorPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

