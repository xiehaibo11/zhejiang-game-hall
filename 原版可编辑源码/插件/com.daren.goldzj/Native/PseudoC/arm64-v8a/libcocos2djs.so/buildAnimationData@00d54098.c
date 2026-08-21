
/* dragonBones::ArmatureCache::buildAnimationData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
dragonBones::ArmatureCache::buildAnimationData(ArmatureCache *this,basic_string *param_1)

{
  basic_string *pbVar1;
  long lVar2;
  ArmatureCache *pAVar3;
  long lVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x38) != 0) {
    pAVar3 = (ArmatureCache *)
             std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>>>
             ::
             find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>>>
                         *)(this + 0x78),param_1);
    if (this + 0x80 != pAVar3) {
      this_00 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (pAVar3 + 0x38);
      goto LAB_00d54184;
    }
    lVar4 = (**(code **)(**(long **)(this + 0x38) + 0x60))();
    uVar5 = Animation::hasAnimation(*(Animation **)(lVar4 + 0xa8),param_1);
    if ((uVar5 & 1) != 0) {
      this_00 = operator_new(0x38);
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)this_00 = 0;
      this_00[0x18] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      *(undefined8 *)(this_00 + 0x2c) = 0;
      *(undefined8 *)(this_00 + 0x24) = 0;
      *(undefined4 *)(this_00 + 0x34) = 0;
      *(undefined8 *)(this_00 + 0x1c) = 0;
      if (this_00 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1)
      {
        uVar5 = *(ulong *)(param_1 + 8);
        pbVar1 = *(basic_string **)(param_1 + 0x10);
        if (((byte)*param_1 & 1) == 0) {
          pbVar1 = param_1 + 1;
          uVar5 = (ulong)((byte)*param_1 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this_00,(char *)pbVar1,uVar5);
      }
      local_40 = param_1;
      lVar4 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((basic_string *)(this + 0x78),(piecewise_construct_t *)param_1,
                         (tuple *)&DAT_01949131,(tuple *)&local_40);
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (lVar4 + 0x38) = this_00;
      goto LAB_00d54184;
    }
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
LAB_00d54184:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

