
/* std::__ndk1::__function::__func<std::__ndk1::__bind<unsigned int
   (dragonBones::JSONDataParser::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int),
   dragonBones::JSONDataParser*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&, std::__ndk1::placeholders::__ph<3> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<unsigned int
   (dragonBones::JSONDataParser::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int),
   dragonBones::JSONDataParser*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&, std::__ndk1::placeholders::__ph<3> const&> >, unsigned
   int (rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned
   int)>::TEMPNAMEPLACEHOLDERVALUE(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int&&, unsigned int&&)
    */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<unsigned_int(dragonBones::JSONDataParser::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int),dragonBones::JSONDataParser*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>,std::__ndk1::allocator<std::__ndk1::__bind<unsigned_int(dragonBones::JSONDataParser::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int),dragonBones::JSONDataParser*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>>,unsigned_int(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int)>
::operator()(__func<std::__ndk1::__bind<unsigned_int(dragonBones::JSONDataParser::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int),dragonBones::JSONDataParser*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>,std::__ndk1::allocator<std::__ndk1::__bind<unsigned_int(dragonBones::JSONDataParser::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int),dragonBones::JSONDataParser*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>>,unsigned_int(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int)>
             *this,GenericValue *param_1,uint *param_2,uint *param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00d4ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1,*param_2,*param_3);
  return;
}

