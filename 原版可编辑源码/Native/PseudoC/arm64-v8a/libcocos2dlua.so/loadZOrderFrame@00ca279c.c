
/* cocostudio::timeline::ActionTimelineCache::loadZOrderFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long __thiscall
cocostudio::timeline::ActionTimelineCache::loadZOrderFrame
          (ActionTimelineCache *this,GenericValue *param_1)

{
  undefined4 uVar1;
  long lVar2;
  DictionaryHelper *this_00;
  
  lVar2 = ZOrderFrame::create();
  this_00 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getIntValue_json(this_00,param_1,"value",0);
  *(undefined4 *)(lVar2 + 0x58) = uVar1;
  return lVar2;
}

