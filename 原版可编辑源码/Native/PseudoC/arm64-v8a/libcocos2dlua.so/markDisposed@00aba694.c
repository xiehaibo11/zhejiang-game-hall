
/* fairygui::WeakPtr::markDisposed(fairygui::GObject*) */

void fairygui::WeakPtr::markDisposed(GObject *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  void *local_40 [3];
  long local_28;
  ulong uVar10;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((DAT_017829f0 != 0) && (DAT_017829e0 != 0)) {
    uVar4 = *(ulong *)(param_1 + 0x1c8);
    uVar9 = CONCAT17(POPCOUNT((char)(DAT_017829e0 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(DAT_017829e0 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(DAT_017829e0 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(DAT_017829e0 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(DAT_017829e0 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(DAT_017829e0 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(
                                                  DAT_017829e0 >> 8)),POPCOUNT((char)DAT_017829e0)))
                                                  )))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = DAT_017829e0 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (DAT_017829e0 <= uVar4) {
        uVar5 = 0;
        if (DAT_017829e0 != 0) {
          uVar5 = uVar4 / DAT_017829e0;
        }
        uVar5 = uVar4 - uVar5 * DAT_017829e0;
      }
    }
    plVar6 = *(long **)(_weakPointers + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if (plVar6[2] == uVar4) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>>>
            ::remove(local_40,&_weakPointers);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            break;
          }
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & DAT_017829e0 - 1;
          }
          else if (DAT_017829e0 <= uVar7) {
            uVar1 = 0;
            if (DAT_017829e0 != 0) {
              uVar1 = uVar7 / DAT_017829e0;
            }
            uVar7 = uVar7 - uVar1 * DAT_017829e0;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

