
/* dragonBones::AnimationData::addConstraintTimeline(dragonBones::ConstraintData*,
   dragonBones::TimelineData*) */

void __thiscall
dragonBones::AnimationData::addConstraintTimeline
          (AnimationData *this,ConstraintData *param_1,TimelineData *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  TimelineData *pTVar5;
  TimelineData *local_40 [2];
  piecewise_construct_t *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (piecewise_construct_t *)(param_1 + 0x18);
  local_40[0] = param_2;
  lVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x98),local_30,(tuple *)&DAT_019487be,
                     (tuple *)&local_30);
  puVar4 = *(undefined8 **)(lVar2 + 0x38);
  puVar3 = *(undefined8 **)(lVar2 + 0x40);
  if (puVar4 != puVar3) {
    pTVar5 = (TimelineData *)*puVar4;
    while (pTVar5 != param_2) {
      puVar4 = puVar4 + 1;
      if (puVar3 == puVar4) goto LAB_00d343cc;
      pTVar5 = (TimelineData *)*puVar4;
    }
  }
  if (puVar4 == puVar3) {
LAB_00d343cc:
    if (puVar3 == *(undefined8 **)(lVar2 + 0x48)) {
      std::__ndk1::
      vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>::
      __push_back_slow_path<dragonBones::TimelineData*const&>
                ((vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>
                  *)(lVar2 + 0x38),local_40);
    }
    else {
      *puVar3 = param_2;
      *(long *)(lVar2 + 0x40) = *(long *)(lVar2 + 0x40) + 8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

