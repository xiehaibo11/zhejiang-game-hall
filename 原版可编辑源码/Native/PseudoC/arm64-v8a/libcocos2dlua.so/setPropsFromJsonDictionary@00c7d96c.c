
/* cocostudio::ImageViewReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::ImageViewReader::setPropsFromJsonDictionary
          (ImageViewReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  undefined4 uVar2;
  DictionaryHelper *pDVar3;
  GenericValue *pGVar4;
  char *pcVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  Size local_98 [16];
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  WidgetReader::setPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pGVar4 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar3,param_2,"fileNameData");
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar3,pGVar4,P_ResourceType,0);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar5 = (char *)DictionaryHelper::getStringValue_json(pDVar3,pGVar4,P_Path,(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,pcVar5);
  uVar6 = (ulong)((byte)local_80[0] >> 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar6 = local_78;
  }
  if (uVar6 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_b0,P_Path);
    WidgetReader::getResourcePath(local_98,this,pGVar4,local_b0,uVar2);
    if (((byte)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    cocos2d::ui::ImageView::loadTexture((ImageView *)param_1,local_98,uVar2);
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
  }
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::checkObjectExist_json(pDVar3,param_2,"scale9Enable");
  if ((uVar6 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar6 = DictionaryHelper::getBooleanValue_json(pDVar3,param_2,"scale9Enable",false);
    uVar6 = uVar6 & 0xffffffff;
  }
  cocos2d::ui::ImageView::setScale9Enabled(SUB81(param_1,0));
  if ((uVar6 & 1) != 0) {
    pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar7 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"scale9Width",80.0);
    pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar8 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"scale9Height",80.0);
    cocos2d::Size::Size(local_98,fVar7,fVar8);
    (**(code **)(*(long *)param_1 + 0x160))(param_1,local_98);
    pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar7 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"capInsetsX",0.0);
    pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar8 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"capInsetsY",0.0);
    pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar9 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"capInsetsWidth",1.0);
    pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar10 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"capInsetsHeight",1.0);
    cocos2d::Rect::Rect((Rect *)local_98,fVar7,fVar8,fVar9,fVar10);
    cocos2d::ui::ImageView::setCapInsets(param_1);
  }
  WidgetReader::setColorPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

