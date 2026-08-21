
/* fairygui::WeakPtr::remove(unsigned long) */

long fairygui::WeakPtr::remove(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  void *local_40 [3];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if ((DAT_017829f0 != 0) && (DAT_017829e0 != 0)) {
    uVar11 = CONCAT17(POPCOUNT((char)(DAT_017829e0 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_017829e0 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_017829e0 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_017829e0 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_017829e0 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_017829e0 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_017829e0 >> 8)),POPCOUNT((char)DAT_017829e0)))
                                                  )))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar5 < 2) {
      uVar6 = DAT_017829e0 - 1 & param_1;
    }
    else {
      uVar6 = param_1;
      if (DAT_017829e0 <= param_1) {
        uVar6 = 0;
        if (DAT_017829e0 != 0) {
          uVar6 = param_1 / DAT_017829e0;
        }
        uVar6 = param_1 - uVar6 * DAT_017829e0;
      }
    }
    plVar7 = *(long **)(_weakPointers + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == param_1) {
          if (plVar7[2] == param_1) {
            lVar9 = plVar7[3];
            lVar1 = *(long *)(lVar9 + 0x1d0) + -1;
            *(long *)(lVar9 + 0x1d0) = lVar1;
            if (lVar1 == 0) {
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>>>
              ::remove(local_40,&_weakPointers);
              pvVar4 = local_40[0];
              local_40[0] = (void *)0x0;
              if (pvVar4 != (void *)0x0) {
                operator_delete(pvVar4);
              }
            }
            goto LAB_00aba2a8;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar8 = uVar8 & DAT_017829e0 - 1;
          }
          else if (DAT_017829e0 <= uVar8) {
            uVar2 = 0;
            if (DAT_017829e0 != 0) {
              uVar2 = uVar8 / DAT_017829e0;
            }
            uVar8 = uVar8 - uVar2 * DAT_017829e0;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  lVar9 = 0;
LAB_00aba2a8:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar9;
}

