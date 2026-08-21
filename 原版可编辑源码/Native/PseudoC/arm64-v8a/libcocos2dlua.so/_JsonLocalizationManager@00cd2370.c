
/* cocostudio::JsonLocalizationManager::~JsonLocalizationManager() */

void __thiscall
cocostudio::JsonLocalizationManager::~JsonLocalizationManager(JsonLocalizationManager *this)

{
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  *this_00;
  
  this_00 = *(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              **)(this + 8);
  *(undefined ***)this = &PTR__JsonLocalizationManager_016ce3a8;
  if (this_00 !=
      (GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
       *)0x0) {
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::~GenericDocument(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}

