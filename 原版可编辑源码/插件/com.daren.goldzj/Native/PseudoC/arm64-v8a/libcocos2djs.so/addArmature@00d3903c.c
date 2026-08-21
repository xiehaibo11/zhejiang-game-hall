
/* dragonBones::DragonBonesData::addArmature(dragonBones::ArmatureData*) */

void __thiscall
dragonBones::DragonBonesData::addArmature(DragonBonesData *this,ArmatureData *param_1)

{
  basic_string *pbVar1;
  ulong *puVar2;
  long lVar3;
  DragonBonesData *pDVar4;
  long lVar5;
  void *__dest;
  void *__src;
  ulong uVar6;
  ulong uVar7;
  basic_string *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar1 = (basic_string *)(param_1 + 0x20);
  pDVar4 = (DragonBonesData *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                       *)(this + 0x90),pbVar1);
  if (this + 0x98 != pDVar4) goto LAB_00d39158;
  *(DragonBonesData **)(param_1 + 0x158) = this;
  local_50 = pbVar1;
  lVar5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x90),(piecewise_construct_t *)pbVar1,
                     (tuple *)&DAT_019489d7,(tuple *)&local_50);
  *(ArmatureData **)(lVar5 + 0x38) = param_1;
  puVar2 = *(ulong **)(this + 0x80);
  if (puVar2 == *(ulong **)(this + 0x88)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x78),pbVar1);
    goto LAB_00d39158;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if (((byte)*pbVar1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    uVar6 = *(ulong *)pbVar1;
    puVar2[2] = *(ulong *)(param_1 + 0x30);
    puVar2[1] = uVar7;
    *puVar2 = uVar6;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x28);
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x30);
    if (uVar6 < 0x17) {
      __dest = (void *)((long)puVar2 + 1);
      *(char *)puVar2 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_00d39138;
    }
    else {
      uVar7 = uVar6 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar7);
      puVar2[1] = uVar6;
      puVar2[2] = (ulong)__dest;
      *puVar2 = uVar7 | 1;
LAB_00d39138:
      memcpy(__dest,__src,uVar6);
    }
    *(undefined1 *)((long)__dest + uVar6) = 0;
  }
  *(long *)(this + 0x80) = *(long *)(this + 0x80) + 0x18;
LAB_00d39158:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

