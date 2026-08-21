
/* universe::Downloader2::addProgressScriptListener(int, int) */

void __thiscall
universe::Downloader2::addProgressScriptListener(Downloader2 *this,int param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  int local_3c [3];
  int *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x188);
  local_3c[0] = param_1;
  if (uVar4 != 0) {
    uVar5 = uVar4 - 1;
    uVar6 = (ulong)param_1;
    if ((uVar5 & uVar4) == 0) {
      uVar7 = uVar5 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x180) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_00a04214;
          uVar9 = plVar8[1];
          if (uVar9 != uVar6) break;
          if (*(int *)(plVar8 + 2) == param_1) {
            local_30 = local_3c;
            lVar3 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
                    ::
                    __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                              ((int *)(this + 0x1a8),(piecewise_construct_t *)local_3c,
                               (tuple *)&DAT_0188e4f3,(tuple *)&local_30);
            *(int *)(lVar3 + 0x14) = param_2;
            goto LAB_00a04214;
          }
        }
        if ((uVar5 & uVar4) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (uVar4 <= uVar9) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar9 / uVar4;
          }
          uVar9 = uVar9 - uVar1 * uVar4;
        }
      } while (uVar9 == uVar7);
    }
  }
LAB_00a04214:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

