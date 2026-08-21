
/* cocostudio::DictionaryHelper::checkObjectExist_json(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, int) */

bool __thiscall
cocostudio::DictionaryHelper::checkObjectExist_json
          (DictionaryHelper *this,GenericValue *param_1,int param_2)

{
  if (((*(short *)(param_1 + 0x16) != 0) && (-1 < param_2)) && (*(short *)(param_1 + 0x16) == 4)) {
    return (uint)param_2 < *(uint *)param_1;
  }
  return false;
}

