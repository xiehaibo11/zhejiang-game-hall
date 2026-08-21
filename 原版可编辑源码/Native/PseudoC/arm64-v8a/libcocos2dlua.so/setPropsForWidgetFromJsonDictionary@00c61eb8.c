
/* cocostudio::WidgetPropertiesReader0250::setPropsForWidgetFromJsonDictionary(cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0250::setPropsForWidgetFromJsonDictionary
          (WidgetPropertiesReader0250 *this,Widget *param_1,GenericValue *param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  DictionaryHelper *pDVar6;
  ulong uVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar6,param_2,"ignoreSize");
  if ((uVar7 & 1) != 0) {
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar3 = DictionaryHelper::getBooleanValue_json(pDVar6,param_2,"ignoreSize",false);
    (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar3 & 1);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar9 = (float)DictionaryHelper::getFloatValue_json(pDVar6,param_2,"width",0.0);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar10 = (float)DictionaryHelper::getFloatValue_json(pDVar6,param_2,"height",0.0);
  cocos2d::Size::Size((Size *)&local_50,fVar9,fVar10);
  (**(code **)(*(long *)param_1 + 0x160))(param_1,&local_50);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::getIntValue_json(pDVar6,param_2,"tag",0);
  (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar4);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar5 = DictionaryHelper::getIntValue_json(pDVar6,param_2,"actiontag",0);
  cocos2d::ui::Widget::setActionTag(param_1,iVar5);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getBooleanValue_json(pDVar6,param_2,"touchAble",false);
  (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar3 & 1);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar6,param_2,"name",(char *)0x0);
  pcVar1 = "default";
  if (pcVar8 != (char *)0x0) {
    pcVar1 = pcVar8;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_50,pcVar1);
  (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_50);
  if (((byte)local_50._0_1_ & 1) != 0) {
    operator_delete(local_40);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::getFloatValue_json(pDVar6,param_2,"x",0.0);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uStack_4c = DictionaryHelper::getFloatValue_json(pDVar6,param_2,"y",0.0);
  local_50 = uVar4;
  (**(code **)(*(long *)param_1 + 0x98))(param_1,&local_50);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar6,param_2,"scaleX");
  if ((uVar7 & 1) != 0) {
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    DictionaryHelper::getFloatValue_json(pDVar6,param_2,"scaleX",0.0);
    (**(code **)(*(long *)param_1 + 0x50))(param_1);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar6,param_2,"scaleY");
  if ((uVar7 & 1) != 0) {
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    DictionaryHelper::getFloatValue_json(pDVar6,param_2,"scaleY",0.0);
    (**(code **)(*(long *)param_1 + 0x60))(param_1);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar6,param_2,"rotation");
  if ((uVar7 & 1) != 0) {
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    DictionaryHelper::getFloatValue_json(pDVar6,param_2,"rotation",0.0);
    (**(code **)(*(long *)param_1 + 0x180))(param_1);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::checkObjectExist_json(pDVar6,param_2,"visible");
  if ((uVar7 & 1) != 0) {
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    uVar3 = DictionaryHelper::getBooleanValue_json(pDVar6,param_2,"visible",false);
    (**(code **)(*(long *)param_1 + 0x170))(param_1,uVar3 & 1);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::getIntValue_json(pDVar6,param_2,"ZOrder",0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar4);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

