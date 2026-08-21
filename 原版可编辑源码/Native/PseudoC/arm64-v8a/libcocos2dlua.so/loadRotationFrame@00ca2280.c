
/* cocostudio::timeline::ActionTimelineCache::loadRotationFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long __thiscall
cocostudio::timeline::ActionTimelineCache::loadRotationFrame
          (ActionTimelineCache *this,GenericValue *param_1)

{
  long lVar1;
  DictionaryHelper *this_00;
  undefined4 uVar2;
  
  lVar1 = RotationFrame::create();
  this_00 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar2 = DictionaryHelper::getFloatValue_json(this_00,param_1,"rotation",0.0);
  *(undefined4 *)(lVar1 + 0x58) = uVar2;
  return lVar1;
}

