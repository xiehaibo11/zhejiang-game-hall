
/* cocostudio::WidgetReader::setAnchorPointForWidget(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetReader::setAnchorPointForWidget
          (WidgetReader *this,Widget *param_1,GenericValue *param_2)

{
  long lVar1;
  DictionaryHelper *pDVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::checkObjectExist_json(pDVar2,param_2,P_AnchorPointX);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined4 *)(**(code **)(*(long *)param_1 + 0x150))(param_1);
    uVar7 = *puVar4;
  }
  else {
    pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar7 = DictionaryHelper::getFloatValue_json(pDVar2,param_2,P_AnchorPointX,0.0);
  }
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar5 = DictionaryHelper::checkObjectExist_json(pDVar2,param_2,P_AnchorPointY);
  if ((uVar5 & 1) == 0) {
    lVar6 = (**(code **)(*(long *)param_1 + 0x150))(param_1);
    if ((uVar3 & 1) == 0) goto LAB_00cdba50;
    uStack_4c = *(undefined4 *)(lVar6 + 4);
  }
  else {
    pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uStack_4c = DictionaryHelper::getFloatValue_json(pDVar2,param_2,P_AnchorPointY,0.0);
  }
  local_50 = uVar7;
  (**(code **)(*(long *)param_1 + 0x148))(param_1,&local_50);
LAB_00cdba50:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

