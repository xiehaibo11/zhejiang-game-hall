
/* cocostudio::timeline::ActionTimelineCache::loadInnerActionFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

InnerActionFrame * __thiscall
cocostudio::timeline::ActionTimelineCache::loadInnerActionFrame
          (ActionTimelineCache *this,GenericValue *param_1)

{
  undefined4 uVar1;
  int iVar2;
  InnerActionFrame *this_00;
  DictionaryHelper *pDVar3;
  
  this_00 = (InnerActionFrame *)InnerActionFrame::create();
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar1 = DictionaryHelper::getIntValue_json(pDVar3,param_1,"innerActionType",0);
  pDVar3 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar2 = DictionaryHelper::getIntValue_json(pDVar3,param_1,"startFrame",0);
  *(undefined4 *)(this_00 + 0x58) = uVar1;
  InnerActionFrame::setStartFrameIndex(this_00,iVar2);
  return this_00;
}

