
/* cocostudio::WidgetReader::setColorPropsFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetReader::setColorPropsFromJsonDictionary
          (WidgetReader *this,Widget *param_1,GenericValue *param_2)

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
  WidgetReader *this_00;
  Color3B aCStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar9 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,P_Opacity);
  if ((uVar9 & 1) != 0) {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar5 = DictionaryHelper::getIntValue_json(pDVar8,param_2,P_Opacity,0);
    (**(code **)(*(long *)param_1 + 0x490))(param_1,uVar5);
  }
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar9 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,P_ColorR);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar10 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,P_ColorG);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar11 = DictionaryHelper::checkObjectExist_json(pDVar8,param_2,P_ColorB);
  if ((uVar9 & 1) == 0) {
    uVar2 = 0xff;
  }
  else {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar2 = DictionaryHelper::getIntValue_json(pDVar8,param_2,P_ColorR,0);
  }
  if ((uVar10 & 1) == 0) {
    uVar3 = 0xff;
  }
  else {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar3 = DictionaryHelper::getIntValue_json(pDVar8,param_2,P_ColorG,0);
  }
  if ((uVar11 & 1) == 0) {
    uVar4 = 0xff;
  }
  else {
    pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar4 = DictionaryHelper::getIntValue_json(pDVar8,param_2,P_ColorB,0);
  }
  cocos2d::Color3B::Color3B(aCStack_70,uVar2,uVar3,uVar4);
  this_00 = (WidgetReader *)(**(code **)(*(long *)param_1 + 0x4c0))(param_1,aCStack_70);
  setAnchorPointForWidget(this_00,param_1,param_2);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getBooleanValue_json(pDVar8,param_2,P_FlipX,false);
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::getBooleanValue_json(pDVar8,param_2,P_FlipY,false);
  (**(code **)(*(long *)param_1 + 0x598))(param_1,uVar6 & 1);
  (**(code **)(*(long *)param_1 + 0x5a8))(param_1,uVar7 & 1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

