
/* universe::Downloader2::removeScriptListener(int) */

undefined4 __thiscall universe::Downloader2::removeScriptListener(Downloader2 *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x188);
  if (uVar4 != 0) {
    uVar6 = uVar4 - 1;
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
    plVar5 = *(long **)(*(long *)(this + 0x180) + uVar8 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar9 = plVar5[1];
        if (uVar9 == uVar7) {
          if (*(int *)(plVar5 + 2) == param_1) {
            uVar10 = *(undefined4 *)((long)plVar5 + 0x14);
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
            ::remove(local_40,this + 0x180,plVar5);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            goto LAB_00a042f4;
          }
        }
        else {
          if ((uVar6 & uVar4) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
                    /* try { // try from 00a042d0 to 00b042db has its CatchHandler @ 00a04308 */
            if (uVar9 - uVar1 * uVar4 == uVar8) goto LAB_00a042d8;
            break;
          }
          if (uVar9 != uVar8) break;
        }
LAB_00a042d8:
      }
    }
  }
  uVar10 = 0xffffffff;
LAB_00a042f4:
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a042d0 with catch @ 00a04308
                        */
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

