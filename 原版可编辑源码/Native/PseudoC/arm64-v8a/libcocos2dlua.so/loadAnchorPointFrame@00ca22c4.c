
/* cocostudio::timeline::ActionTimelineCache::loadAnchorPointFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long __thiscall
cocostudio::timeline::ActionTimelineCache::loadAnchorPointFrame
          (ActionTimelineCache *this,GenericValue *param_1)

{
  long lVar1;
  DictionaryHelper *pDVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = AnchorPointFrame::create();
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getFloatValue_json(pDVar2,param_1,"x",0.0);
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar4 = DictionaryHelper::getFloatValue_json(pDVar2,param_1,"y",0.0);
  *(undefined4 *)(lVar1 + 0x60) = uVar3;
  *(undefined4 *)(lVar1 + 100) = uVar4;
  return lVar1;
}

