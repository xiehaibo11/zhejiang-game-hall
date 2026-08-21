
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<int>,
   true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   >::__emplace_unique_key_args<int, std::__ndk1::pair<int const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&>(int const&,
   std::__ndk1::pair<int const, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
     ::
     __emplace_unique_key_args<int,std::__ndk1::pair<int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
               (int *param_1,pair *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  pair *ppVar5;
  ulong uVar6;
  ulong uVar7;
  pair *ppVar8;
  pair *ppVar9;
  pair *ppVar10;
  pair *unaff_x23;
  long *local_60;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  ppVar10 = *(pair **)(param_1 + 2);
  ppVar9 = (pair *)(long)*(int *)param_2;
  if (ppVar10 != (pair *)0x0) {
    ppVar5 = ppVar10 + -1;
    if (((ulong)ppVar5 & (ulong)ppVar10) == 0) {
      unaff_x23 = (pair *)((ulong)ppVar5 & (ulong)ppVar9);
    }
    else {
      unaff_x23 = ppVar9;
      if (ppVar10 <= ppVar9) {
        uVar6 = 0;
        if (ppVar10 != (pair *)0x0) {
          uVar6 = (ulong)ppVar9 / (ulong)ppVar10;
        }
        unaff_x23 = ppVar9 + -(uVar6 * (long)ppVar10);
      }
    }
    plVar2 = *(long **)(*(long *)param_1 + (long)unaff_x23 * 8);
    if (plVar2 != (undefined8 *)0x0) {
      do {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) goto LAB_008ff73c;
        ppVar8 = (pair *)plVar2[1];
        if (ppVar8 != ppVar9) {
          if (((ulong)ppVar5 & (ulong)ppVar10) == 0) {
            ppVar8 = (pair *)((ulong)ppVar8 & (ulong)ppVar5);
          }
          else if (ppVar10 <= ppVar8) {
            uVar6 = 0;
            if (ppVar10 != (pair *)0x0) {
              uVar6 = (ulong)ppVar8 / (ulong)ppVar10;
            }
            if (ppVar8 + -(uVar6 * (long)ppVar10) == unaff_x23) goto LAB_008ff728;
            goto LAB_008ff73c;
          }
          if (ppVar8 != unaff_x23) goto LAB_008ff73c;
        }
LAB_008ff728:
      } while ((int)plVar2[2] != *(int *)param_2);
      uVar3 = 0;
      goto LAB_008ff870;
    }
  }
LAB_008ff73c:
  __construct_node_hash<std::__ndk1::pair<int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
            ((ulong)param_1,ppVar9);
  if ((ppVar10 == (pair *)0x0) ||
     ((float)param_1[8] * (float)ppVar10 < (float)(*(long *)(param_1 + 6) + 1))) {
    if (ppVar10 < (pair *)0x3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)(((ulong)(ppVar10 + -1) & (ulong)ppVar10) != 0);
    }
    uVar6 = uVar6 | (long)ppVar10 << 1;
    uVar7 = (ulong)((float)(*(long *)(param_1 + 6) + 1) / (float)param_1[8]);
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            *)param_1,uVar7);
    ppVar10 = *(pair **)(param_1 + 2);
    if (((ulong)(ppVar10 + -1) & (ulong)ppVar10) == 0) {
      unaff_x23 = (pair *)((ulong)(ppVar10 + -1) & (ulong)ppVar9);
    }
    else {
      unaff_x23 = ppVar9;
      if (ppVar10 <= ppVar9) {
        uVar6 = 0;
        if (ppVar10 != (pair *)0x0) {
          uVar6 = (ulong)ppVar9 / (ulong)ppVar10;
        }
        unaff_x23 = ppVar9 + -(uVar6 * (long)ppVar10);
      }
    }
  }
  plVar2 = *(long **)(*(long *)param_1 + (long)unaff_x23 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)(param_1 + 4);
    *local_60 = *plVar2;
    *plVar2 = (long)local_60;
    *(long **)(*(long *)param_1 + (long)unaff_x23 * 8) = plVar2;
    if (*local_60 != 0) {
      ppVar9 = *(pair **)(*local_60 + 8);
      if (((ulong)(ppVar10 + -1) & (ulong)ppVar10) == 0) {
        ppVar9 = (pair *)((ulong)ppVar9 & (ulong)(ppVar10 + -1));
      }
      else if (ppVar10 <= ppVar9) {
        uVar6 = 0;
        if (ppVar10 != (pair *)0x0) {
          uVar6 = (ulong)ppVar9 / (ulong)ppVar10;
        }
        ppVar9 = ppVar9 + -(uVar6 * (long)ppVar10);
      }
      *(long **)(*(long *)param_1 + (long)ppVar9 * 8) = local_60;
    }
  }
  else {
    *local_60 = *plVar2;
    *plVar2 = (long)local_60;
  }
  uVar3 = 1;
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  plVar2 = local_60;
LAB_008ff870:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2,uVar3);
}

