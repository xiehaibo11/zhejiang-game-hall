
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
   int)>::__clone(std::__ndk1::__function::__base<unsigned int
   (rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int)>*)
   const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<unsigned_int(dragonBones::JSONDataParser::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int),dragonBones::JSONDataParser*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>,std::__ndk1::allocator<std::__ndk1::__bind<unsigned_int(dragonBones::JSONDataParser::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int),dragonBones::JSONDataParser*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>>,unsigned_int(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int)>
::__clone(__func<std::__ndk1::__bind<unsigned_int(dragonBones::JSONDataParser::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int),dragonBones::JSONDataParser*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>,std::__ndk1::allocator<std::__ndk1::__bind<unsigned_int(dragonBones::JSONDataParser::*)(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int),dragonBones::JSONDataParser*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>>,unsigned_int(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&,unsigned_int,unsigned_int)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_016d6ef8;
                    /* try { // try from 00d9cec0 to 00e9cf47 has its CatchHandler @ 00d9cec0
                       catch() { ... } // from try @ 00d9cec0 with catch @ 00d9cec0
                       catch() { ... } // from try @ 00d9d384 with catch @ 00d9cec0
                       catch() { ... } // from try @ 00d9d490 with catch @ 00d9cec0
                       catch() { ... } // from try @ 00d9d508 with catch @ 00d9cec0
                       catch() { ... } // from try @ 00d9d530 with catch @ 00d9cec0 */
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

