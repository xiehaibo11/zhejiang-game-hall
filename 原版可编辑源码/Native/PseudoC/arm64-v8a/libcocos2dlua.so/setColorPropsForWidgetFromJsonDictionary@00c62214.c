
/* cocostudio::WidgetPropertiesReader0250::setColorPropsForWidgetFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setColorPropsForWidgetFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  DictionaryHelper *pDVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  WidgetPropertiesReader *this_00;
  Color3B aCStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar9 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"opacity");
  if ((uVar9 & 1) != 0) {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar5 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"opacity",0);
    (**(code **)(*(long *)param_1 + 0x490))(param_1,uVar5);
  }
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar9 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"colorR");
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar10 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"colorG");
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar11 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,"colorB");
  if ((uVar9 & 1) == 0) {
    uVar2 = 0xff;
  }
  else {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar2 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"colorR",0);
  }
  if ((uVar10 & 1) == 0) {
    uVar3 = 0xff;
  }
  else {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar3 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"colorG",0);
  }
  if ((uVar11 & 1) == 0) {
    uVar4 = 0xff;
  }
  else {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar4 = DictionaryHelper::getIntValue_json(pDVar8,param_2,"colorB",0);
  }
  cocos2d::Color3B::Color3B(aCStack_50,uVar2,uVar3,uVar4);
  this_00 = (WidgetPropertiesReader *)(**(code **)(*(long *)param_1 + 0x4c0))(param_1,aCStack_50);
  WidgetPropertiesReader::setAnchorPointForWidget(this_00,param_1,param_2);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getBooleanValue_json(pDVar8,param_2,"flipX",false);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::getBooleanValue_json(pDVar8,param_2,"flipY",false);
  (**(code **)(*(long *)param_1 + 0x598))(param_1,uVar6 & 1);
  (**(code **)(*(long *)param_1 + 0x5a8))(param_1,uVar7 & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

