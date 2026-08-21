
/* cocos2d::CSLoader::loadSimpleNode(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

CSLoader * __thiscall cocos2d::CSLoader::loadSimpleNode(CSLoader *this,GenericValue *param_1)

{
  CSLoader *this_00;
  
  this_00 = (CSLoader *)Node::create();
  initNode(this_00,(Node *)this_00,param_1);
  return this_00;
}

