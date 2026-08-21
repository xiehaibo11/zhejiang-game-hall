
/* std::__ndk1::__function::__func<std::__ndk1::__bind<cocos2d::Node*
   (cocos2d::CSLoader::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&), cocos2d::CSLoader*,
   std::__ndk1::placeholders::__ph<1> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<cocos2d::Node*
   (cocos2d::CSLoader::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&), cocos2d::CSLoader*,
   std::__ndk1::placeholders::__ph<1> const&> >, cocos2d::Node*
   (rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >
   const&)>::TEMPNAMEPLACEHOLDERVALUE(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<cocos2d::Node*(cocos2d::CSLoader::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&),cocos2d::CSLoader*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<cocos2d::Node*(cocos2d::CSLoader::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&),cocos2d::CSLoader*,std::__ndk1::placeholders::__ph<1>const&>>,cocos2d::Node*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>
::operator()(__func<std::__ndk1::__bind<cocos2d::Node*(cocos2d::CSLoader::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&),cocos2d::CSLoader*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<cocos2d::Node*(cocos2d::CSLoader::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&),cocos2d::CSLoader*,std::__ndk1::placeholders::__ph<1>const&>>,cocos2d::Node*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>
             *this,GenericValue *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00cb3fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

