
/* universe::Downloader2::addProgressListener(int, std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float)> const&) */

void __thiscall
universe::Downloader2::addProgressListener(Downloader2 *this,int param_1,function *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int local_7c [3];
  int *local_70 [4];
  int **local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x138);
                    /* try { // try from 00a03de8 to 00b03def has its CatchHandler @ 00a03eb4 */
  local_7c[0] = param_1;
  if (uVar4 != 0) {
    uVar6 = uVar4 - 1;
                    /* try { // try from 00a03df0 to 00b03ec7 has its CatchHandler @ 00a03c7c */
    uVar7 = (ulong)param_1;
    if ((uVar6 & uVar4) == 0) {
      uVar8 = uVar6 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar4 <= uVar7) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar7 / uVar4;
        }
        uVar8 = uVar7 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)(this + 0x130) + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_00a03f20;
          uVar10 = plVar9[1];
          if (uVar10 != uVar7) break;
          if (*(int *)(plVar9 + 2) == param_1) {
            local_70[0] = local_7c;
            lVar3 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>>>
                    ::
                    __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                              ((int *)(this + 0x158),(piecewise_construct_t *)local_7c,
                               (tuple *)&DAT_0188e4f3,(tuple *)local_70);
            plVar9 = *(long **)(param_2 + 0x20);
            if (plVar9 == (long *)0x0) {
              local_50 = (int **)0x0;
            }
            else if ((long *)param_2 == plVar9) {
              local_50 = local_70;
              (**(code **)(*plVar9 + 0x18))(plVar9,local_70);
            }
            else {
                    /* catch() { ... } // from try @ 00a03de8 with catch @ 00a03eb4 */
              local_50 = (int **)(**(code **)(*plVar9 + 0x10))(plVar9);
            }
            FUN_0097a520(local_70,lVar3 + 0x20);
            if (local_70 == local_50) {
              pcVar5 = *(code **)(*local_50 + 8);
            }
            else {
              if (local_50 == (int **)0x0) goto LAB_00a03f20;
              pcVar5 = *(code **)(*local_50 + 10);
            }
            (*pcVar5)();
            goto LAB_00a03f20;
          }
        }
        if ((uVar6 & uVar4) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar4 <= uVar10) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar10 / uVar4;
          }
          uVar10 = uVar10 - uVar1 * uVar4;
        }
      } while (uVar10 == uVar8);
    }
  }
LAB_00a03f20:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

