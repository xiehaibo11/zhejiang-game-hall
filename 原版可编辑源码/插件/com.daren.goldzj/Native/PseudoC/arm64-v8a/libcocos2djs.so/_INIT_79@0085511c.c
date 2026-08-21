
void _INIT_79(void)

{
  dragonBones::BaseObject::__allDragonBonesObjects = 0;
  DAT_01d3dfa0 = 0;
  DAT_01d3dfa8 = 0;
  __cxa_atexit(FUN_00d2ded0,&dragonBones::BaseObject::__allDragonBonesObjects,&PTR_LOOP_01d1b000);
  DAT_01d3dfc0 = 0;
  DAT_01d3dfc8 = 0;
  dragonBones::BaseObject::_maxCountMap = &DAT_01d3dfc0;
  __cxa_atexit(std::__ndk1::
               map<unsigned_long,unsigned_int,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,unsigned_int>>>
               ::~map,&dragonBones::BaseObject::_maxCountMap,&PTR_LOOP_01d1b000);
  DAT_01d3dfd8 = 0;
  DAT_01d3dfe0 = 0;
  dragonBones::BaseObject::_poolsMap = &DAT_01d3dfd8;
  __cxa_atexit(std::__ndk1::
               map<unsigned_long,std::__ndk1::vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>>>>
               ::~map,&dragonBones::BaseObject::_poolsMap,&PTR_LOOP_01d1b000);
  dragonBones::BaseObject::_recycleOrDestroyCallback._32_8_ = 0;
  __cxa_atexit(std::__ndk1::function<void(dragonBones::BaseObject*,int)>::~function,
               dragonBones::BaseObject::_recycleOrDestroyCallback,&PTR_LOOP_01d1b000);
  return;
}

