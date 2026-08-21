
/* dragonBones::AnimationData::cacheFrames(unsigned int) */

void __thiscall dragonBones::AnimationData::cacheFrames(AnimationData *this,uint param_1)

{
  piecewise_construct_t **pppVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 local_68 [2];
  piecewise_construct_t *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(float *)(this + 0x30) <= 0.0) {
    local_68[0] = 0x3f800000;
    local_60 = (piecewise_construct_t *)
               CONCAT44(local_60._4_4_,(int)(*(float *)(this + 0x28) * (float)param_1));
    pppVar1 = (piecewise_construct_t **)local_68;
    if (1.0 <= (float)(int)(*(float *)(this + 0x28) * (float)param_1)) {
      pppVar1 = &local_60;
    }
    uVar7 = (ulong)((float)(int)(*(float *)(this + 0x24) * *(float *)pppVar1) + 1.0);
    *(float *)(this + 0x30) = *(float *)pppVar1;
    std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
              ((vector<bool,std::__ndk1::allocator<bool>> *)(this + 0x50),uVar7,false);
    lVar4 = *(long *)(this + 0xf0);
    plVar8 = *(long **)(lVar4 + 0x60);
    plVar2 = *(long **)(lVar4 + 0x68);
    if (plVar8 != plVar2) {
      do {
        local_60 = (piecewise_construct_t *)(*plVar8 + 0x18);
        lVar4 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)(this + 0xb0),local_60,(tuple *)&DAT_019487be,
                           (tuple *)&local_60);
        local_60 = (piecewise_construct_t *)CONCAT44(local_60._4_4_,0xffffffff);
        lVar5 = *(long *)(lVar4 + 0x38);
        uVar6 = *(long *)(lVar4 + 0x40) - lVar5 >> 2;
        if (uVar6 < uVar7) {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                    ((vector<int,std::__ndk1::allocator<int>> *)(lVar4 + 0x38),uVar7 - uVar6,
                     (int *)&local_60);
        }
        else if (uVar6 != uVar7) {
          *(ulong *)(lVar4 + 0x40) = lVar5 + uVar7 * 4;
        }
        plVar8 = plVar8 + 1;
      } while (plVar2 != plVar8);
      lVar4 = *(long *)(this + 0xf0);
    }
    plVar8 = *(long **)(lVar4 + 0x78);
    plVar2 = *(long **)(lVar4 + 0x80);
    if (plVar8 != plVar2) {
      do {
        local_60 = (piecewise_construct_t *)(*plVar8 + 0x20);
        lVar4 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)(this + 200),local_60,(tuple *)&DAT_019487be,
                           (tuple *)&local_60);
        local_60 = (piecewise_construct_t *)CONCAT44(local_60._4_4_,0xffffffff);
        lVar5 = *(long *)(lVar4 + 0x38);
        uVar6 = *(long *)(lVar4 + 0x40) - lVar5 >> 2;
        if (uVar6 < uVar7) {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                    ((vector<int,std::__ndk1::allocator<int>> *)(lVar4 + 0x38),uVar7 - uVar6,
                     (int *)&local_60);
        }
        else if (uVar6 != uVar7) {
          *(ulong *)(lVar4 + 0x40) = lVar5 + uVar7 * 4;
        }
        plVar8 = plVar8 + 1;
      } while (plVar2 != plVar8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

