
/* fairygui::WeakPtr::TEMPNAMEPLACEHOLDERVALUE(fairygui::WeakPtr const&) */

WeakPtr * __thiscall fairygui::WeakPtr::operator=(WeakPtr *this,WeakPtr *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  piecewise_construct_t *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(ulong *)this != 0) {
    remove(*(ulong *)this);
  }
  uVar3 = *(ulong *)param_1;
  uVar5 = 0;
  if (((uVar3 != 0) && (DAT_017829f0 != 0)) && (uVar5 = 0, DAT_017829e0 != 0)) {
    uVar5 = CONCAT17(POPCOUNT((char)(DAT_017829e0 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(DAT_017829e0 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(DAT_017829e0 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(DAT_017829e0 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(DAT_017829e0 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(DAT_017829e0 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(
                                                  DAT_017829e0 >> 8)),POPCOUNT((char)DAT_017829e0)))
                                                  )))));
    uVar11 = NEON_uaddlv(uVar5,1);
    uVar6 = CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = DAT_017829e0 - 1 & uVar3;
    }
    else {
      uVar7 = uVar3;
      if (DAT_017829e0 <= uVar3) {
        uVar7 = 0;
        if (DAT_017829e0 != 0) {
          uVar7 = uVar3 / DAT_017829e0;
        }
        uVar7 = uVar3 - uVar7 * DAT_017829e0;
      }
    }
    plVar8 = *(long **)(_weakPointers + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar3) {
          if (plVar8[2] == uVar3) {
            lVar10 = plVar8[3];
            if (lVar10 != 0) {
              lVar4 = *(long *)(lVar10 + 0x1d0);
              if (lVar4 == 0) {
                local_40 = (piecewise_construct_t *)(lVar10 + 0x1c8);
                lVar4 = std::__ndk1::
                        __hash_table<std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>>>
                        ::
                        __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                                  ((ulong *)&_weakPointers,local_40,(tuple *)&DAT_013cfda0,
                                   (tuple *)&local_40);
                *(long *)(lVar4 + 0x18) = lVar10;
                lVar4 = *(long *)(lVar10 + 0x1d0);
              }
              uVar5 = *(undefined8 *)(lVar10 + 0x1c8);
              *(long *)(lVar10 + 0x1d0) = lVar4 + 1;
              goto LAB_00aba12c;
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & DAT_017829e0 - 1;
          }
          else if (DAT_017829e0 <= uVar9) {
            uVar1 = 0;
            if (DAT_017829e0 != 0) {
              uVar1 = uVar9 / DAT_017829e0;
            }
            uVar9 = uVar9 - uVar1 * DAT_017829e0;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    uVar5 = 0;
  }
LAB_00aba12c:
  *(undefined8 *)this = uVar5;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

