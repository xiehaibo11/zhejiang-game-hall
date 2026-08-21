
/* cocostudio::ListViewReader::setPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::ListViewReader::setPropsFromJsonDictionary
          (ListViewReader *this,Widget *param_1,GenericValue *param_2)

{
  undefined4 uVar1;
  DictionaryHelper *pDVar2;
  float fVar3;
  
  ScrollViewReader::setPropsFromJsonDictionary((ScrollViewReader *)this,param_1,param_2);
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar3 = (float)DictionaryHelper::getFloatValue_json(pDVar2,param_2,"direction",2.0);
  (**(code **)(*(long *)param_1 + 0x6d0))(param_1,(int)fVar3);
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getIntValue_json(pDVar2,param_2,P_Gravity,3);
  cocos2d::ui::ListView::setGravity((ListView *)param_1,uVar1);
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar3 = (float)DictionaryHelper::getFloatValue_json(pDVar2,param_2,"itemMargin",0.0);
  cocos2d::ui::ListView::setItemsMargin((ListView *)param_1,fVar3);
  return;
}

