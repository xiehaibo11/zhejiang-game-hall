
/* dragonBones::ArmatureData::addAnimation(dragonBones::AnimationData*) */

void __thiscall dragonBones::ArmatureData::addAnimation(ArmatureData *this,AnimationData *param_1)

{
  basic_string *pbVar1;
  ulong *puVar2;
  long lVar3;
  ArmatureData *pAVar4;
  long lVar5;
  void *__dest;
  ulong uVar6;
  void *__src;
  ulong uVar7;
  basic_string *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pbVar1 = (basic_string *)(param_1 + 0x38);
  pAVar4 = (ArmatureData *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                       *)(this + 0x120),pbVar1);
  if (this + 0x128 != pAVar4) goto LAB_00d35afc;
  *(ArmatureData **)(param_1 + 0xf0) = this;
  local_60 = pbVar1;
  lVar5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x120),(piecewise_construct_t *)pbVar1,
                     (tuple *)&DAT_0194880f,(tuple *)&local_60);
  *(AnimationData **)(lVar5 + 0x38) = param_1;
  puVar2 = *(ulong **)(this + 0x50);
  if (puVar2 == *(ulong **)(this + 0x58)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x48),pbVar1);
    lVar5 = *(long *)(this + 0x140);
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    if (((byte)*pbVar1 & 1) == 0) {
      uVar7 = *(ulong *)(param_1 + 0x40);
      uVar6 = *(ulong *)pbVar1;
      puVar2[2] = *(ulong *)(param_1 + 0x48);
      puVar2[1] = uVar7;
      *puVar2 = uVar6;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x40);
      if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __src = *(void **)(param_1 + 0x48);
      if (uVar6 < 0x17) {
        __dest = (void *)((long)puVar2 + 1);
        *(char *)puVar2 = (char)((int)uVar6 << 1);
        if (uVar6 != 0) goto LAB_00d35ad0;
      }
      else {
        uVar7 = uVar6 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar7);
        puVar2[1] = uVar6;
        puVar2[2] = (ulong)__dest;
        *puVar2 = uVar7 | 1;
LAB_00d35ad0:
        memcpy(__dest,__src,uVar6);
      }
      *(undefined1 *)((long)__dest + uVar6) = 0;
    }
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 0x18;
    lVar5 = *(long *)(this + 0x140);
  }
  if (lVar5 == 0) {
    *(AnimationData **)(this + 0x140) = param_1;
  }
LAB_00d35afc:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

