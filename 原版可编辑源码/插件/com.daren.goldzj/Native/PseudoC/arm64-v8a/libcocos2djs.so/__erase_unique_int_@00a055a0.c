
/* unsigned long std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   std::__ndk1::function<void (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float)> >, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, std::__ndk1::function<void (std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float)> >,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, std::__ndk1::function<void (std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float)> >,
   std::__ndk1::equal_to<int>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   std::__ndk1::function<void (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float)> > > >::__erase_unique<int>(int const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>>>
::__erase_unique<int>
          (__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>>>
           *this,int *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  void *local_40 [2];
  char local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a055b8 to 00b055bf has its CatchHandler @ 00a05610 */
  uVar4 = *(ulong *)(this + 8);
                    /* try { // try from 00a055c0 to 00b05647 has its CatchHandler @ 00a0551c */
  if (uVar4 != 0) {
    uVar6 = (ulong)*param_1;
    uVar7 = uVar4 - 1;
    if ((uVar7 & uVar4) == 0) {
      uVar8 = uVar7 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)this + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
                    /* catch() { ... } // from try @ 00a055b8 with catch @ 00a05610 */
          if (*(int *)(plVar9 + 2) == *param_1) {
            remove(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              if (local_30 != '\0') {
                plVar9 = *(long **)((long)pvVar3 + 0x40);
                if ((long *)((long)pvVar3 + 0x20) == plVar9) {
                  pcVar5 = *(code **)(*plVar9 + 0x20);
                }
                else {
                  if (plVar9 == (long *)0x0) goto LAB_00a056c0;
                  pcVar5 = *(code **)(*plVar9 + 0x28);
                }
                (*pcVar5)();
              }
LAB_00a056c0:
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00a05658;
          }
        }
        else {
          if ((uVar7 & uVar4) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            if (uVar10 - uVar1 * uVar4 == uVar8) goto LAB_00a0563c;
            break;
          }
          if (uVar10 != uVar8) break;
        }
LAB_00a0563c:
      }
    }
  }
  uVar4 = 0;
LAB_00a05658:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

