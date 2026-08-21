
/* cocostudio::timeline::ActionTimelineCache::loadVisibleFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long __thiscall
cocostudio::timeline::ActionTimelineCache::loadVisibleFrame
          (ActionTimelineCache *this,GenericValue *param_1)

{
  byte bVar1;
  long lVar2;
  DictionaryHelper *this_00;
  
  lVar2 = VisibleFrame::create();
  this_00 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar1 = DictionaryHelper::getBooleanValue_json(this_00,param_1,"value",false);
  *(byte *)(lVar2 + 0x58) = bVar1 & 1;
  return lVar2;
}

