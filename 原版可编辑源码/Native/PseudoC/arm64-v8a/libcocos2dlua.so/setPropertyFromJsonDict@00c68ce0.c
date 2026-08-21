
/* cocostudio::SceneReader::setPropertyFromJsonDict(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, cocos2d::Node*) */

void __thiscall
cocostudio::SceneReader::setPropertyFromJsonDict
          (SceneReader *this,GenericValue *param_1,Node *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  DictionaryHelper *pDVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getFloatValue_json(pDVar4,param_1,"x",0.0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::getFloatValue_json(pDVar4,param_1,"y",0.0);
  (**(code **)(*(long *)param_2 + 200))(uVar6,uVar7,param_2);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar2 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"visible",1);
  (**(code **)(*(long *)param_2 + 0x170))(param_2,iVar2 != 0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"objecttag",-1);
  (**(code **)(*(long *)param_2 + 0x2c0))(param_2,uVar3);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar4,param_1,"zorder",0);
  (**(code **)(*(long *)param_2 + 0x18))(param_2,uVar3);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar6 = DictionaryHelper::getFloatValue_json(pDVar4,param_1,"scalex",1.0);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar7 = DictionaryHelper::getFloatValue_json(pDVar4,param_1,"scaley",1.0);
  (**(code **)(*(long *)param_2 + 0x50))(uVar6,param_2);
  (**(code **)(*(long *)param_2 + 0x60))(uVar7,param_2);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  DictionaryHelper::getFloatValue_json(pDVar4,param_1,"rotation",0.0);
  (**(code **)(*(long *)param_2 + 0x180))(param_2);
  pDVar4 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar5 = (char *)DictionaryHelper::getStringValue_json(pDVar4,param_1,"name","");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,pcVar5);
  (**(code **)(*(long *)param_2 + 0x2d0))(param_2,local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

