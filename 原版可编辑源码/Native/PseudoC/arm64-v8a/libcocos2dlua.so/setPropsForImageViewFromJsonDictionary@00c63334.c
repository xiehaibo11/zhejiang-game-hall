
/* cocostudio::WidgetPropertiesReader0250::setPropsForImageViewFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForImageViewFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  DictionaryHelper *pDVar4;
  char *__s;
  ulong uVar5;
  size_t sVar6;
  byte *pbVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x48))();
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_2,"fileName",(char *)0x0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"scale9Enable");
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar5 = DictionaryHelper::getBooleanValue_json(pDVar4,param_2,"scale9Enable",false);
    uVar5 = uVar5 & 0xffffffff;
  }
  cocos2d::ui::ImageView::setScale9Enabled(SUB81(param_1,0));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_80,(basic_string *)(this + 0x28));
  if ((__s == (char *)0x0) || (*__s == '\0')) {
    pbVar7 = (byte *)0x0;
  }
  else {
    sVar6 = strlen(__s);
    pbVar7 = (byte *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(local_80,__s,sVar6);
    if ((*pbVar7 & 1) == 0) {
      pbVar7 = pbVar7 + 1;
    }
    else {
      pbVar7 = *(byte **)(pbVar7 + 0x10);
    }
  }
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar8 = DictionaryHelper::getBooleanValue_json(pDVar4,param_2,"useMergedTexture",false);
  if ((uVar5 & 1) == 0) {
    if ((uVar8 & 1) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,(char *)pbVar7);
      cocos2d::ui::ImageView::loadTexture((ImageView *)param_1,local_98,0);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,__s);
      cocos2d::ui::ImageView::loadTexture((ImageView *)param_1,local_98,1);
    }
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
  }
  else {
    if ((uVar8 & 1) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,(char *)pbVar7);
      cocos2d::ui::ImageView::loadTexture((ImageView *)param_1,local_98,0);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,__s);
      cocos2d::ui::ImageView::loadTexture((ImageView *)param_1,local_98,1);
    }
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar2 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"scale9Width");
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar3 = DictionaryHelper::checkObjectExist_json(pDVar4,param_2,"scale9Height");
    if ((uVar2 & uVar3 & 1) != 0) {
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      fVar9 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"scale9Width",0.0);
      pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
      fVar10 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"scale9Height",0.0);
      cocos2d::Size::Size((Size *)local_98,fVar9,fVar10);
      (**(code **)(*(long *)param_1 + 0x160))(param_1,local_98);
    }
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar9 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"capInsetsX",0.0);
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar10 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"capInsetsY",0.0);
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar11 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"capInsetsWidth",0.0);
    pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
    fVar12 = (float)DictionaryHelper::getFloatValue_json(pDVar4,param_2,"capInsetsHeight",0.0);
    cocos2d::Rect::Rect((Rect *)local_98,fVar9,fVar10,fVar11,fVar12);
    cocos2d::ui::ImageView::setCapInsets(param_1);
  }
  (**(code **)(*(long *)this + 0x50))(this,param_1,param_2);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

