
/* cocostudio::ScrollViewReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::ScrollViewReader::setPropsFromJsonDictionary
          (ScrollViewReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  byte bVar2;
  DictionaryHelper *pDVar3;
  float fVar4;
  float fVar5;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  LayoutReader::setPropsFromJsonDictionary((LayoutReader *)this,param_1,param_2);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar4 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"innerWidth",200.0);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar5 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"innerHeight",200.0);
  cocos2d::Size::Size(aSStack_50,fVar4,fVar5);
  cocos2d::ui::ScrollView::setInnerContainerSize((ScrollView *)param_1,aSStack_50);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar4 = (float)DictionaryHelper::getFloatValue_json(pDVar3,param_2,"direction",1.0);
  (**(code **)(*(long *)param_1 + 0x6d0))(param_1,(int)fVar4);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar2 = DictionaryHelper::getBooleanValue_json(pDVar3,param_2,"bounceEnable",false);
  cocos2d::ui::ScrollView::setBounceEnabled((ScrollView *)param_1,(bool)(bVar2 & 1));
  WidgetReader::setColorPropsFromJsonDictionary((WidgetReader *)this,param_1,param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

