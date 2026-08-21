
/* cocostudio::timeline::ActionTimelineCache::loadColorFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long __thiscall
cocostudio::timeline::ActionTimelineCache::loadColorFrame
          (ActionTimelineCache *this,GenericValue *param_1)

{
  long lVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  long lVar5;
  DictionaryHelper *pDVar6;
  undefined2 local_50;
  undefined1 local_4e;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = ColorFrame::create();
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getIntValue_json(pDVar6,param_1,"red",0);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getIntValue_json(pDVar6,param_1,"green",0);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::getIntValue_json(pDVar6,param_1,"blue",0);
  cocos2d::Color3B::Color3B((Color3B *)&local_50,uVar2,uVar3,uVar4);
  *(undefined1 *)(lVar5 + 0x5b) = local_4e;
  *(undefined2 *)(lVar5 + 0x59) = local_50;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

