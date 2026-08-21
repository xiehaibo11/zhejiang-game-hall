
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
  undefined4 uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  void *local_40 [3];
  long local_28;
  ulong uVar12;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x188);
  if (uVar4 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
                    /* catch() { ... } // from try @ 009eba34 with catch @ 009ebb18
                       catch() { ... } // from try @ 009ebac8 with catch @ 009ebb18 */
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
    uVar6 = (ulong)param_1;
    if ((uVar12 & 0xffffffff) < 2) {
      uVar7 = uVar4 - 1 & uVar6;
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
    plVar5 = *(long **)(*(long *)(this + 0x180) + uVar7 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar8 = plVar5[1];
        if (uVar8 == uVar6) {
          if ((int)plVar5[2] == param_1) {
            uVar9 = *(undefined4 *)((long)plVar5 + 0x14);
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
            ::remove(local_40,this + 0x180,plVar5);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            goto LAB_009ebbc0;
          }
        }
        else {
          if ((uVar12 & 0xffffffff) < 2) {
            uVar8 = uVar8 & uVar4 - 1;
          }
          else if (uVar4 <= uVar8) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar8 / uVar4;
            }
            uVar8 = uVar8 - uVar1 * uVar4;
          }
          if (uVar8 != uVar7) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  uVar9 = 0xffffffff;
LAB_009ebbc0:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

