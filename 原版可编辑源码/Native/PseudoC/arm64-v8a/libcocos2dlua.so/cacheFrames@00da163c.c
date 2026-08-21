
/* dragonBones::AnimationData::cacheFrames(unsigned int) */

void __thiscall dragonBones::AnimationData::cacheFrames(AnimationData *this,uint param_1)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
  *p_Var1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  __tree_node_base **pp_Var5;
  __tree_node_base *p_Var6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  __tree_node_base *p_Var10;
  long *plVar11;
  float local_74;
  undefined8 local_70;
  long local_68;
  
                    /* try { // try from 00da164c to 00ea1717 has its CatchHandler @ 00da164c
                       catch() { ... } // from try @ 00da164c with catch @ 00da164c
                       catch() { ... } // from try @ 00da1720 with catch @ 00da164c
                       catch() { ... } // from try @ 00da190c with catch @ 00da164c */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(float *)(this + 0x30) <= 0.0) {
    local_74 = 1.0;
    local_70._0_4_ = (float)(int)(*(float *)(this + 0x28) * (float)param_1);
    pfVar2 = &local_74;
    if (1.0 <= (float)(int)(*(float *)(this + 0x28) * (float)param_1)) {
      pfVar2 = (float *)&local_70;
    }
    uVar9 = (ulong)((float)(int)(*(float *)(this + 0x24) * *pfVar2) + 1.0);
    *(float *)(this + 0x30) = *pfVar2;
    std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
              ((vector<bool,std::__ndk1::allocator<bool>> *)(this + 0x50),uVar9,false);
    lVar7 = *(long *)(this + 0xf0);
    plVar11 = *(long **)(lVar7 + 0x60);
    plVar3 = *(long **)(lVar7 + 0x68);
    if (plVar11 != plVar3) {
      p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                *)(this + 0xb0);
      do {
        lVar7 = *plVar11;
                    /* try { // try from 00da1718 to 00ea171f has its CatchHandler @ 00da1910 */
                    /* try { // try from 00da1720 to 00ea17e7 has its CatchHandler @ 00da164c */
        pp_Var5 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                  ::
                  __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            (p_Var1,(__tree_end_node **)&local_70,(basic_string *)(lVar7 + 0x18));
        p_Var10 = *pp_Var5;
        if (p_Var10 == (__tree_node_base *)0x0) {
          p_Var10 = operator_new(0x50);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(p_Var10 + 0x20),(basic_string *)(lVar7 + 0x18));
          *(undefined8 *)(p_Var10 + 0x38) = 0;
          *(undefined8 *)(p_Var10 + 0x40) = 0;
          *(undefined8 *)(p_Var10 + 0x48) = 0;
          *(undefined8 *)p_Var10 = 0;
          *(undefined8 *)(p_Var10 + 8) = 0;
          *(ulong *)(p_Var10 + 0x10) = CONCAT44(local_70._4_4_,(float)local_70);
          *pp_Var5 = p_Var10;
          p_Var6 = p_Var10;
          if (**(long **)p_Var1 != 0) {
            *(long *)p_Var1 = **(long **)p_Var1;
            p_Var6 = *pp_Var5;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0xb8),p_Var6);
          *(long *)(this + 0xc0) = *(long *)(this + 0xc0) + 1;
        }
        local_70._0_4_ = -NAN;
        lVar7 = *(long *)(p_Var10 + 0x38);
        uVar8 = *(long *)(p_Var10 + 0x40) - lVar7 >> 2;
        if (uVar8 < uVar9) {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                    ((vector<int,std::__ndk1::allocator<int>> *)(p_Var10 + 0x38),uVar9 - uVar8,
                     (int *)&local_70);
        }
        else if (uVar9 < uVar8) {
          *(ulong *)(p_Var10 + 0x40) = lVar7 + uVar9 * 4;
        }
        plVar11 = plVar11 + 1;
      } while (plVar3 != plVar11);
      lVar7 = *(long *)(this + 0xf0);
    }
    plVar11 = *(long **)(lVar7 + 0x78);
    plVar3 = *(long **)(lVar7 + 0x80);
    if (plVar11 != plVar3) {
      p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                *)(this + 200);
      do {
        lVar7 = *plVar11;
        pp_Var5 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                  ::
                  __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            (p_Var1,(__tree_end_node **)&local_70,(basic_string *)(lVar7 + 0x20));
        p_Var10 = *pp_Var5;
        if (p_Var10 == (__tree_node_base *)0x0) {
          p_Var10 = operator_new(0x50);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(p_Var10 + 0x20),(basic_string *)(lVar7 + 0x20));
          *(undefined8 *)(p_Var10 + 0x38) = 0;
          *(undefined8 *)(p_Var10 + 0x40) = 0;
          *(undefined8 *)(p_Var10 + 0x48) = 0;
          *(undefined8 *)p_Var10 = 0;
          *(undefined8 *)(p_Var10 + 8) = 0;
          *(ulong *)(p_Var10 + 0x10) = CONCAT44(local_70._4_4_,(float)local_70);
          *pp_Var5 = p_Var10;
          p_Var6 = p_Var10;
          if (**(long **)p_Var1 != 0) {
            *(long *)p_Var1 = **(long **)p_Var1;
            p_Var6 = *pp_Var5;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0xd0),p_Var6);
          *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + 1;
        }
        local_70._0_4_ = -NAN;
        lVar7 = *(long *)(p_Var10 + 0x38);
        uVar8 = *(long *)(p_Var10 + 0x40) - lVar7 >> 2;
        if (uVar8 < uVar9) {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                    ((vector<int,std::__ndk1::allocator<int>> *)(p_Var10 + 0x38),uVar9 - uVar8,
                     (int *)&local_70);
        }
        else if (uVar9 < uVar8) {
          *(ulong *)(p_Var10 + 0x40) = lVar7 + uVar9 * 4;
        }
                    /* try { // try from 00da17e8 to 00ea186f has its CatchHandler @ 00da192c */
        plVar11 = plVar11 + 1;
      } while (plVar3 != plVar11);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

