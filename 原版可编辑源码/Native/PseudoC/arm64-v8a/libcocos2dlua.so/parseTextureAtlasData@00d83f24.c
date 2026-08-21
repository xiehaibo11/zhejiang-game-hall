
/* dragonBones::BaseFactory::parseTextureAtlasData(char const*, void*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

undefined8 __thiscall
dragonBones::BaseFactory::parseTextureAtlasData
          (BaseFactory *this,char *param_1,void *param_2,basic_string *param_3,float param_4)

{
  undefined8 uVar1;
  undefined4 in_register_00005004;
  
  uVar1 = (**(code **)(*(long *)this + 0x48))(this,0,0);
                    /* try { // try from 00d83f6c to 00e84153 has its CatchHandler @ 00d84ef0 */
  (**(code **)(**(long **)(this + 0x48) + 0x18))
            (CONCAT44(in_register_00005004,param_4),*(long **)(this + 0x48),param_1,uVar1);
  (**(code **)(*(long *)this + 0x48))(this,uVar1,param_2);
  (**(code **)(*(long *)this + 0x80))(this,uVar1,param_3);
  return uVar1;
}

