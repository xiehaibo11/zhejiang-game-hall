
/* cocos2d::renderer::Pass::setProperty(unsigned long, cocos2d::renderer::Technique::Parameter
   const&) */

void __thiscall cocos2d::renderer::Pass::setProperty(Pass *this,ulong param_1,Parameter *param_2)

{
  long lVar1;
  long lVar2;
  ulong local_40 [2];
  undefined1 *local_30;
  long local_28;
  
  local_30 = (undefined1 *)local_40;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = param_1;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
          ::
          __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                    ((ulong *)(this + 0x38),(piecewise_construct_t *)local_40,(tuple *)&DAT_0186917d
                     ,(tuple *)&local_30);
  Technique::Parameter::operator=((Parameter *)(lVar2 + 0x18),param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

