
/* cocos2d::renderer::Pass::setProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::renderer::Technique::Parameter const&) */

void __thiscall
cocos2d::renderer::Pass::setProperty(Pass *this,basic_string *param_1,Parameter *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50 [2];
  undefined1 *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  local_50[0] = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                          ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_40,pbVar2,uVar1);
  local_40 = (undefined1 *)local_50;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
          ::
          __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                    ((ulong *)(this + 0x38),(piecewise_construct_t *)local_50,(tuple *)&DAT_0186917d
                     ,(tuple *)&local_40);
  Technique::Parameter::operator=((Parameter *)(lVar4 + 0x18),param_2);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

